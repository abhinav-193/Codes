#include<stdio.h>
#include<time.h>

double linearSearch(int arr[], int n, int ele){
    clock_t start, end;

    start = clock();
    for(int i = 0; i < n; i++){
        if(arr[i] == ele){
            break;
        }
    }
    end = clock();

    double exeTime = ((double)(end - start))/CLOCKS_PER_SEC;

    return exeTime;
}

double binarySearch(int arr[], int n, int ele){
    int low = 0;
    int high = n - 1;

    clock_t start, end;

    start = clock();
    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid] == ele){
            break;
        }
        else if(arr[mid] > ele){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    end = clock();
    double exeTime = ((double)(end - start))/CLOCKS_PER_SEC;

    return exeTime;
}

int main(){

    int arr[] = {3, 16, 45, 65, 89, 90, 99};

    int ele;
    printf("ENTER THE ELEMENT TO BE SEARCHED:");
    scanf("%d", &ele);

    double linearSearchExeTime = linearSearch(arr, 7, ele);
    double binarySearchExeTime = binarySearch(arr, 7, ele);

    if(linearSearchExeTime < binarySearchExeTime){
        printf("LINEAR SEARCH IS FASTER!!!");
    }else{
        printf("BINARY SEARCH IS FASTER!!!");
    }

    return 0;
}