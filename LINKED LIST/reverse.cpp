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
Node* segregate(Node *head) {
        
        // Add code here
        Node* zero = NULL;
        Node* one = NULL;
        Node* two = NULL;
        Node* curr= head;
        
        Node* z_h = NULL;
        Node* o_h = NULL;
        Node* t_h = NULL;
        
        while(curr != NULL){
            
            if(curr->data == 0){
                
                if(zero == NULL){
                    zero = curr;
                    z_h = zero;
                }
                else{
                    zero->next = curr;
                    zero = zero->next;
                }
            }
            else if(curr->data == 1){
                
                if(one == NULL){
                    one = curr;
                    o_h = one;
                }
                else{
                    one->next = curr;
                    one = one->next;
                }
            }
            else if(curr->data == 2){
                
                if(two == NULL){
                    two = curr;
                    t_h = two;
                }
                else{
                    two->next = curr;
                    two = two->next;
                }
            }
            curr = curr->next;
        }
        if(zero != NULL && one != NULL && two != NULL){
        
            zero->next = o_h;
            one->next = t_h;
            two->next = NULL;
            return z_h;        
        }
        if(zero != NULL && one != NULL && two == NULL){
        
            zero->next = o_h;
            one->next = NULL;
            return z_h;        
        }
        if(zero != NULL && one == NULL && two != NULL){
        
            zero->next = t_h;
            return z_h;        
        }
        if(zero == NULL && one != NULL && two != NULL){
        
            one->next  = t_h;
            two->next = NULL;
            return o_h;        
        }
        
        if(zero != NULL && one == NULL && two == NULL){
        
            zero->next = NULL;
            return z_h;        
        }
        
        if(zero == NULL && one != NULL && two == NULL){
        
            one->next = NULL;
            return o_h;        
        }
        
        if(zero == NULL && one == NULL && two != NULL){
        
            two->next = NULL;
            return t_h;        
        }
        
    }

void middle(Node* head){

    if(head == NULL){
        return;
    }

    Node* slow = head;
    Node* fast = head->next;
    int count = 1;
    while (fast!= NULL && fast->next!=NULL)
    {
        /* code */
        count++;
        slow = slow->next;
        fast = fast->next->next;
    }

    cout<<"\n"<<slow->data<<" - "<<count; 
    
}
int main(){

    Node *head = new Node(2);
    head = ins_end(head,1);
    head = ins_end(head,0);
    head = ins_end(head,1);
    head = ins_end(head,2);
    //head = ins_end(head,150);

    traverse(head);

    //cout<<"\n\n";
    //raverse(head);
    middle(head);
}