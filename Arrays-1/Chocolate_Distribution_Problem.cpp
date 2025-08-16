#include<iostream>
#include<bits/stdc++.h>
using namespace std;

  int findMinDiff(vector<int>& a, int m) {
        
        
        sort(a.begin(),a.end());
        
        int start=0;
        int end=m-1;
        
        int ans=INT_MAX;
        
        while(end<a.size()){
            ans=min(ans,(a[end]-a[start]));
            end++;
            start++;
        }
        
        return ans;
    }