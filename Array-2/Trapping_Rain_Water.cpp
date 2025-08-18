int maxWater(vector<int> &arr) {
        vector<int>left;
        
        int lmax=INT_MIN;
        
        for(int i=0;i<arr.size();i++){
            lmax=max(lmax,arr[i]);
            left.push_back(lmax);
        }
        
        vector<int>right(arr.size());
        int rmax=INT_MIN;
        
        for(int i=arr.size()-1;i>=0;i--){
            rmax=max(rmax,arr[i]);
            right[i]=rmax;
        }
        int ans=0;
        
        for(int i=0;i<arr.size();i++){
            int l1=min(left[i],right[i]);
            ans+=l1-arr[i];
        }
        
        return ans;
    }