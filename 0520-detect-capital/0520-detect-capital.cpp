class Solution {
public:
    bool detectCapitalUse(string word) {
        if(word.size()==1) return true;
        if(word[0]<=90){
            if(word.size()==2) return true;
            if(word[1] <= 90){
                for(int i=2; i<word.size();i++){
                        if(word[i]>90) return false;
                    }
                return true;
            }
                else{
                    for(int i=2; i<word.size();i++){
            
                    if(word[i]<=90) return false;
                    }
                    return true;
                }
        }
        for(int i=0; i<word.size();i++){
            if(word[i]<=90) return false;
        }
        return true;
        
    }
};