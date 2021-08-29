#include<bits/stdc++.h>
using namespace std;

void checkPalindrome(string str){

    int n = str.length();

    for (int i = 0; i < n; i++){
        /* code */
        if(str[i] != str[n-i-1])
            {
                cout<<str<<" IS NOT PALINDROME";
                return;
            }
     }
    cout<<str<<" IS PALINDROME";
     
}
void check(string str){

    string rev = str;
    reverse(rev.begin() , rev.end());
    rev == str? cout<<"PALINDROME" : cout<<"NOT PALINDROME" ;
    return ;
}
int main(){

    string str;
    cin>>str;

    checkPalindrome(str);
    check(str);
}