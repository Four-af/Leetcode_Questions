class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int n = num.size();
        string str = to_string(k);
        int m = str.size();
        int i = n - 1, j = m - 1;
        int carry = 0;
        vector<int> res;
        while(i >= 0 || j >= 0 || carry)
        {
            int sum = 0;
            if(i >= 0)
                sum += num[i];
            if(j >= 0)
                sum += str[j] - '0';
            sum += carry;
            carry = sum / 10;
            res.push_back(sum % 10);
            i--;
            j--;
        }
        reverse(res.begin(), res.end());
        return res;
//         vector<int> ans;
//         for(int i=0; i<num.size(); i++){
            
//         }
        
//         string x = "";
//         for(int i=0; i<num.size(); i++){
//             x+=to_string(num[i]);
//         }
//         // cout<<"|| "<<x;
//         long long y = stoi(x);
//         // cout<<" << "<<y;
//         long long ans = y + k;
//         // cout<<" LL "<<ans;
//         x.clear();
//         x = to_string(ans);
        
//         vector<int> res;
//         for(int i=0; i<x.size(); i++){
//             res.push_back(x[i]-'0');
//         }
//         return res;
    }
};