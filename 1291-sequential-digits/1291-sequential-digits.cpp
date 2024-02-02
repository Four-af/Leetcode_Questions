class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        string ll = to_string(low);
        string hh = to_string(high);
        int l = ll.size(), h = hh.size();
        string s = "123456789";
        int x = l;
        vector<int> res;
        while(x<=h){
            for(int i=0; i<=9-x; i++){
                string c = s.substr(i,x);
                cout<<"  stringc: "<<c;
                int k = stoi(c);
                res.push_back(k);
            }
            x++;
        }
        for(int i=0; i<res.size(); i++){
            if((res[i])<low || (res[i])>high){
                // cout<<"  res[[ii]]  "<<res[i];
                res.erase(res.begin()+i);
                i--;
            }
        }
        sort(res.begin(),res.end());
        return res;
    }
};