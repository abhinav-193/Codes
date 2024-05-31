
#include<iostream> 

using namespace std; 

int main() 

{ 

cout<<"Banker's Algo.\n"; 

int n,r;

cout<<"Enter no. of Processes: "; 

cin>>n; 

cout<<"Enter no. of Resources: "; 

cin>>r; 

int allocation[n][r],max[n][r],available[r],need[n][r],work[r]; 

int i,j,safe[n]; 

bool finish[n] ; 

cout<<"Insert Allocation values:\n"; 

for(i=0;i<n;i++) 

 { 

for(j=0;j<r;j++) 

 { 

cin>>allocation[i][j]; 

 } 

 } 

cout<<"Insert Maximum Resource required:\n"; 

for(i=0;i<n;i++) 

 { 

for(j=0;j<r;j++) 

 { 

cin>>max[i][j]; 

 } 

 } 

cout<<"Insert Available Resource:\n"; 

for(j=0;j<r;j++) 

 { 

cin>>available[j]; 

 } 

cout<<"Need Matrix is :\n"; 

for(i=0;i<n;i++) 

 { 

for(j=0;j<r;j++) 

 { 

need[i][j]=max[i][j]-allocation[i][j]; 

cout<<need[i][j]<<" ";

} 

cout<<endl; 

 } 

for(i=0;i<n;i++) 

 { 

work[i]=available[i]; 

 } 

int count = 0; 

while (count < n) 

 { 

bool found = false; 

for (int p = 0; p < n; p++) 

 { 

if (finish[p] == 0) 

 { 

for (j = 0; j < r; j++) 

if (need[p][j] > work[j]) 

break; 

if (j == r) 

 { 

for (int k = 0 ; k < r ; k++) 

work[k] += allocation[p][k]; 

// Add this process to safe sequence. 

safe[count++] = p; 

 // Mark this p as finished 

finish[p] = 1; 

found = true; 

 } 

 } 

 } 

if (found == false) 

 { 

cout<< "System is not in safe state";

return false; 

 } 

 } 

cout<< "System is in safe state.\nSafesequence is: "; 

 for (int i = 0; i< n ; i++) 

 cout<< safe[i] << " "; 

}
