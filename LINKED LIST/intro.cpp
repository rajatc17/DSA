#include<bits/stdc++.h>
using namespace std;

struct Node{
    int x;
    int y; //DEFAULT ACCESS PUBLIC
};
void func(Node ob){ // SLOWER DUE TO PAS BY VALUE
    cout<<"\nI AM SLOWER "<<&ob;
}
void func2(Node &ob){ //FASTER BECAUSE NO COPY CREATED
    cout<<"\nI AM FASTER "<<&ob;
}

int main(){

    Node a = {10,100};
    Node *p = &a;

    cout<<p->x<<" "<<p->y<<"\n";

    p->x = 50;
    p->y = 50;

    cout<<a.x<<" "<<a.y;

    cout<<"\n"<<&a;
    func(a);
    cout<<"\n"<<&a;
    func2(a);
}