#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// function defination
int binarysearch(vector<int> &arr, int k) {
        
        int start=0;
        int end=arr.size()-1;
        int ans=-1;
        while(start<=end){
            int mid=(start+end)/2;
            
            if(arr[mid]==k){
                ans=mid;
                end=mid-1;
            }else
            
            if(arr[mid]<k){
                start=mid+1;
            }else 
            
            if(arr[mid]>k){
                end=mid-1;
            }
        }
        
        return ans;
    }


int main(){
vector<int>arr={1,5,3,6,9,7,4,2};

// function call 
cout<<binarysearch(arr,5);

}