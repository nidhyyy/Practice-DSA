#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data=val;
        next=nullptr;
    }
};

void insert(Node* &head,int val){
    Node *newNode=new Node(val);
    if(head==nullptr){
        head=newNode;
        return;
    }
    Node *temp=head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    temp->next=newNode;
}

void insertatposition(Node* &head,int val,int pos){
    Node *newNode=new Node(val);
    if(pos==0){
        newNode->next=head;
        head=newNode;
        return;
    }
    Node *temp=head;
    for(int i=0;i<pos-1 && temp!=nullptr;i++){
        temp=temp->next;
    }
    if(temp==nullptr) return;
    newNode->next=temp->next;
    temp->next=newNode;
}
void display(Node* head){
    Node *temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
void deleteList(Node* &head){
    Node *temp=head;
    while(temp!=nullptr){
        Node *nextNode=temp->next;
        delete temp;
        temp=nextNode;
    }
    head=nullptr;
}

void deleteatposition(Node* &head,int pos){
    if(head==nullptr) return;
    if(pos==0){
        Node *temp=head;
        head=head->next;
        delete temp;
        return;
    }
    Node *temp=head;
    for(int i=0;i<pos-1 && temp!=nullptr;i++){
        temp=temp->next;
    }
    if(temp==nullptr || temp->next==nullptr) return;
    Node *nodeToDelete=temp->next;
    temp->next=nodeToDelete->next;
    delete nodeToDelete;
}



int main(){
    Node *head=nullptr;
    insert(head,10);
    insert(head,20);
    insert(head,30);
    insertatposition(head,15,1);
    display(head);
    cout<<endl;
    deleteatposition(head,2);
    display(head);
    cout<<endl;
    deleteList(head);
    return 0;
}
