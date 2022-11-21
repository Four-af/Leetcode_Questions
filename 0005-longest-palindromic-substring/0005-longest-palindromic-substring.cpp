class Solution {
public:
    string longestPalindrome(string s) {
        if (s.size()<2) 
            return s;
        int min_left=0;
        int max_len=1;
        int max_right=s.size()-1;
        for (int mid=0;mid<s.size();){
            int left=mid;
            int right=mid;
            while (right<max_right && s[right+1]==s[right])
                right++; // duplicatess
            mid=right+1; //for next iter
            while (right<max_right && left>0 && s[right+1]==s[left-1]){ // eg aba so for a ...it is checkin b and b
                right++; 
                left--;
            } // making palindrome 
            int new_len=right-left+1; //max palindrome
            if (new_len>max_len){ 
                min_left=left; 
                max_len=new_len; 
            }
        }
        return s.substr(min_left, max_len);
    }
};