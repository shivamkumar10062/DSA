/*
Find the Rotation Count in Rotated Sorted array

Consider an array of distinct numbers sorted in increasing order. The array has been rotated (clockwise) k number of times. 
Given such an array, find the value of k.

Examples: 
 

Input : arr[] = {15, 18, 2, 3, 6, 12}
Output: 2
Explanation : Initial array must be {2, 3,
6, 12, 15, 18}. We get the given array after 
rotating the initial array twice.

Input : arr[] = {7, 9, 11, 12, 5,6}
Output: 4

Input: arr[] = {7, 9, 11, 12, 15,17};
Output: 0
*/
#include<iostream>
using namespace std;

int cout_rotation(int arr[] ,int l, int h)
{
  /*  if (h < l)
        return 0;
        if (h ==l)
        return l;
        int mid = l + (h - l)/2; 
        if ( arr[mid+1] < arr[mid])
       return (mid+1);
        
    // Check if mid itself is minimum element
    if ( arr[mid] < arr[mid - 1])
       return mid;
 /
    // Decide whether we need to go to left half or
    // right half
    int mid=l+(h-l)/2;
    if (arr[h] > arr[mid])
       return cout_rotation(arr, l, mid-1);
 
    return cout_rotation(arr, mid+1, h); */
        if (h < l)
        return 0;
        if (h ==l)
        return l;
    
        int mid=l+(h-l)/2;
        if(arr[mid]<arr[mid-1])
            return mid;
        if(arr[mid]>arr[mid+1])
            return (mid+1);
        if(arr[mid]<arr[h])
            return(cout_rotation(arr,l,mid-1));
            
        else
            return (cout_rotation(arr,mid+1,h));
   
}
int main()
{   
    int array[]={ 2};
    int n=sizeof(array)/sizeof(array[0]);
    cout<<cout_rotation(array, 0, n-1);


}