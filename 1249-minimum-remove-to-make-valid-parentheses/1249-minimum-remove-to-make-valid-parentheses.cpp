class Solution {
public:
    string minRemoveToMakeValid(string s) {
        string a = "";
        stack<char> t;
        int count = 0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='('){
                t.push(s[i]);
                a+=s[i];
            }
            else if(s[i]==')'){
                if(t.empty()) continue;
                else {
                    t.pop();
                    a+=s[i];
                    count++;
                }
            }
            else a+=s[i];
        }
        int i = a.size()-1;
        // if(!s.empty()){
        //     while(count){
        //         if(a[i]=='('){
        //             count--;
        //         }
        //         i--;
        //     }
        //     a.substr(i,a.size()-i);
        // }
        if(!t.empty()){
            for(int i=a.length()-1; i>=0; i--){
                if(a[i]=='(' && !t.empty()){
                    a.erase(a.begin()+i);
                    t.pop();
                }
            }
        }
        return a;
    }
};
