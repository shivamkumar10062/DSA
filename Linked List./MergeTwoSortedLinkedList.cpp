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

    node* mergeTwoLists(node* l1, node* l2) {

        
        if(l1 == NULL) return l2; 

        if(l2 == NULL) return l1;

     
        if(l1->num > l2->num) std::swap(l1,l2);

        node* res = l1;

        while(l1 != NULL && l2 != NULL) {
 
            node* temp = NULL;

            while(l1 != NULL && l1->num <= l2->num) {

                temp = l1;
                l1 = l1->next;
            }

            temp->next = l2;
            std::swap(l1,l2);
        }

        return res;
    }




int main() {
    node* head = NULL;
    insertNode(head,1);
    insertNode(head,2);
    insertNode(head,3);
    insertNode(head,4);
    insertNode(head,5);
    cout<<"Linked list 1 is:-"<<endl;
    print(head);
    node* head2 = NULL;
    insertNode(head2,1);
    insertNode(head2,2);
    insertNode(head2,2);
    insertNode(head2,3);
    insertNode(head2,8);
    cout<<"Linked list 2 is:-"<<endl;
    print(head2);
    cout<<"After Merging Both Linked List :-"<<endl;
    node* head1 = mergeTwoLists(head,head2);
    print(head1);
    return 0;
}
