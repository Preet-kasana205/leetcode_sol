class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int left=0,right=n-1;
        while(left<right and nums[left]<0 and nums[right]>0){
            if(-nums[left]==nums[right]){
                return nums[right];

            }
            else if(-nums[left]<nums[right]){
                right--;

            }else{
                left++;
            } 
            

            
        }
        return -1;
        
    }
    
};