
#include<iostream>

using namespace std;

class Node {

    public:
    int data;
    Node* next;
    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }
    ~Node() {
        int value = this -> data;
        if(this->next != NULL) {
            delete next;
            this->next = NULL;
        }
        cout << " memory is free for node with data " << value << endl;
    }

};

void insertAtHead(Node* &head, int d) {

    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void print(Node* &head) {

    if(head == NULL) {
        cout << "List is empty "<< endl;
        return ;
    }
    Node* temp = head;

    while(temp != NULL ) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

Node* addTwoNumbers(Node* &l1, Node* &l2) {
        Node *dummy = new Node(1); 
        Node *temp = dummy; 
        int carry = 0;
        while( (l1 != NULL || l2 != NULL) || carry) {
            int sum = 0; 
            if(l1 != NULL) {
                sum += l1->data; 
                l1 = l1 -> next; 
            }
            
            if(l2 != NULL) {
                sum += l2 -> data; 
                l2 = l2 -> next; 
            }
            
            sum += carry; 
            carry = sum / 10; 
            Node *node = new Node(sum % 10); 
            temp -> next = node; 
            temp = temp -> next; 
        }
        return dummy -> next; 
    }



int main() {
    Node* head1= new Node(5);
    insertAtHead(head1,1);
    insertAtHead(head1,7);
    Node* head2= new Node(2);
    insertAtHead(head2,9);
    insertAtHead(head2,5);
    cout<<"Linked List One is:-"<<endl;
    print(head1);
    cout<<"Linked List Two is:-"<<endl;
    print(head2);
    cout<<"Addition of Both Linked List is:-"<<endl;
    Node* head=addTwoNumbers(head1,head2);
    print(head);



    return 0;
}
