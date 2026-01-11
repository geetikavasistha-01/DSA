#include<stdio.h>
#include<vector>

using namespace std;

int isSorted(int a[], int n)
{
    for (int i=1;i<n;i++)
{
        if(a[i] < a[i-1])
        {
            return false;
        }
} 
    return true;
}

int main()
{
    int a[] = {1, 2, 3, 4, 5} , n=5;
    printf( "%s", isSorted(a,n) ? "True" : "False");
    return 0;
}