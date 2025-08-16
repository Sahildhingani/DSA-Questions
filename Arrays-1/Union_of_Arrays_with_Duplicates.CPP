#include<iostream>
#include<bits/stdc++.h>
using namespace std;

 vector<int> findUnion(vector<int>& a, vector<int>& b) {
        
        map<int,bool>map;
        
        for(int i=0;i<a.size();i++){
            map[a[i]]=true;
        }
        
        for(int i=0;i<b.size();i++){
            map[b[i]]=true;
        }
        
        vector<int>ans;
        
        for(auto i:map){
            ans.push_back(i.first);
        }
        
        return ans;
    }

