#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
void insertionSort(vector<int>& arr) {
       int start=0;
       int end=0;
       
       while(end<arr.size()){
           // place it on its right place 
           for(int i=end;i>0;i--){
               if(arr[end-1]>arr[end]){
                   swap(arr[end],arr[end-1]);
               }else{
                   break;
               }
           }
           end++;
       }
    }
int main(){
vector<int>arr={1,2,3,6,9,8,5,7,4};
insertionSort(arr);

for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
}
}