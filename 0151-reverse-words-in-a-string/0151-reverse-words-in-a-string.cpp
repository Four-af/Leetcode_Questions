class Solution {
public:
    string reverseWords(string s) {
        vector<string> a;
        int idx = 0, len = 0;
        for(int i=0; i<s.size(); i++){
            if(s[i]==' '){
                a.push_back(s.substr(idx,len));
                len = 0;
                idx = i+1;
            }
            else len++;
        }
        a.push_back(s.substr(idx,len));
        string ans = "" , temp = "";
        for(int i=a.size()-1; i>=0; i--){
            temp+=a[i];
            if(i!=0)
                temp+=" ";
        }
        ans+=temp[0];
        for(int i=1;i<temp.size(); i++){
            if(temp[i]==' ' && temp[i-1] == ' ') continue;
            else ans+=temp[i];
        }
        if(ans[0]==' ') ans=ans.substr(1,ans.size()-1);
        if(ans[ans.size()-1]==' ') ans=ans.substr(0,ans.size()-1);
        return ans;
    }
};