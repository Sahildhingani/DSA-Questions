#include<iostream>
#include<bits/stdc++.h>
using namespace std;


// merge -- back code 

void merge(int start ,int mid ,int end , vector<int>&arr){

    // copy kr do 
    vector<int>left;
    vector<int>right;

    for(int i=start;i<=mid;i++){
        left.push_back(arr[i]);
    }

    for(int i=mid+1;i<=end;i++){
        right.push_back(arr[i]);
    }

    int index1=0;
    int index2=0;
    int MainIndex=start;


    while(index1<left.size() && index2<right.size()){

        if(left[index1]<=right[index2]){
            arr[MainIndex++]=left[index1++];
        }else{
            arr[MainIndex++]=right[index2++];
        }
    }

    while(index1<left.size()){
          arr[MainIndex++]=left[index1++];
    }

    while(index2<right.size()){
        arr[MainIndex++]=right[index2++];
    }
}


// mergesort -- break

void mergesort(int start , int end , vector<int>&arr){

    // base case
    if(start>=end){
        return ;
    }

    int mid=(start+end)/2;

    // left call 
    mergesort(start,mid,arr);
    // right side call
    mergesort(mid+1,end,arr);

    // merge back code 

    merge(start,mid,end,arr);
}

int main(){
    vector<int>arr={4,1,3,9,7,10,8};

    mergesort(0,arr.size()-1,arr);

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}