class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int size=nums.size();
        if (k == size)
            return nums;
        sort(nums.begin(),nums.end());
        
        vector<pair<int,int>> frequency;
        
        int x=1;
        for(int i=1; i<size;i++){
            if(nums[i]!=nums[i-1]){
                frequency.push_back({x,nums[i-1]});
                    x=1;}
            else x++;
        } 
        frequency.push_back({x,nums[size-1]});
        
        vector<int> res;
        int i=frequency.size()-1;
        sort(frequency.begin(),frequency.end());
        while(k--){
            res.push_back(frequency[i].second);
                i--;
        }
        return res;
    }
};