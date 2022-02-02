class Solution {
public:
    string decodeString(string s) {
        int sizes=s.size();
        int num=0;
        stack<string>st;
        stack<int> n;
        string ans;
        
        for(int i =0; i < sizes;i++){
        if(s[i]>='0' && s[i]<='9'){
         num = num*10+(s[i]-'0');}
        
        else if (s[i]=='['){
         n.push(num);
         st.push(ans);
         ans.clear();
          num=0;}     
                    
         else if (s[i]==']'){
         int count=n.top();
         n.pop();
         while(count--){
         st.top()+=ans;}
         ans =st.top();
         st.pop();
           
         }
     
         else {
         ans +=s[i];
         }
         } return ans;      
    }
};