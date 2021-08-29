#include<bits/stdc++.h>
using namespace std;

struct Node{

    int data;
    Node *next;

    Node(int x){
        data = x;
        next = this;
    }
};

void traverse(Node* head){

    if(head == NULL){
        return;
    }

    cout<<head->data<<" - ";
    Node *curr = head->next;
    int i = 1;
    while (i<8)
    {
        cout<<curr->data<<" - ";
        curr = curr->next;
        i++;
    }
    
}
Node* ins_end(Node* head, int x){

    Node* temp = new Node(x);
    if(head == NULL){
        return temp;
    }

    Node* curr = head;

    while (curr->next != head)
    {
        curr = curr->next;
    }
    
    curr->next = temp;
    temp->next = head;

    return head;
}
int main(){

    Node *head = new Node(10);

    head = ins_end(head,100);
    head = ins_end(head,300);
    head = ins_end(head,400);

    traverse(head);
}