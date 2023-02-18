#define ll long long
class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        map<char, ll> m;
        for(ll i=0; i<order.size(); i++){
            m[order[i]] = i+1;
        }
        for(ll i=0; i<words.size()-1; i++){
            char a, b;
            ll j = 0;
            ll f = false;
            while(words[i][j]==words[i+1][j]){
                j++;
                if(j>=words[i].size()){
                    f = true;
                    break;
                }
                if(j>=words[i+1].size()){
                    return false;
                }
            }
            a = words[i][j];
            b = words[i+1][j];
            if(f) continue;
            if(m[a]>m[b]) return false;
        }
        return true;
    }
};