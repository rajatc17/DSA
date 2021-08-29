#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

void traverse(Node* head){

    Node *curr = head;
    while (curr != NULL)
    {
        cout<<curr->data<<" -> ";
        curr = curr->next;
    }
    cout<<"NULL";
    
}
Node* ins_end(Node *head , int data){

    Node *temp = new Node(data);

    if(head ==  NULL){
        return temp;
    }
    if(head->next == NULL){

        head->next = temp;
        return head;
    }

    Node *curr = head;
    while (curr->next!= NULL)
    {
        curr = curr->next;
    }

    curr->next = temp;
    return head;

}

Node* reverse(Node *head){

    Node *curr = head;
    Node *prev = NULL;
    Node *nxt;
    while (curr->next != NULL)
    {
       nxt = curr->next;
       curr->next = prev;
       prev = curr;
       curr = nxt;
    }
    return prev;
}
Node* find_n(Node *head, int pos){

    Node *first = head;
    Node *second = head;
    int count = 1;
    while (count<pos)
    {
        if(second == NULL){
            
        }
    }
    
}
int main(){

    Node *head = new Node(10);

    head = ins_end(head,20);
    head = ins_end(head,30);
    head = ins_end(head,40);
    head = ins_end(head,50);

    traverse(head);
    //head = reverse(head);

    //cout<<"\n";
    //traverse(head);
}