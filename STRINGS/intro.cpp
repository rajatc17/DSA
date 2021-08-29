/*
    SEQUENCE OF CHARACTERS
    COVERED UNDER 128 ASCII CODE
    C/C++ - ASCII/8-BITS
    JAVA - UTF-8/16-BITS (LARGER CHARACTER SET FOR MORE LANGUAGES)
    UTF-8 FIRST 128 CHARACTERS = ASCII 128
*/

#include<bits/stdc++.h>
using namespace std;

int main(){

    char x = 'a';
    char y = 'A';

    cout<<"ASCII OF 'a' = "<<(int)x; //int type conversion prints the ASCII code
    cout<<"\nASCII OF 'A' = "<<(int)y;

    string str = "rajatchandra";
    int count[26] = {0};

    for (int i = 0; i < str.length(); i++){

        count[str[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if(count[i] > 0){

            cout<<"\nCount of "<<(char)(i+(int)'a')<<" = "<<count[i];
        }   
    }
    
}