// FIND THE LEFTMOST REPEATING CHARACTER
// EXAMPLE: geeksforgeeks ans = 3
// BECAUSE g appears twice and it is the left most

#include<bits/stdc++.h>
using namespace std;

void find_leftmost_rep(string s){

    int n = s.length();
    
    if(n < 2){
        cout<<"NOT APPLICABLE! STRING TOO SHORT";
        return;
    }
    
    unordered_map<char,pair<int,int>> map;
    for (int i = 0; i < n; i++)
    {
        if(map.find(s[i]) == map.end())
            map.insert(pair<char,pair<int,int>> (s[i],pair<int,int> (i,1)));
        else{
            map[s[i]].second++;
        }
    }
    int curr = INT_MAX;char ans = '\0';
    for(auto x:map){
        cout<<"\n";
        cout<<x.first<<" - [PRIORITY - "<<x.second.first<<", COUNT - "<<x.second.second<<"]";

        if(x.second.first < curr && x.second.second > 1){
            curr = x.second.first;
            ans = x.first;
        }
    }

    if(curr == INT_MAX){
        cout<<"\nNO REPEATING CHARACTER FOUND";
        return;
    }
    else{
        cout<<"\nREPEATING CHARACTER '"<<ans<<"' FOUND AT"<<curr;
        return;
    }
}
void efficient_find(string s){
    bool visited[256] = {false};
    int n = s.length()-1;
    char ans = '\0';
    for (int i = n; i > -1; i--)
    {
        if(visited[s[i]]){
            ans = s[i];
        }
        else{
            visited[s[i]] = true;
        }
    }
    
    if(ans != '\0'){
        cout<<"\nREPEATING CHARACTER IS - "<<ans;
    }
    else{
        cout<<"\nNO REPEATING CHARACTER FOUND";
    }
}
int main(){

    string s;
    cout<<"ENTER A STRING: ";
    getline(cin,s,'\n');

    find_leftmost_rep(s);
    efficient_find(s);
    return 0;
}