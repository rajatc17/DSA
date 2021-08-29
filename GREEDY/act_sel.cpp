//1 - SORT ACC. TO FINISH TIMES
//2 - SOLUTION INIT. WITH FIRST ACT. AFTER SORT
//3 - 
#include<bits/stdc++.h>
using namespace std;
bool sort_to_finish(vector<int> &v1, vector<int> &v2){
    return v1[1] > v2[1];
}
int main(){

    vector<vector<int>> activity{

        {2,3},
        {1,4},
        {5,8},
        {6,10},
        {5,9}
    };

    sort(activity.begin(),activity.end(),sort_to_finish);

    for (auto i = 0; i < activity.size(); i++)
    {
        /* code */
        cout<<"("<<activity[i][0]<<", "<<activity[i][1]<<") ,";

    }
    
}