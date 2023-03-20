class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) 
    {
        // [0,0,1,0,1]
        // for this type testcase we need to insert a 0 at beggining
        flowerbed.insert(flowerbed.begin(),0);

        // [1,0,0,0,1,0,0]
        // for this type testcase we need to insert a 0 at end
        flowerbed.push_back(0);

        for(int i=1;i<flowerbed.size()-1;i++)
        {
            // if we have the triplet of zero then we can put a flower
            if(flowerbed[i-1]+flowerbed[i]+flowerbed[i+1]==0)
            {
                n--;       // reduce flower numbers after putting one flower
                i++;       // move to the next to next zero as we moved already by for loop i++
            }
        }
        return n<=0;
    }
};