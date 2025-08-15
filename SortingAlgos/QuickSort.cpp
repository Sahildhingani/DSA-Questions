#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
void quickSort(vector<int>& arr, int low, int high) {
        // base case 
        if(low>=high){
            return ;
        }
        
        int p=partition(arr,low,high);
        
        // left call 
        quickSort(arr,low,p-1);
        // right side call
        quickSort(arr,p+1,high);
    }
    int partition(vector<int>& arr, int low, int high) {
        
        int cnt=0;
        
        for(int i=low+1;i<=high;i++){
            if(arr[i]<=arr[low]){
                cnt++;
            }
        }
        
        swap(arr[low],arr[low+cnt]);
        
        int p=low+cnt;
        
        int index1=low;
        int index2=high;
        
        while(index1<p && index2>p){
            
         while(index1<p){
             if(arr[index1]>arr[p]){
                 break;
             }else{
                 index1++;
             }
         }   
            
            while(index2>p){
                if(arr[index2]<=arr[p]){
                    break;
                }else{
                    index2--;
                }
            }
            
            swap(arr[index1++],arr[index2--]);
        }
        return p;
    }
int main(){
vector<int>arr={1,2,3,6,9,8,5,7,4};
quickSort(arr,0,arr.size()-1);

for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
}
}