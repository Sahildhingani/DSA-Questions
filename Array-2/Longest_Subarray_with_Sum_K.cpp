#include<iostream>
#include<bits/stdc++.h>
int longestSubarray(vector<int>& arr, int k) {
        map<int,int>map;
        int ans=0;
        int sum=0;
        
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            
            if(sum==k){
                ans=max(ans,i+1);
            }else
            if(map.find(sum-k)!=map.end()){
                ans=max(ans,i-map[sum-k]);
            }
            
            if(map.find(sum)==map.end()){
                map[sum]=i;
            }
        }
        return ans;
    }