/*
    ARRAY IMPLEMENTATION OF A STACK
    push,pop,isEmpty,peek
*/
#include<bits/stdc++.h>
using namespace std;

struct Stack{

    int *arr;
    int cap;
    int top;
    
    Stack(int c){
        cap = c;
        arr = new int[cap];
        top = -1;
    }

    void push(int x){
        if(top == cap -1){
            cout<<"STACK OVERFLOW!\n";
            return;
        }
        top++;
        arr[top] = x;
    }
    int pop(){
        if(top == -1){
            return INFINITY;
        }
        return arr[top--];
    }
    int peek(){
        if(top == -1){
            return INFINITY;
        }
        return arr[top];
    }
    int size(){
        return top+1;
    }
    bool isEmpty(){
        return top == -1;
    }
};

int main(){

    Stack s(5);
    cout<<s.pop()<<"\n";
    cout<<s.peek()<<"\n";

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);

    cout<<s.peek()<<"\n";
    cout<<s.pop()<<"\n";
    cout<<s.peek()<<"\n";

    return 0;
}