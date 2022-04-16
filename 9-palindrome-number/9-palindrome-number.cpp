class Solution {
public:
    bool isPalindrome(int x) {
        bool flag=true;
        string s=to_string(x);
        int n=s.size();
        for(int i=0;i<n/2;i++){
            if(s[i]==s[n-i-1]){
                flag=true;
            }
            else{
                flag=false;
                break;
            }
        }
        return flag;
    }
};