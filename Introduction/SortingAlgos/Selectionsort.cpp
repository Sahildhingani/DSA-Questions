#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
void selectionSort(vector<int> &arr) {
// code here
for(int i=0;i<arr.size();i++){
    int index=i;
            
    for(int j=i;j<arr.size();j++){
        if(arr[j]<arr[index]){
                index=j;
            }
        }
        swap(arr[i],arr[index]);
        }
}
int main(){
vector<int>arr={1,2,3,6,9,8,5,7,4};
selectionSort(arr);

for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
}
}