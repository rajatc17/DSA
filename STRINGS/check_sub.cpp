#include<bits/stdc++.h>
using namespace std;
bool check(string str,string sub,int n,int m){

    if(m == 0)
        return true;
    if(n == 0)
        return false;
    if(str[n-1] == sub[m-1]){
        return check(sub,str,n-1,m-1);
    }
    else{
        return check(sub,str,n-1,m);
    }
}
int main(){

    string str;
    string sub;

    cout<<"ENTER STRING: ";
    cin>>str;

    cout<<"ENTER SUBSTRING TO CHECK: ";
    cin>>sub;

    for (int i = 0,j=0; i < str.length(); i++)
    {

        if(str[i] == sub[j]){
            j++;
        }

        if(j == sub.length()){
            cout<<"YES IT IS A SUBSTRING!";
            return 0;
        }  
    }
    cout<<"NOPE";
    
}