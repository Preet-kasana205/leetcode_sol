class Solution {
public:
    bool checkArray(vector<int>& nums, int k) {
        int n=nums.size();
        int v=0;
        vector<int>diff(n+1,0);
        for(int i=0;i<n;i++){
            if(i>=k){
                v-=diff[i-k];

            }
            int v2=nums[i]-v;
            if(v2<0){
                return false;
            }
            if(v2>0){
                if(i+k>n){
                    return false;
                }
                v+=v2;
                diff[i]=v2;
            }
        }
        return true;
        
    }
};