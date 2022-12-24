/*
Find the Rotation Count in Rotated Sorted array
Difficulty Level : Easy
Consider an array of distinct numbers sorted in increasing order. The array has been rotated (clockwise) k number of times. Given such an array, find the value of k.
Examples: 
 

Input : arr[] = {15, 18, 2, 3, 6, 12}
Output: 2
Explanation : Initial array must be {2, 3,
6, 12, 15, 18}. We get the given array after 
rotating the initial array twice.

Input : arr[] = {7, 9, 11, 12, 5}
Output: 4

Input: arr[] = {7, 9, 11, 12, 15};
Output: 0
*/
#include<iostream>
using namespace std;
int count_rotation(int arr[], int n)
{
    int count=0;
    for(int i=1; i<n; i++)
    {
        if(arr[i]<arr[i-1])
        {
            count=i;
        }
    }
    return count;
}
int main()
{
    int array[]={15, 18, 2, 3, 6, 12};
    int n= sizeof(array)/sizeof(array[0]);
    int ans=count_rotation(array,n);
    cout<<ans;
}





