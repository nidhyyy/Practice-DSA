// Given a positive integer, check whether it has alternating bits: namely, if two adjacent bits will always have different values.

class Solution {
public:
    bool hasAlternatingBits(int n) {
        int x=n&1;
        while(n!=0){
            n=n>>1;
            if(x==(n&1)) return false;
            x=n&1;
        }
        return true;
    }
};
