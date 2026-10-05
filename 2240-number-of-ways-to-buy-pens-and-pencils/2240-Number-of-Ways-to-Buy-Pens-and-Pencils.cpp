class Solution {
public:
    long long waysToBuyPensPencils(int total, int cost1, int cost2) {
        
        long long ans=0;
        for(int pen=0;pen<=total/cost1;pen++){
            long long pen_count=total-(pen*cost1);

            long long max_pencil=pen_count/cost2;

            ans+=max_pencil+1;
            
            
            
            
                

            
        }return ans;
        
    }
};