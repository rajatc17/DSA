#include<bits/stdc++.h>
using namespace std;

struct Point{
    int x,y;
};

bool myCompare(Point p1, Point p2){

    return p1.x > p2.x;
}

int main(){

    Point graph[] = {{5,6},{0,10},{10,100},{11,101}};

    for(auto x:graph){

        cout<<"( "<<x.x<<","<<x.y<<" ) ";
    }
    
    sort(graph,graph+4,myCompare);

    cout<<endl;
    for(auto x:graph){

        cout<<"( "<<x.x<<","<<x.y<<" ) ";
    }
}