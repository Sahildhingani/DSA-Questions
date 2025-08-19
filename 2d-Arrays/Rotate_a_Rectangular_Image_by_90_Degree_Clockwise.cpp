#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void reverse(int start,int end ,vector<int>&arr){
        while(start<=end){
            swap(arr[start++],arr[end--]);
        }
    }
    
    void rotateMatrix(vector<vector<int>>& mat) {
        // swap elements 
        for(int i=0;i<mat.size();i++){
            reverse(0,mat[i].size()-1,mat[i]);
        }
        
        vector<vector<int>>visited(mat.size(),vector<int>(mat[0].size(),0));
        
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(visited[i][j]==0){
                    visited[i][j]=1;
                    visited[j][i]=1;
                    swap(mat[i][j],mat[j][i]);
                }
            }
        }