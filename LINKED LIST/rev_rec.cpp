#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int x){
        data = x;
        next = NULL;
    }
};
void traverse(Node* head){

    Node *curr = head;
    cout<<"\n";
    while (curr != NULL)
    {
        cout<<curr->data<<" -> ";
        curr = curr->next;
    }
    cout<<"NULL";
    
}
Node* ins_end(Node* head, int x){

    Node *temp = new Node(x);

    if(head == NULL){
        return temp;
    }

    if(head->next == NULL){
        head->next = temp;
        return head;
    }

    Node* curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    
    curr->next = temp;
    return head;
    
}
Node* reverse(Node* curr,Node* next, Node* prev){

    cout<<"\n"<<curr->data;
    
    next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;

    if(curr == NULL){

        return prev;    
    }
    
    reverse(curr,next,prev);

}
Node* ins_mid(Node* head,int x){
    
    Node* temp = new Node(x);
	Node* slow = head;
	Node* fast = head;
	if(head->next == NULL){
	    head->next = temp;
	    return head;
	}
	if(head->next->next == NULL){
	    head->next->next = temp;
	    return head;
	}
	
	while(fast->next->next != NULL || fast->next != NULL || fast != NULL){
	    cout<<"\n"<<fast->data;
	    slow = slow->next;
        if(fast->next->next != NULL || fast->next != NULL || fast != NULL)
	        fast = fast->next->next;
        else
            break;
	}
	temp->next = slow->next;
	slow->next = temp;
	
	return head;
}
int main(){

    Node* head = ins_end(NULL,10);
    head = ins_end(head,20);
    head = ins_end(head,30);
    head = ins_end(head,40);
    head = ins_mid(head,100);
    traverse(head);
    head = reverse(head,head->next,NULL);
    traverse(head);
    return 0;

}