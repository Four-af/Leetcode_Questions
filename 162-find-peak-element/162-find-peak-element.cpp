class Solution {
public:
    int findPeakElement(const vector<int> &num) 
    {
        int l = 0;
        int r = num.size()-1;       
        while(l < r)
        {
            int mid1 = (l+r)/2;
            int mid2 = mid1+1;
            if(num[mid1] < num[mid2])
                l = mid2;
            else
                r = mid1;
        }
        //low=high the peak index
        return r;
    }
};