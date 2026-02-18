// We are given an array asteroids of integers representing asteroids in a row. The indices of the asteroid in the array represent their relative position in space.
// For each asteroid, the absolute value represents its size, and the sign represents its direction (positive meaning right, negative meaning left). Each asteroid moves at the same speed.
// Find out the state of the asteroids after all collisions. If two asteroids meet, the smaller one will explode. 
// If both are the same size, both will explode. Two asteroids moving in the same direction will never meet.
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n=asteroids.size();
        vector<int>res;
        stack<int> st;
        for(int i=n-1;i>=0;i--){
            while(i>=0 && !st.empty() && st.top()<0 && asteroids[i]>0){
                    int prev=abs(st.top());
                    int cur=asteroids[i];
                    if(prev<cur){
                        st.pop();
                    }
                    else if(prev==cur){
                        st.pop();
                        i--;
                    }
                    else i--;
                }
                if(i>=0)st.push(asteroids[i]);
            
        }
        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }
        return res;
    }
};
