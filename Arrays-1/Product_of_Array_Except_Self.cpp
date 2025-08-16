#include<iostream>
#include<bits/stdc++.h>
using namespace std;

 vector<int> productExceptSelf(vector<int>& nums) {
        int Zeros=0;

        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                Zeros++;
            }
        }

        vector<int>ans(nums.size(),0);
        // case-1 more than 1 zero 

        if(Zeros>1){
            return ans;
        }

        if(Zeros==1){
            int mul=1;
            int index=-1;
            for(int i=0;i<nums.size();i++){
                if(nums[i]!=0){
                    mul=mul*nums[i];
                }else{
                    index=i;
                }
            }

            ans[index]=mul;
            return ans;
        }

        // case 3 Zero==0;

        int mul=1;
        for(int i=0;i<nums.size();i++){
            mul=mul*nums[i];
        }

        for(int i=0;i<nums.size();i++){
            ans[i]=mul/nums[i];
        }
        return ans;
    }