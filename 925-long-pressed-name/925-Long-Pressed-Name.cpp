class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int i=0,j=0;
        int n=name.size(), m=typed.size();
        for(int j=0;j<m;j++){
            if(i<n and name[i]==typed[j]){
                i++;
            }
            else if(j>0 and typed[j]==typed[j-1]){
                continue;
            
            }
            else{
                return false;
            }
        }
        return i==n;

        
    }
};