class Solution {
public:
    int partitionString(string s) {
        vector<string> ans;
        int idx  = 0;
        set<char> st;
        for(int i=0; i<s.size();i++){
            if(st.count(s[i])){
                // cout<<"if";
                string temp = "";
                temp = s.substr(idx,i-idx);
                cout<<"\ni : "<<i<<endl;
                cout<<"idx : "<<idx<<" i - idx : "<<i - idx<<endl;
                cout<<" || "<<temp;
                ans.push_back(temp);
                idx  = i;
                
                st.clear();
                st.insert(s[i]);
            }
            else{
                // cout<<"else";
                st.insert(s[i]);
            }
        }
        ans.push_back(s.substr(idx,s.size()-1-idx));
        return ans.size();
    }
};