#include <stdio.h>
#include <iostream>
using namespace std;
void TowerOfHanoi(int n, char A, char B, char C)
{
    if (n == 0)
    {
        return;
    }
    else
    {
        TowerOfHanoi(n - 1, A, C, B);
        cout << " From " << A << " to " << C << " through " << B << endl;
        TowerOfHanoi(n - 1, B, A, C);
    }
}

int main()
{

    TowerOfHanoi(3, 'A', 'B', 'C');

    return 0;
}