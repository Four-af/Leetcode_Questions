class Solution {
public:
    int help(string n){
        int a = 0;
        for(int i=0; i<n.size(); i++){
            a+=(n[i]-'0');
        }
        return a;
    }
    int addDigits(int num) {
        string n = "";
        while(true){
            n = to_string(num);
            if(n.size()==1) break;
            else num = help(n);
        }
        return stoi(n);        
    }
};