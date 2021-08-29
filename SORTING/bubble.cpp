/*
    1st PASS-> Compare adjacent element begin from 0, SWAP if arr[i] > arr[i+1]
    ...(n-1)th PASS->(n-1)th largest element is moved to correct position after pass.

*/

#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[],int n){

    bool swapped = false;
    for (int i = 0; i < n-1; i++)
    {
        swapped = false;
        for (int  j = 0; j < n-i-1; j++)  // SUBTRACTING i because after every pass, max element for that pass will be placed at (n-i)
        {
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(!swapped){ //IF NO SWAPS OCCURS,ARRAY IS SORTED HENCE BREAK.
            break;
        }
    }
    
}

int main(){

    int arr[] = {10,-90,-9,100,5,8,9,10,-5,1,3,2,4};
    int n = sizeof(arr)/sizeof(int);

    for(int x:arr){

        cout<<x<<" ";
    }
    
    bubble_sort(arr,n);
    cout<<"\n";
    for(int x:arr){

        cout<<x<<" ";
    }
}