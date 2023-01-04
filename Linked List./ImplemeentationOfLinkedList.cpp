#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node* next;
	Node(int x){
		data=x;
		next=NULL;
	}
};

int main(){
		Node* head=NULL;
		int n;
		cin>>n;
		for(int i=0; i<n; i++){
			int val;
			cin>>val;
			if(head==NULL){
				Node * temp=new Node(val);
				head=temp;
			}
			else{
				Node* temp = new Node(val);
        		temp -> next = head;
       	 		head=temp;
			}
		}
		Node* temp=head;
		while(temp!=NULL){
			cout<<temp->data<<" ";
			temp=temp->next;
		}

}
