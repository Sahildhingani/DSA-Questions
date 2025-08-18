#include<iostream>
#include<bits/stdc++.h>
double medianOf2(vector<int>& a, vector<int>& b) {
        vector<int>arr;
        
        int index1=0;
        int index2=0;
        
        while(index1<a.size() && index2<b.size()){
            if(a[index1]<b[index2]){
                arr.push_back(a[index1]);
                index1++;
            }else{
                arr.push_back(b[index2++]);
            }
        }
        
        
        while(index1<a.size()){
             arr.push_back(a[index1++]);
        }
        
        while(index2<b.size()){
             arr.push_back(b[index2++]);
        }
        
        int n=arr.size();
        
        // odd wala case 
        if(n%2!=0){
            int index=((n+1)/2)-1;
            return arr[index];
        }
        // even wala case 
        if(n%2==0){
            int index1=n/2;
            int index2=index1-1;
            
            int avg=arr[index1]+arr[index2];
            return avg/2.0;
        }
        return -1;
    }