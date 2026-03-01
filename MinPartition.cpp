class Solution {
public:
    int minPartitions(string n) {
        int maxs=0; 
        for(int i=0;i<n.length();i++){
            maxs=max(maxs,n[i]-'0');
        }
        return maxs;
    }
};
