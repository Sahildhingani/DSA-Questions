#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
    void bubbleSort(vector<int>& arr) {
       
       for(int i=arr.size()-1;i>=0;i--){
           for(int j=0;j<i;j++){
               if(arr[j]>arr[j+1]){
                   swap(arr[j],arr[j+1]);
               }
           }
       }
    }
int main(){
vector<int>arr={1,2,3,6,9,8,5,7,4};
bubbleSort(arr);

for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
}
}