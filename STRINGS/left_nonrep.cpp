#include<bits/stdc++.h>
using namespace std;

void find(string s){
    int n = s.length();
    if(n<2){
        cout<<"NOT APPLICABLE";
        return;
    }
    char ans = '\0';
    bool not_visited[256] = {false};
    for (int i = n-1; i > -1; i--)
    {
        not_visited[s[i]] = !not_visited[s[i]];
        if(not_visited[s[i]]){

            ans = s[i];
        }
    }
    
    if(ans != '\0'){
        cout<<"FIRST NON-REP CHARACTER IS - "<<ans;
    }
    else{
        cout<<"NOT FOUND";
    }
}
int main(){

    string s;
    cout<<"ENTER A STRING: ";
    getline(cin,s,'\n');

    find(s);
}