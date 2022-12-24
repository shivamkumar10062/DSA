#include <bits/stdc++.h>
using namespace std;
int main()
{
	int arr[]={1,2,3,4,5,6};

	int n= sizeof(arr)/sizeof(arr[0]);
	int res[n];
	stack<int>st;
	st.push(arr[n-1]);
	res[n-1]=-1;
	for(int i=n-2; i>=0; i--){
		while(!st.empty()){
			if(arr[i]<st.top()){
				res[i]=st.top();
				st.push(arr[i]);
				break;
			}
			else{
				st.pop();
			}
		}
		
	}
	for(int i=0; i<n; i++){
		cout<<res[i]<<" ";
	}
	return 0;
}