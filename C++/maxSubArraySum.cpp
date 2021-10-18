#include <iostream>
using namespace std;

//Prog to find the largest sum of subarray

int largestSubArraySum_BRUTEFORCE(int a[],int n) //Complexity = O(n^3)
{
    int currentSum=0,largestSum=0;

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
        currentSum=0;
            for(int k=i;k<=j;k++)
            {
                currentSum+=a[k];
            }
        largestSum=max(largestSum,currentSum);
        }
        
    }

    return largestSum;
}


int largestSubArraySum_usingPrefixSum(int a[],int n) //Complexity = O(n^2)

{
    //We know, that by using the Brute Force, we were spending O(n) time in finding the sum of the current array (lines 12-15). In this method, we'll use the concept of prefix sum to reduce this time to O(1).

    //What is prefix sum? 
    //Ans - Here basically, we'll be storing the cumulative sum of the array elements. For example, if our input array is A[]={1,2,3,4,5}, then

                        //If  A[]={1,2,3,4,5};
                        //Then prefixSum[]={1,3,5,9,14};

    //So basically prefix sum is an array in which the ith term contains the sum of the original array elementst till the ith index.

    //With the help of this, whenever we are at a particular subarray whose starting index is i, and end index is j, we can obtain the sum of that subarray by simply doing

                    // sum=prefixSum[j] - prefixSum[i-1];

    


    //Calculating the prefix sum

    int prefixSum[n]={0};
    prefixSum[0]=a[0];

    for(int i=1;i<=n;i++){
        prefixSum[i]=prefixSum[i-1]+a[i];
    }

    //Here we purposely initialised prefixSum[0] = a[0] in the beginning because if we dont to this, then in the for loop, for i = 0, it will try to access a[i - 1], i.e a[-1] which is an error

    //Calculating largest Sub array sum

    int largestSubArraySum=0,currentSubArraySum=0;

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            currentSubArraySum=i>0?prefixSum[j]-prefixSum[i-1]:prefixSum[j];
        largestSubArraySum=max(largestSubArraySum,currentSubArraySum);
        }

    }

    return largestSubArraySum;
}

int largestSubArraySum_KadaneAlgorithm(int a[],int n)  //Complexity = O(n)
{
    int currentSum=0,largestSum=0;

    for(int i=0;i<n;i++){

        currentSum+=a[i];
        if(currentSum<0)
            currentSum=0;
        
        largestSum=max(largestSum,currentSum);
    }

    return largestSum;
}

int main(){
    
   int a[]={-2,3,4,-1,5,-12,6,1,3};
   int size=sizeof(a)/sizeof(int);
   cout<<"Largest Sum = "<<largestSubArraySum_BRUTEFORCE(a,size)<<endl<<largestSubArraySum_usingPrefixSum(a,size)<<endl<<largestSubArraySum_KadaneAlgorithm(a,size);
   return 0;
}