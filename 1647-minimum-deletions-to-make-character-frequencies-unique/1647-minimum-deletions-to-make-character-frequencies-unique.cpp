class Solution {
public:
    int minDeletions(string s) {
        vector<int> f(26);
        for(int i=0 ; i<s.size(); i++){
            f[s[i]-'a']++;
        }
        sort(f.begin(),f.end());
        int del = 0;
        for (int i = 24; i >= 0; i--) {
            if(f[i] == 0) break;            
            if(f[i] >= f[i+1]){
                int prev = f[i];
                f[i] = max(0, f[i+1] -1);
                del += prev - f[i]; 
            }
        }
        return del;
    }
};