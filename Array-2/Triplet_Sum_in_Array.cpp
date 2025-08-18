#include<iostream>
#include<bits/stdc++.h>
bool hasTripletSum(vector<int> &arr, int target) {
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size()-2;i++){
            
            int start=i+1;
            int end=arr.size()-1;
            while(start<end){
                int sum=arr[i]+arr[start]+arr[end];
                
                if(sum==target){
                    return true;
                }else if (sum<target){
                    start++;
                }else{
                    end--;
                }
            }
        }