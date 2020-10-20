#include <stdio.h>

int main()
{
    // int n;
    // cout<<"/n Enter no. of line ";
    // cin>>n;
    int n = 5; //No. of lines in pascal triangle
    int arr[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            arr[i][j] = 0;
            
    for (int line = 0; line < n; line++)
    {
        for (int i = 0; i <= line; i++)
        {
            if (line == i || i == 0)
                arr[line][i] = 1;
            else
                arr[line][i] = arr[line - 1][i - 1] + arr[line - 1][i];
            printf("%d ", arr[line][i]);
        }
        printf("\n");
    }
}
