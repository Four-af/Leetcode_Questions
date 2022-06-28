class Solution {
public:
    int minDeletions(string s) {
        vector<int> f(26);
        for(int i=0 ; i<s.size(); i++){
            f[s[i]-'a']++;
        }
        sort(f.begin(),f.end());
        int count = 0;
        //from second greatest number
        for (int i = 24; i >= 0; i--) {                        
            if(f[i] >= f[i+1]){
                int prev = f[i];
                f[i] = max(f[i+1]-1,0);
                count += prev - f[i]; 
            }
        }
        return count;
    }
};