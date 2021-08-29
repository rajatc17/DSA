/*
    CAN TRAVERSE BOTH DIR.
    NODE DELETION in O(1).

*/
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* prev;
    Node* next;

    Node(int x){
        data = x;
        prev = NULL;
        next = NULL;
    }
    Node(){
        
    }
};
void traverse(Node *head){

    Node *curr = head;

    cout<<"\n";
    while(curr != NULL) {

        cout<<curr->data<<" -> ";
        curr = curr->next;
    }
    cout<<"null";
}
Node* ins_beg(Node *head, int x){

    Node *temp = new Node(x);
    
    if(head == NULL){

        return temp;
    }

    temp->next = head;
    head->prev = temp;

    return temp;
}
Node *ins_end(Node *head, int x){

    Node *temp = new Node(x);
    if(head == NULL){
        return temp;
    }

    Node* curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }

    curr->next = temp;
    temp->prev = curr;

    return head;
    
}
Node *del_end(Node *head){

    if(head == NULL){

        return NULL;
    }

    
}
int main(){
    
    Node *head = new Node(150);

    head = ins_beg(head,10);
    head = ins_beg(head,20);
    head = ins_beg(head,30);
    head = ins_beg(head,40);

    head = ins_end(head,100);
    head = ins_end(head,200);
    head = ins_end(head,300);
    traverse(head);

    return 0;
}