class Solution {
public:
   
        vector<vector<int>> fourSum(vector<int>& nums, int target) {
        long long int n = nums.size();  
        sort(nums.begin() , nums.end());  // sort the array to use the two pointers method
        vector<vector<int>> ans;  
        set<vector<int>> store;   // to store and remove the duplicate answers
		
        for(long long int i = 0 ; i < n; i++){
            for(long long int j = i + 1; j < n ; j++){
			
                long long int new_target  =  (long long int)target - (long long int)nums[i] - (long long int)nums[j];
                
                long long int x = j+1 , y = n-1;
                
                while(x < y){
				
                    long long int sum = (long long int)nums[x] + (long long int)nums[y];
                    
                    if(sum > (long long int)new_target) y--;
                    else if(sum < (long long int)new_target ) x++;
                    else  {
                        store.insert({nums[i] , nums[j] , nums[x] , nums[y]});
                        x++;
                        y--;
                    };
                }
            }
        }
		
        for(auto i : store){
            ans.push_back(i);  // store the answers in an array(ans)
        }
		
        return ans;
    }
};