#include<bits/stdc++.h>
using namespace std;

void checkAnagram(string s1,string s2){
    
    int n = s1.length();
    int m = s2.length();
    if(n != m){
        cout<<s1<<" & "<<s2<<" ARE NOT ANAGRAMS";
    }

    unordered_map<char,int> map;
    for (int i = 0; i < n; i++)
    {
        map[s1[i]]++;
        map[s2[i]]--;
    }
    for(auto x: map){

        if(x.second != 0 ){
            cout<<s1<<" & "<<s2<<" ARE NOT ANAGRAMS";
            return;
        }
    }
    cout<<s1<<" & "<<s2<<" ARE ANAGRAMS";
}
int main(){

    string s1;
    string s2;

    cout<<"ENTER FIRST STRING :";
    cin>>s1;

    cout<<"ENTER SECOND STRING :";
    cin>>s2;

    checkAnagram(s1,s2);
}