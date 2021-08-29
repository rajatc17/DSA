/*

    BASIC IDEA-
    INSERT AND DELETE FROM THE HEAD NODE
*/
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int x){
        data = x;
        next = NULL;
    }
    Node(){
        data = NULL;
        next = NULL;
        *this = NULL;
    }
};

struct Stack{

    Node *head;
    int sz=0;
    void push(int x){ // INSERT AT HEAD OF LINKED LIST
        Node *temp = new Node(x);

        if(head == NULL){
            head = temp;
            sz = 1;
        }
        temp->next = head;
        head = temp;
        sz++;
    }
    int pop(){

        if(head == NULL || sz == 0){
            cout<<"CANT POP! STACK UNDERFLOW!\n";
            return INFINITY;
        }
        int data = head->data;
        Node *temp = head;
        head = head->next;
        delete temp;
        sz--;

        return data;
    }
    int peek(){

        if(head == NULL || sz == 0){
            cout<<"CANT PEEK! STACK UNDERFLOW!\n";
            return INFINITY;
        }

        return head->data;
    }
    int size(){
        return sz;
    }
    bool isEmpty(){
    
        return (head == NULL);
    }
};

int main(){

    Stack s;

    cout<<s.peek()<<"\n";
    cout<<s.pop()<<"\n";

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

   // cout<<s.sz()<<","<<s.isEmpty()<<"\n";
    cout<<s.peek()<<"\n";
    cout<<s.pop()<<"\n";
    
    cout<<s.peek()<<"\n";
    cout<<s.pop()<<"\n";
    
    cout<<s.peek()<<"\n";
    cout<<s.pop()<<"\n";
    
    cout<<s.pop()<<"\n";
    cout<<s.peek()<<"\n";
    cout<<s.pop()<<"\n";

    s.push(100);
    cout<<s.peek()<<" , "<<s.size()<<"\n";

    s.push(150);
    cout<<s.peek()<<" , "<<s.size()<<"\n";

    s.push(1250);
    cout<<s.peek()<<" , "<<s.size()<<"\n";

    cout<<s.pop()<<"\n";
    cout<<s.peek()<<" , "<<s.size()<<"\n";
}