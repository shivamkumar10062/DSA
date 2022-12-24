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
int pos_max(int arr[], int n)
{
    int max=arr[0],pos=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            pos=i;
        }
    }
    return pos;
}
 void rotate(int arr[],int n, int d)
{
    int temp[d],pos=0;;
    for(int i=0; i<d; i++)
    {
        temp[i]=arr[i];
    } 
    for(int i=0; i<n-d; i++)
    {
        arr[i]=arr[i+d];
    }
    for(int i=n-d; i<n; i++)
    {
        arr[i]=temp[pos];
        pos++;
    }
    
}
int main()
{
   int array[]={10, 1, 2, 3, 4, 5, 6, 7, 9};
   int n=sizeof(array)/sizeof(array[0]);
   int pos=pos_max(array,n)+1 , sum=0;
   rotate(array,n,pos);
   for(int i=0; i<n; i++ )
   {
       sum+=array[i]*i;
   }
   cout<<sum<<endl; 
}