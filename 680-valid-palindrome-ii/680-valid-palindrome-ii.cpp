class Solution {
public:
    bool validPalindrome(string s) {
        int start = 0;
        int end = s.size() - 1;
        int count = 0;
        
        while(start < end){
            if(s[start] == s[end])
            {
                start++;
                end--;
            }
            else
            {
			   count++;
               start++;
            }
			if(count > 1)
                break;
        }
		start = 0;
        end = s.size() - 1;
        int count_2 = 0;
        while(start < end){
            if(s[start] == s[end]){
	            start++;
                end--;  
            }
            else{
	            count_2++;
                end--;  
            }
	        if(count_2 > 1)
                break;
               
        }
        if(count == 1 || count_2 == 1)  
            return true;
        if(count == 0 || count_2 == 0)
            return true;
        
        return false;
    }
};