#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void setMatrixZeroes(vector<vector<int>> &mat) {
        map<int,bool>row;
        map<int,bool>col;
        
        int r=mat.size();
        int c=mat[0].size();
        
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(mat[i][j]==0){
                    row[i]=true;
                    col[j]=true;
                }
            }
        }
        
       for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(row.find(i)!=row.end() || col.find(j)!=col.end()){
                    mat[i][j]=0;
                }
            }
        }