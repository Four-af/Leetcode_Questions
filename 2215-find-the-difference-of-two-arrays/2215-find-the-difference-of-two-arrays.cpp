class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> result(2);
        unordered_map<int,int> mappu1;
        unordered_map<int,int> mappu2;
        unordered_map<int,int> mappu3;
        
          for(auto j : nums2){
            if(mappu2.find(j) == mappu2.end())
                mappu2[j]++;
        }
        
        for(auto i : nums1){
            if(mappu1.find(i) == mappu1.end())
                mappu1[i]++;
        }
      
        for(auto i : nums1){
            if(mappu2.find(i) == mappu1.end() && mappu3.count(i) == 0){
                result[0].push_back(i);
                mappu3[i]++;
            }
        }
        mappu3.clear();
        for(auto i : nums2){
            if(mappu1.find(i) == mappu2.end() && mappu3.count(i) == 0){
                result[1].push_back(i);
                mappu3[i]++;
            }
        }
        return result;
        // vector<vector<int>> ans(2);
        // set<int> s1, s2;
        // for(int i=0; i<nums1.size(); i++){
        //     s1.insert(nums1[i]);
        // }
        // for(int i=0; i<nums2.size(); i++){
        //     s2.insert(nums2[i]);
        // }
        // for(int i=0; i<nums1.size(); i++){
        //     if(!s2.count(nums1[i]))
        //         ans[0].push_back(nums1[i]);
        // }
        // for(int i=0; i<nums2.size(); i++){
        //     if(!s1.count(nums2[i]))
        //         ans[1].push_back(nums2[i]);
        // }
        // return ans;
    }
    
};