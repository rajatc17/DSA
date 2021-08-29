#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next; // SELF REFERENTIAL STRUCTURE
    Node(int x){
        data = x;
        next = NULL;
    }
};

void traverse(Node* head){
    Node *temp = head;

    cout<<"\n";
    while (temp->next != NULL)
    {
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL";
}

Node* ins_beg(Node* head, int x){

    if(head == NULL){
        return new Node(x);
    }

    Node *temp = new Node(x);
    temp->next = head;

    return temp;
}

Node* ins_end(Node* head, int x){
    
    if(head == NULL){
        return new Node(x);
    }

    Node *curr = head;
    while (curr->next != NULL){

        curr = curr->next;
    }

    curr->next = new Node(x);

    return head;
    
}
int main(){

    Node *head;

    head = ins_beg(head,10);
    head = ins_beg(head,20);
    head = ins_beg(head,30);
    head = ins_beg(head,40);
    head = ins_beg(head,50);

    head = ins_end(head,100);
    head = ins_end(head,200);
    head = ins_end(head,300);

    traverse(head);
}