#include<iostream>
#include<bits/stdc++.h>
int countOccurence(vector<int>& arr, int k) {
        
        int n =arr.size();
        
        map<int,int>map;
        
        for(int i=0;i<arr.size();i++){
            map[arr[i]]++;
        }
        
        int ans=0;
        
        for(auto i:map){
            if(i.second>n/k){
                ans++;
            }
        }
        return ans;
    }