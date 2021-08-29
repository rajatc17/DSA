#include<bits/stdc++.h>
using namespace std;
int max2(int a,int b,int c){
    return max(max(a,b),c);
}
int maxCrossingSum(vector<int> arr, int l, int m, int h)
{
    int sum = 0;
    int left_sum = INT_MIN;
    for (int i = m; i >= l; i--) {
        sum = sum + arr[i];
        if (sum > left_sum)
            left_sum = sum;
    }
 
    sum = 0;
    int right_sum = INT_MIN;
    for (int i = m + 1; i <= h; i++) {
        sum = sum + arr[i];
        if (sum > right_sum)
            right_sum = sum;
    }
    return max2(left_sum + right_sum, left_sum, right_sum);
}
 
int maxSubArraySum(vector<int> arr, int l, int h)
{
    if (l == h)
        return arr[l];
 
    int m = (l + h) / 2;
 
    return max2(maxSubArraySum(arr, l, m), maxSubArraySum(arr, m + 1, h), maxCrossingSum(arr, l, m, h));
}
vector<int> construct(vector<int> arr,int l,int r){
    vector<int> sol;
    for (auto i = arr.begin()+l; i <= arr.begin()+r ; i++)
    {
        sol.push_back(*i);
    }
    
    return sol;
}
void disp(vector<int> arr,int l,int r){

    for (int i = l; i <r; i++)
    {
        /* code */
        cout<<arr[i] * pow(-1,i-l)<<",";
    }
    
}
int main(){

    vector<int> A{1,-2,3,4,5};
    vector<vector<int>> B{
        {2,1,5},
        {1,4,-1},
        {2,1,5}
    };
    vector<int> sol;
    for (int i = 0; i < B.size(); i++)
    {
        if(B[i][0] == 1){
            A[B[i][1]] = B[i][2];
        }
        else{
           int l = B[i][1];
           int r = B[i][2];
            cout<<l<<","<<r<<"\n";
            disp(A,l,r);
            cout<<"\n";
           //sol[i] = maxSubArraySum(construct(A,l,r),0,r-l);
        }
    }
    for (int i = 0; i < A.size(); i++)
    {
       
        cout<<A[i]<<",";
    }
    cout<<"\nSOLUTION: ";
    for (int i = 0; i < sol.size(); i++)
    {
        
        cout<<sol[i]<<",";
    }
    
 }