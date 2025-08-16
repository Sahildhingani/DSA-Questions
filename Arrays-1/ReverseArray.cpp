#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// swap number 
void swap(int &a, int &b){
    int c;
    c=a;
    a=b;
    b=c;
}
// reverse array 
void reverse(vector<int>&nums){
    int start=0;
    int end =nums.size()-1;
    while(start<=end){
        swap(nums[start++],nums[end--]);
    }
}

int main(){
    vector<int>arr={1,2,3,4,5,6};

    reverse(arr);

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}