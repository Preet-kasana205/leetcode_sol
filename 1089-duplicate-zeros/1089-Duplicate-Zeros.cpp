class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n=arr.size();
        int left=0;
        
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                left++;
            }
            
        
        }
        int right=n-1;
        int j=left+right;
        while(right<j){
            if(j<n)
                arr[j]=arr[right];
                 
                
            if(arr[right]==0){
                j--;

                if(j<n){
                  arr[j]=0;
                }
                    

                  

            }
            right--;
            j--;
        }
               

        
        
        
        
    }
};