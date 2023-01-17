class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int flip(0), one(0);
        for(int i=0; i<s.size();i++){
            if(s[i]=='0'){
                flip++;
                flip = min(flip,one);
            }
            else one++;
        }
        return flip;
    }
};
