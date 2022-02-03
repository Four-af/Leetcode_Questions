class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
    map<int,int> m;
    map<int,int>::iterator it;
    for (int &n: nums) { 
        ++m[n]; 
    }
    for (it = m.begin(); it != m.end(); ++it) {
        if (it->second == 1) {
            return it->first;
        }
    }
    return -1;

    }
};