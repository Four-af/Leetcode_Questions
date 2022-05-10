class Solution {
public:
    vector<string> helper(string digits,unordered_map<int,vector<string>> map,int n){
        vector<string>temp;
        if(n == 0){
            for(string ch:map[digits[n]]){

                temp.push_back(ch);
            }
           
            return temp;
        }
        auto comb = helper(digits,map,n-1);
        for(auto ch : map[digits[n]]){
            for(auto e : comb){
                temp.push_back(e+ch);
            }

        }
        return temp;
    }
    vector<string> letterCombinations(string digits) {
        if(digits.size() == 0)
            return {};
        unordered_map<int,vector<string>>map;
        map['2']={"a","b","c"};
        map['3']={"d","e","f"};
        map['4']={"g","h","i"};
        map['5']={"j","k","l"};
        map['6']={"m","n","o"};
        map['7']={"p","q","r","s"};
        map['8']={"t","u","v"};
        map['9']={"w","x","y","z"};
        return helper(digits,map,digits.size() -1 );

    }
};