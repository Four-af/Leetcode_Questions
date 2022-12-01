class Solution {
public:
    bool check(char a,set<char> s){
        if(s.count(a)) return true;
        return false;
    }

    bool halvesAreAlike(string s) {
        set<char> ss;
        string alph = "aeiouAEIOU";
        for(int i=0; i<alph.size(); i++){
            ss.insert(alph[i]);
        }
        string t = s.substr((s.size()/2),s.size()/2);
        int sc(0), st(0);
        for(int i=0; i<t.size(); i++){
            if(check(s[i],ss)) sc++;
            if(check(t[i],ss)) st++;
        }
        if(sc==st) return true;
        else return false;
    }
};