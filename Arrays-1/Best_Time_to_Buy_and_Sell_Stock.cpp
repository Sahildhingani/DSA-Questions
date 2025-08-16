#include<iostream>
#include<bits/stdc++.h>
using namespace std;

 int maxProfit(vector<int>& prices) {
        vector<int>sell(prices.size());
        int maxi=INT_MIN;
        for(int i=prices.size()-1;i>=0;i--){
            maxi=max(maxi,prices[i]);
            sell[i]=maxi;
        }

        int ans=INT_MIN;

        for(int i=0;i<prices.size();i++){
            ans=max(ans,(sell[i]-prices[i]));
        }

        return ans;
    }