#include<bits/stdc++.h>
using namespace std;

struct Stack
{
    vector<int> arr;

    void push(int x){

        arr.push_back(x);
    }

    int pop(){
        if(arr.size() == 0){
            cout<<"STACK UNDERFLOW!\n";
            return INFINITY;
        }
        int x = arr.back();
        arr.pop_back();
        return x;
    }
    int peek(){
        if(arr.size() == 0){
            cout<<"STACK UNDERFLOW!\n";
            return INFINITY;
        }
        return arr.back();
    }

    bool isEmpty(){
        return (bool)arr.size();
    }
};

int main(){

    Stack s;

    cout<<s.peek()<<"\n";
    cout<<s.pop()<<"\n";
    cout<<s.isEmpty()<<"\n";
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);

    cout<<s.peek()<<"\n";
    cout<<s.pop()<<"\n";
    cout<<s.peek()<<"\n";
    cout<<s.isEmpty()<<"\n";
}
