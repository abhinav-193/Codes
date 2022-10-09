// You are given a rows x cols matrix grid representing a field of cherries where grid[i][j] represents the number of cherries that you can collect from the (i, j) cell.

// You have two robots that can collect cherries for you:

// Robot #1 is located at the top-left corner (0, 0), and
// Robot #2 is located at the top-right corner (0, cols - 1).
// Return the maximum number of cherries collection using both robots by following the rules below:

// From a cell (i, j), robots can move to cell (i + 1, j - 1), (i + 1, j), or (i + 1, j + 1).
// When any robot passes through a cell, It picks up all cherries, and the cell becomes an empty cell.
// When both robots stay in the same cell, only one takes the cherries.
// Both robots cannot move outside of the grid at any moment.
// Both robots should reach the bottom row in grid.

#include <bits/stdc++.h>
using namespace std;
//! Memoization Solution

class Solution {
public:
    
    int f(int i, int j1, int j2, vector<vector<int>>&grid, int n, int m, vector<vector<vector<int>>>&arr){
        if(j1<0 || j1>=m || j2<0 || j2>=m) return -1e2;
        if(i==n-1){
            if(j1==j2) return grid[i][j1];
            else return grid[i][j1] + grid[i][j2];
        }
        if(arr[i][j1][j2]!=-1) return arr[i][j1][j2];
        
        int maxi=0;
        for(int dj1=-1;dj1<=1;dj1++){
            for(int dj2=-1;dj2<=1;dj2++){
                if(j1==j2){
                    maxi=max(maxi, grid[i][j1] + f(i+1,j1+dj1,j2+dj2,grid,n,m,arr));
                }
                else{
                  maxi=max(maxi, grid[i][j1] + grid[i][j2] + f(i+1, j1+dj1, j2+dj2,grid,n,m,arr));  
                } 
            }
        }
        
        return arr[i][j1][j2]=maxi;
    }
    int cherryPickup(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        
        vector<vector<vector<int>>>dp(n,vector<vector<int>>(m,vector<int>(m,-1)));
        
        return f(0,0,m-1,grid,n,m,dp);
    }
};