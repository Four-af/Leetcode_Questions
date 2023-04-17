class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result(candies.size(), false);
        int mxx = *max_element(candies.begin(),candies.end());
        for(int i=0; i<candies.size(); i++){
            if(candies[i]+extraCandies >= mxx) result[i] = true;
        }
        return result;
    }
};