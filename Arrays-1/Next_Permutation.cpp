#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void reverse(vector<int>&nums){
        int start=0;
        int end=nums.size()-1;

        while(start<=end){
            swap(nums[start++],nums[end--]);
        }
    }

    void nextPermutation(vector<int>& nums) {
        int dip=-1;

        // find the dip element 

        for(int i=nums.size()-1;i>0;i--){
            if(nums[i-1]<nums[i]){
                dip=i-1;
                break;
            }
        }

        // dip=-1
        if(dip==-1){
            reverse(nums);
            return;
        }


        for(int i=nums.size()-1;i>dip;i--){
            if(nums[i]>nums[dip]){
                swap(nums[i],nums[dip]);
                break;
            }
        }
        sort(nums.begin()+dip+1,nums.end());
    }