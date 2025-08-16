#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool twoSum(vector<int>& arr, int target) {
        
        // sort kr do 
        sort(arr.begin(),arr.end());
        
        int start=0;
        int end=arr.size()-1;
        
        while(start<end){
            int sum=arr[start]+arr[end];
            
            if(sum==target){
                return true;
            }else
            if(sum<target){
                start++;
            }else if(sum>target){
                end--;
            }
        }
        
        return false;
    }