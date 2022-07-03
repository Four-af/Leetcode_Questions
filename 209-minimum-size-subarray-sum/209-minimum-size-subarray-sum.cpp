class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {        
        
        int low = 0, high = 0,mount = 0, mi= INT_MAX;
        
        while(low<=high && high<nums.size()){
            
            if(mount+nums[high] < target) {
                mount+=nums[high];
                high++;
            }
            else{
                mi = min(mi,(high-low)+1);
                mount-=nums[low];
                low++;
            }
        }
        
        if(mi==INT_MAX) mi=0;
        return mi;   
    }
};
