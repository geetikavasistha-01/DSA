#include<stdio.h>
#include<vector>

using namespace std;

int secondLargest ( vector<int> &a , int n )
{
    int largest = a[0];
    int slargest= -1;

    for(int i=1;i<n;i++)
    {
        if(a[i]> largest)
        {
            slargest = largest;
            largest = a[i];
        }
        else if( a[i] < largest && a[i] > slargest)
        {
            slargest = a[i];
        }
    }
    return slargest;
}

int secondSmallest ( vector<int> &a , int n )
{
    int smallest = a[0];
    int ssmallest= -1;

    for(int i=1;i<n;i++)
    {
        if(a[i]< smallest)
        {
            ssmallest = smallest;
            smallest = a[i];
        }
        else if( a[i] > smallest && a[i] < ssmallest)
        {
            ssmallest = a[i];
        }
    }
    return ssmallest;
}

int main()
{
    int n;
    scanf("%d", &n);
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    int second_largest = secondLargest(a,n);
    if(second_largest == -1)
        printf("No second largest element\n");
    else
        printf("Second largest element is: %d\n",second_largest);

    int second_smallest = secondSmallest(a,n);
    if(second_smallest == -1)
        printf("No second smallest element\n");
    else
        printf("Second smallest element is: %d\n",second_smallest);

    return 0;
}