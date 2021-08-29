/*
    SIX POSSIBLE CHAR:

    ( ) { } [ ]

    BALANCED = N.O. OPENING BRACKETS == CLOSING BRACKETS
*/
#include<bits/stdc++.h>
using namespace std;
struct Node{
    char data;
    Node* next;
    Node(char x){
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
    void push(char x){ // INSERT AT HEAD OF LINKED LIST
        Node *temp = new Node(x);

        if(head == NULL){
            head = temp;
            sz = 1;
        }
        temp->next = head;
        head = temp;
        sz++;
    }
    char pop(){

        if(head == NULL || sz == 0){
            cout<<"CANT POP! STACK UNDERFLOW!\n";
            return INFINITY;
        }
        char data = head->data;
        Node *temp = head;
        head = head->next;
        delete temp;
        sz--;

        return data;
    }
    char peek(){

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

    Stack stack;
    string s;

    a:
    //system("CLS");
    cout<<"ENTER PARANTHESIS: ";
    cin>>s;

    int n = s.length();
    
    for (int i = 0; i < n; i++)
    {
        if(s[i] == '[' | s[i] == '{' || s[i] == '(' ){
        
            stack.push(s[i]);
            stack.peek();
        }
        else if(s[i] == ']' | s[i] == '}' || s[i] == ')' ){

            if(s[i] == stack.peek()){
                stack.pop();
                continue;
            }
            else if(stack.isEmpty() || s[i] != stack.peek()){
                break;
                cout<<"UNBALANCED PARANTHESIS!";
            }
        }
    }

    if(stack.size() == 0){
        cout<<"BALANCED PARANTHESIS!";
    }    

    return 0;
}
