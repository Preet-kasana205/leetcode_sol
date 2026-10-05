class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int n=nums.size();
        
        int doub_sum=0;
        int single_sum=0;
        for(int i=0;i<n;i++){
            if(nums[i]<10){
                single_sum+=nums[i];
                
            }
            else{
                doub_sum+=nums[i];
            }
            

            
        }
        return single_sum!=doub_sum;
    }
};