class Solution {
public:
    void sortColors(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        vector<int>f(3,0);
        for(int i=0; i<nums.size(); i++){
            f[nums[i]]++;
        }
        nums.clear();
        for(int i=0; i<3; i++){
            while(f[i]){
                nums.push_back(i);
                f[i]--;
            }
        }
    }
};