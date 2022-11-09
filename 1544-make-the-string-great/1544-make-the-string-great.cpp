class Solution {
public:
    string makeGood(string a) {
        stack<char> s;
        s.push(a[0]);
        for(int i=1; i<a.size(); i++){
            if(!s.empty() && ((a[i] + 32) == s.top() || (a[i] - 32) == s.top())){
                s.pop();
            }
            else s.push(a[i]);
        }
        string ans = "";
        while(!s.empty()){
            ans+=s.top();
            s.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};