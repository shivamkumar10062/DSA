/*
Quickly find multiple left rotations of an array | Set 1

Given an array of size n and multiple values around which we need to left rotate the array. How to quickly find multiple left rotations?
Examples: 
 

Input : arr[] = {1, 3, 5, 7, 9}
        k1 = 1
        k2 = 3
        k3 = 4
        k4 = 6
Output : 3 5 7 9 1
         7 9 1 3 5
         9 1 3 5 7
         3 5 7 9 1

Input : arr[] = {1, 3, 5, 7, 9}
        k1 = 14 
Output : 9 1 3 5 7
*/
// It is memory efficient way to print 
#include<iostream>
using namespace std;
void left_rotate(int arr[], int n , int k){
    
   for(int i=k; i<k+n; i++)
    {
        cout<<arr[i%n]<<" ";
        
    }
}
int main()
{
    int array[]={1, 3, 5, 7, 9};
    int n=sizeof(array)/sizeof(array[0]);
    int k=14;
    left_rotate(array,n,k);
   

}