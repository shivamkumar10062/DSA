
#include<iostream>
using namespace std;
int find_min_ele(int arr[], int l, int h)
{
    if(h==0)
        cout<<arr[h];
    int mid =l+(h-l)/2;
    if(arr[mid-1]>arr[mid])
        return arr[mid];
    if(arr[mid]>arr[h])
        return find_min_ele(arr,mid+1,h); 
    if(arr[mid]<arr[h])
        return find_min_ele(arr,l,mid-1);  
  return -1;
}
int main()
{
    int arr[]={1,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<find_min_ele(arr,0,n-1)<<endl;
}
