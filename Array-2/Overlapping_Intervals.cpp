#include<iostream>
#include<bits/stdc++.h>
vector<vector<int>> mergeOverlap(vector<vector<int>>& arr) {
        sort(arr.begin(),arr.end());
         vector<vector<int>>ans;
        if(arr.size()==0){
            return ans;
        }
        
        int f=arr[0][0];
        int s=arr[0][1];
        
        for(int i=1;i<arr.size();i++){
            int b=arr[i][0];
            int e=arr[i][1];
            
            // if is it non overlapping 
            
            if(e<f || b>s){
                ans.push_back({f,s});
                f=b;
                s=e;
            }else{
                f=min(f,b);
                s=max(s,e);
            }
        }
        ans.push_back({f,s});
        
        return ans;
    }