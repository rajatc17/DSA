#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next; // SELF REFERENTIAL STRUCTURE
    Node(int x){
        data = x;
        next = NULL;
    }
};
void traverse(Node *temp){
    cout<<"\n";
    while (temp!=NULL)
    {
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    
}

void tra_rec(Node *temp){

    if(temp == NULL){
        cout<<"\n";
        return;
    }  
    cout<<temp->data<<" -> ";
    tra_rec(temp->next);
}

Node* insert_begin(Node *head,int data){

    Node *temp = new Node(data);
    temp->next = head;
    return temp;

}

Node *insertEnd(Node *head,int x){
    Node *temp=new Node(x);
    if(head==NULL)return temp;
    Node *curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=temp;
    return head;
    
}

Node* delete_begin(Node *head){

    if(head == NULL){
        return NULL;
    }

    Node *temp = head->next;

    delete head;

    return temp;
}
Node* delete_end(Node *head){

    if(head == NULL){
        return NULL; // NO NODES IN THE LIST
    }

    if(head->next == NULL){
        delete head;
        return NULL; // SINGLE NODE IN THE LIST
    }

    Node* curr = head;
    while (curr->next->next != NULL)
    {
        curr = curr->next;
    }
    
    curr->next = NULL;
    delete curr->next;

    return head;
}

Node* insert_n(Node* head,int data,int pos){

    if(head == NULL){
        return NULL;
    }

    if(head->next == NULL && pos==1){
        return new Node(data);
    }

    int curr = 1;
    Node *temp = head;
    while(temp->next != NULL)
    {
        if(curr == pos){

            Node *ins = new Node(data);
            ins->next = temp->next;
            temp->next = ins;
            break;
        }
        else{
            curr++;
            temp = temp->next;
        } 
    }
    
}
int main(){

    Node *head;
    head = insert_begin(head,10);
    head = insert_begin(head,20);
    head = insert_begin(head,30);
    head = insert_begin(head,40);
    head = insert_begin(head,50);
    head = insertEnd(head,100);
    head = insertEnd(head,200);
    head = insertEnd(head,300);
    head = delete_begin(head);
    head = delete_end(head);
    head = insert_n(head,450,3);

    traverse(head);
}
