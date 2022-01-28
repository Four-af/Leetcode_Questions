class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        // vector<pair<int,int>> v;
        int n=nums.size();
        // if(n<3){
        //     return res;
        // }
        sort(nums.begin(),nums.end());
        for(int i=0; i<n; i++){
            int l=i+1, r=n-1;
            while(l<r){
                int sum= nums[l]+ nums[i]+ nums[r];
                if(sum>0)
                    r--;
                else if(sum<0)
                    l++;
                else{
                    res.push_back({nums[l], nums[i], nums[r]});
                    int a = l, b=r;
                    while(l<r && nums[l]==nums[a])
                        l++;
                    while(l<r && nums[r]==nums[b])
                        r--;
                }
            }while(n > i+1 && nums[i]==nums[i+1])
                i++;
        }       
        return res;
    }
};