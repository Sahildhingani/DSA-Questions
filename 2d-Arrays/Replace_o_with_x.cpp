#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void find(int row,int col,vector<vector<int>>&visited,vector<vector<char>>& mat){
        // base case 
        if(row<0 || col<0 || row>=mat.size() || col>=mat[0].size() || visited[row][col]==1 || mat[row][col]=='X'){
            return ;
        }
        
        visited[row][col]=1;
        
        find(row-1,col,visited,mat);
        find(row+1,col,visited,mat);
        find(row,col-1,visited,mat);
        find(row,col+1,visited,mat);
    }
    vector<vector<char>> fill(vector<vector<char>>& mat) {
        vector<vector<int>>visited(mat.size(),vector<int>(mat[0].size(),0));
        
        // top
        for(int i=0;i<mat[0].size();i++){
            if(mat[0][i]=='O' && visited[0][i]==0){
                find(0,i,visited,mat);
            }
        }
        // right 
        for(int i=0;i<mat.size();i++){
           if(mat[i][mat[0].size()-1]=='O' && visited[i][mat[0].size()-1]==0){
                find(i,mat[0].size()-1,visited,mat);
            }
        }
        
        // bottom 
        for(int i=0;i<mat[0].size();i++){
            if(mat[mat.size()-1][i]=='O' && visited[mat.size()-1][i]==0){
                find(mat.size()-1,i,visited,mat);
            }
        }
        
        //left 
        for(int i=0;i<mat.size();i++){
           if(mat[i][0]=='O' && visited[i][0]==0){
                find(i,0,visited,mat);
            }
        }
        
        // conversion 
        
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]=='O' && visited[i][j]==0){
                    mat[i][j]='X';
                }
            }
        }
        return mat;
    }