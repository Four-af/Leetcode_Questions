class Solution {
public:    
    string orderlyQueue(string s, int k) {
        int n=s.size();
        if(k>1){
            sort(s.begin(),s.end());
            return s;
        }else{
            string temp=s;
            s+=s;
            for(int i=1;i<n;i++){
                temp=min(temp,s.substr(i,n));
            }
            return temp;
        }
    }
};