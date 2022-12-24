#include<iostream>
using namespace std;
int search_item_using_binary_search(int arr[],int l, int h, int search){
    if(h>=1){
        int mid=(l+h)/2;
        if(arr[mid]==search)
            return mid; 
        if(arr[mid]>search)
            return(search_item_using_binary_search(arr,l,mid,search));
        if(arr[mid]<search)
            return (search_item_using_binary_search(arr,mid,h,search));
    }
    return -1;

}
int main()
{
    int arr[] = { 2, 3, 4, 10, 40 };
    int x = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result= search_item_using_binary_search(arr,0,n-1,x);
    (result == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result;

}