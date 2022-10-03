#include <stdio.h>

void Hanoi(int n, int start, int stop, int help){
    if(n==1)
        printf("Move 1 disk from %d to %d\n",start,stop);
    else{
        Hanoi(n-1,start,help,stop);
        printf("Move 1 disk from %d to %d\n",start,stop);
        Hanoi(n-1,help,stop,start);
    }
}

int main() {

    int n;
    printf("Enter the number of disks: ");
    scanf("%d",&n);

    Hanoi(n,1,3,2);

    return 0;
}