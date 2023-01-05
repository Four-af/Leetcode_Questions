class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& arr) {
        int n = arr.size(); // extract size
        
        // intially arrow will be 1 (see constraint 1 <= points.length <= 10^5)
        // atleast 1 ballon will be required so, arrow = 1
        
        int arrow = 1; // we will require atleast 1 arrow to burst the ballons
        
         // as we said, sort it on the basis of starting point        
        sort(arr.begin(), arr.end());
        
        //intially start and end position will be of zero index
        int start = arr[0][0];
        int end = arr[0][1];
        
        // Run the loop i.e from (1 to n)
        for(int i = 0; i < n; i++)
        {
            if(arr[i][0] > end) // active set and ith index interval does not overlap
            {
                // so we have to create new active set
                start = arr[i][0];
                end = arr[i][1];
                arrow++; // and also now we need one more arrow
            }
            else // if  active set and ith index interval does overlap
            {
                // we just rearranging our active set
                start = max(start, arr[i][0]);
                end = min(end, arr[i][1]);
            }
        }
        return arrow; // finally, loop ends return count of arrow
    }
};