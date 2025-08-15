#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// function defination
int linearsearch(vector<int>&arr,int key){
    for(int i=0;i<arr.size();i++){
    if(arr[i]==key){
        return i;
    }
}
return -1;
}


int main(){
vector<int>arr={1,5,3,6,9,7,4,2};

// function call 
cout<<linearsearch(arr,5);

}