class Solution {
public:
    int robbing(vector<int>v,int l,int r){
        int cost=0,cur=0;
        int prev=0;
        for(int i = l ; i <= r ; i++){
            cost=max(prev+v[i],cur);
            
            prev=cur;
            cur=cost;
            
        }
        return cost;
    }

    
    int rob(vector<int>& nums) {
        vector<int> dp(1001,0);
        int n=nums.size();
        int m=INT_MIN;
        if(n==1) return nums[0];
        else return max(robbing(nums,0,n-2),robbing(nums,1,n-1));
        
    }
};