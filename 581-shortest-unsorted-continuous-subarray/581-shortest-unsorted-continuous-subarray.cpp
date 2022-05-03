class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> v(nums.size());
        for(int i=0; i<nums.size();i++){
            v[i]=nums[i];
        }
        sort(v.begin(),v.end());
        int s=-1, l=nums.size();
        for(int i=0; i<nums.size();i++){
            if(v[i]!=nums[i] && s==-1){
                s=i;
            }else if(v[i]!=nums[i]){
                l=i;
            }
        }
        
        if(s==-1) return 0;
        else return l-s+1;
    }
};