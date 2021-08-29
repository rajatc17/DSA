//SORT FUNCTION IN C++
#include<bits/stdc++.h>
using namespace std;


bool compare(vector<int> &v1,vector<int> &v2){

    return true;
}
int main(){

    int arr[] = {10,67,-100,99,1,1002};
    sort(arr,arr+6);

    cout<<endl;
    for(int x:arr){
        cout<<x<<" ";
    }

    //sort(arr,arr+6,greater<int>);
    
    cout<<endl;
    for(int x:arr){
        cout<<x<<" ";
    }

    vector<int> v = {10,100,-569,23,1,2,3};
    sort(v.begin(),v.end());

    cout<<endl;
    for(int x:v){
        cout<<x<<" ";
    }

    cout<<endl;
    //sort(v.begin(),v.end(),greater<int>);
    for(int x:v){
        cout<<x<<" ";
    }
}