#include<bits/stdc++.h>
using namespace std;

class node {
    public:
        int num;
        node* next;
        node(int val) {
            num = val;
            next = NULL;
        }
};

void insertNode(node* &head,int val) {
    node* newNode = new node(val);
    if(head == NULL) {
        head = newNode;
        return;
    }
    
    node* temp = head;
    while(temp->next != NULL) temp = temp->next;
    
    temp->next = newNode;
    return;
}
void print(node* &head) {

    if(head == NULL) {
        cout << "List is empty "<< endl;
        return ;
    }
    node* temp = head;

    while(temp != NULL ) {
        cout << temp -> num << " ";
        temp = temp -> next;
    }
    cout << endl;
}
int getCount(struct node* head){
    
        //Code here
        int count=1;
        node* temp=head;
        while(temp->next!=NULL){
            count++;
            temp=temp->next;
        }
        return count;
    
    }

int main() {
    node* head = NULL;
    insertNode(head,1);
    insertNode(head,2);
    insertNode(head,3);
    insertNode(head,4);
    insertNode(head,5);
    cout<<"Linked list  is:-"<<endl;
    print(head);
    cout<<"Total number of nodes:- :-"<< getCount(head)<<endl;
    
    return 0;
