/*
    REDUCE MEMORY WRITES,DOES LESS MEMORY WRITES
    NOT STABLE
    IN-PLACE
    IDEA FOR HEAP-SORT

    BASIC IDEA -
    1st PASS->FIND MIN ELEMENT,PLACE AT BEGINNING
    2ND PASS->FIND 2ND MIN ELEMENT,PLACE AT BEGINNING+1
    ...(N-1)TH PASS->
*/
#include<bits/stdc++.h>
using namespace std;

void selection_sort(int arr[],int n){

    int min_ind=0;
    for (int i = 0; i < n-1; i++)
    {
        min_ind = i;
        for (int j = i+1; j < n; j++)
        {
            if(arr[j] < arr[min_ind]){
                min_ind = j;
            }
        }
        swap(arr[min_ind],arr[i]);
    }
    
}

int main(){

    int arr[] = {-101,10,67,100,1,6,2,99,-100,0};
    int n = sizeof(arr)/sizeof(int);

    selection_sort(arr,n);

    for(auto x:arr){
        cout<<x<<" ";
    }
}