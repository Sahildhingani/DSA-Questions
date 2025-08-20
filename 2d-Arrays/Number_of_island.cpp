#include<iostream>
#include<butrs/stdc++.h>
using namespace std;
void find(int row,int col, vector<vector<int>>&visited,
    vector<vector<char>>& grid){
        
        // base case
        
        if(row<0 || col<0 || row>=grid.size() || col>=grid[0].size() || visited[row][col] || grid[row][col]=='W'){
        return ;    
        }
        
        visited[row][col]=1;
        
        // call 
        find(row-1,col,visited,grid);
        find(row+1,col,visited,grid);
        find(row,col-1,visited,grid);
        find(row,col+1,visited,grid);
        find(row+1,col+1,visited,grid);
        find(row-1,col+1,visited,grid);
        find(row+1,col-1,visited,grid);
        find(row-1,col-1,visited,grid);
        
        
    }
    int countIslands(vector<vector<char>>& grid) {
        
        int r=grid.size();
        int c=grid[0].size();
        
        vector<vector<int>>visited(r,vector<int>(c,0));
        
        int ans=0;
        
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j]=='L' && visited[i][j]==0){
                    ans++;
                    find(i,j,visited,grid);
                }
            }
        }
        return ans;
    }