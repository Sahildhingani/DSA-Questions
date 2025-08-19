#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> matrixDiagonally(vector<vector<int>>& mat) {
       
       // mapping indev and values
       map<int,vector<int>>map;
       
       for(int i=0;i<mat.size();i++){
           for(int j=0;j<mat[0].size();j++){
               map[i+j].push_back(mat[i][j]);
           }
       }
       
       vector<int>ans;
       
       for(auto i:map){
           // odd index wala case 
           if(i.first%2!=0){
               vector<int>arr=i.second;
               
               for(int i=0;i<arr.size();i++){
                   ans.push_back(arr[i]);
               }
           }else{
               // even wala case 
               vector<int>arr=i.second;
               for(int i=arr.size()-1;i>=0;i--){
                   ans.push_back(arr[i]);
               }
           }
       }
       return ans;
    }
