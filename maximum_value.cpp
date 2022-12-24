/*
Given an array, only rotation operation is allowed on array. We can rotate the array as many times as we want. Return the maximum possible summation of i*arr[i].

Examples :  

Input: arr[] = {1, 20, 2, 10}
Output: 72
We can get 72 by rotating array twice.
{2, 10, 1, 20}
20*3 + 1*2 + 10*1 + 2*0 = 72

Input: arr[] = {10, 1, 2, 3, 4, 5, 6, 7, 8, 9}
Output: 330
We can get 330 by rotating array 9 times.
{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
0*1 + 1*2 + 2*3 ... 9*10 = 330
*/
#include<iostream>
using namespace std;
int max_sum(int arr[],int n)
{
    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum+=arr[i]*i;
    }
    return sum;
}
void rotate(int arr[], int n)
{
    
    int temp=arr[n-1];
    for(int i=n-1; i>0; i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
    
   
}
int main(){
    int array[]={10, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n= sizeof(array)/sizeof(array[0]);
    int sum=0,sum_max=0;
    for(int i=0; i<n; i++ )
    {
        sum=max_sum(array,n);
        if(sum_max<sum)
        {
            sum_max=sum;
        }
         
        rotate(array,n);
    
    }
    cout<<sum_max;
}