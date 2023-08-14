// Online C compiler to run C program online
/*
Minimum Platforms
Given arrival and departure times of all trains that reach a railway station. Find the minimum number of platforms required for the railway station so that no train is kept waiting.
Consider that all the trains arrive on the same day and leave on the same day. Arrival and departure time can never be the same for a train but we can have arrival time of one train equal to departure time of the other. At any given instance of time, same platform can not be used for both departure of a train and arrival of another train. In such cases, we need different platforms.
*/

#include <stdio.h>

int minimumPlatform(int n,int arr[],int dep[])
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i+1] < dep[i])
        {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    printf("\nHow many elements do you want in array:");
    scanf("%d",&n);
    int arr[n];
    int dep[n];
    
    printf("\nEnter %d Entries in arrival array",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("\nEnter %d Entries in departure array",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&dep[i]);
    }
    
    int result=minimumPlatform(n,arr,dep);
    printf("\nMinimum Number of platforms needed:%d",result);
    return 0;
}

/*
Test case 1:
arr[] = {0900, 0940, 0950, 1100, 1500, 1800}
dep[] = {0910, 1200, 1120, 1130, 1900, 2000}
accepted output : 3


test case 2:
Input: n = 3
arr[] = {0900, 1100, 1235}
dep[] = {1000, 1200, 1240}
Output: 1
*/
