class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        ans.push_back({});
        int start=0,end=0;

        for(int i=0;i<n;i++){
            start=0;
            if(i>0 and nums[i]==nums[i-1]){
                start=end;
            }
            end=ans.size();
            
            for(int j=start;j<end;j++){
                vector<int>temp=ans[j];
                temp.push_back(nums[i]);
                ans.push_back(temp);
                
            }
        }
        return ans;
        
    

        

    }
};