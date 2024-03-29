class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        map<int,int> mp;
        for(int i=0; i<tasks.size(); i++){
            mp[tasks[i]]++;
        }
        int ans(0);
        for(auto x : mp){
            if(x.second == 1){
                return -1;
            }
            if(x.second%3==0){
                ans+=(x.second/3);
            }
            else{
                ans+=(x.second/3 + 1);
            }
        }
        return ans;
    }
};