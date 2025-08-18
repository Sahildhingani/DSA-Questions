#include<iostream>
#include<bits/stdc++.h>
int maxWater(vector<int> &arr) {
       
       int start=0;
       int end=arr.size()-1;
       int ans=0;
       while(start<end){
           ans=max(ans,min(arr[start],arr[end])*(end-start));
           if(arr[start]<arr[end]){
               start++;
           }else{
               end--;
           }
       }
       return ans;
    }
};