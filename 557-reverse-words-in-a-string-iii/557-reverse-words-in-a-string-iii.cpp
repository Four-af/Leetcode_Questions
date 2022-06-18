class Solution {
public:
    
    string reverseWords(string s) {
        int start=0,end=0;
       
        for(int i=0; i<=s.size(); i++){
            ++end;
             
                if(s[i]==' ' || i==s.size()){
                    reverse(s.begin()+start,s.begin()+end-1);
                    start=i+1;
                }
        }
        return s;
    }
};