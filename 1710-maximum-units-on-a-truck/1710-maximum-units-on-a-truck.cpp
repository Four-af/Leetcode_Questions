class Solution {
public:
    static bool sortcol(vector<int>& v1, vector<int>& v2)
    {
        return v1[1] > v2[1];
    }
 
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(),boxTypes.end(), sortcol);
        int ans=0;
        for(auto box: boxTypes){
            int x=min(box[0],truckSize);
            ans+=(x*box[1]);
            truckSize-=x;
            if(!truckSize) break;
        }
        return ans;
    }
};