class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        vector<int> a = nums;
        sort(a.begin(), a.end());
        vector<vector<int>> res;
        vector<vector<int>> r;
        vector<int> temp;
        for(int i=0; i<nums.size(); i++){
            temp.push_back(a[i]);
            if(!((i+1)%3)){
                res.push_back(temp);
                if(((temp[2]-temp[1])>k) || ((temp[2]-temp[0])>k) || ((temp[1]-temp[0])>k))
                    return r;
                temp.clear();
            }
            
        }
        cout<<"Works??";
        return res;
    }
};