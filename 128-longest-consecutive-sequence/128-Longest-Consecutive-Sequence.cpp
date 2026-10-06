class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        
        int res =0; 
        sort(nums.begin(),nums.end());
        if(nums.empty()) return 0;

        int curr=nums[0];
        int seq_length=0;
        int i=0;
        while( i<n){
            if (i>0 and nums[i]==nums[i-1]){
                i++;
                continue;
            }
                
            if (i>0 and nums[i] != nums[i-1]+1){
                seq_length=0;
        
            }
            seq_length+=1;
            res=max(res,seq_length);
            i++;
        }    
        
        return res;
        
    }
};