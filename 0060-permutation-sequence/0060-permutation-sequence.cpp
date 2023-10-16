class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int> nums;
        string s = "";
        int fact = 1;
        for(int i=1; i<=n; i++){
            fact*=i;
            nums.push_back(i);
        }
        k-=1;
        
        int blockSize = fact/n;
        
        // cout<<fact<<" "<<k<<endl;
        while(1){
            s+=to_string(nums[k/blockSize]);
            nums.erase(nums.begin()+k/blockSize);
            if(nums.size()==0) break;
            k%=blockSize;
            blockSize/=nums.size();
        }
        return s;
    }
};