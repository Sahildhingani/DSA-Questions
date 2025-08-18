#include<iostream>
#include<bits/stdc++.h>
int maxSubarraySum(vector<int> &arr) {
        int ans=INT_MIN;
        int sum=0;
        
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            ans=max(ans,sum);
            if(sum<0){
                sum=0;
            }
        }
        return ans;
    }