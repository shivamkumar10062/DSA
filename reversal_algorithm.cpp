/*
Reversal algorithm for right rotation of an array
Difficulty Level : Easy
Last Updated : 03 Jan, 2022
Given an array, right rotate it by k elements. 
 



After K=3 rotation 
 



Examples: 
 

Input: arr[] = {1, 2, 3, 4, 5, 
                6, 7, 8, 9, 10}
          k = 3
Output: 8 9 10 1 2 3 4 5 6 7

Input: arr[] = {121, 232, 33, 43 ,5}
           k = 2
Output: 43 5 121 232 33
*/
#include<iostream>
using namespace std;
void left_rotate(int arr[], int n , int k){
    
   for(int i=n-k; i<n+(n-k); i++)
    {
        cout<<arr[i%n]<<" ";
        
    }
}
int main()
{
    int array[]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n=sizeof(array)/sizeof(array[0]);
    int k=3;
    left_rotate(array,n,k);
   

}