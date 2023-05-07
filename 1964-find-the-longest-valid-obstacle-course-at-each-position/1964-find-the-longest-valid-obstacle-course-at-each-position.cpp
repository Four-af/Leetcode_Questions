#define vll vector<int>

class Solution {
public:
    vector<int> longestObstacleCourseAtEachPosition(vector<int>& obstacles) {
        
        int n= obstacles.size();
        int len = 0;
        vll ans(n), SubSeq(n);
        for(int i=0; i<n; i++){
            int l =0, r = len;
            while(l<r){
                int m = (l+r)/2;
                if(SubSeq[m]<=obstacles[i]) l = m+1;
                else r = m;
            }
            ans[i]= l +1;
            if(len == l) len++;
            SubSeq[l]=obstacles[i];
        }
        return ans;
    }
};

