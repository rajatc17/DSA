#include<bits/stdc++.h>
using namespace std;

int main(){

    char str[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout<<str;

    string str2 = "rajatchandra";
    cout<<str2.length()<<" ";
    str2 = str2+str+" FUCK";
    cout<<str2<<" ";
    cout<<str2.substr(4,8)<<" ";
    cout<<str2.find("UCK");

    //STRING INPUT
    cout<<"\nENTER YOUR NAME : ";
    string name;
    cin>>name; // STOPS AFTER SPACE

    cout<<"\nENTER YOUR NAME AGAIN: ";
    string n2;
    getline(cin,n2);
}