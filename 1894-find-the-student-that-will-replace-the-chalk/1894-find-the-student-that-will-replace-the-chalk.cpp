class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) 
    {
        long sum = 0;
        for(int ele : chalk)
            sum+=ele;         
        long rem = k % sum;
        for(int i = 0;i<chalk.size();i++)
        {
            if(rem - chalk[i]<0)  
                return i;
            rem-=chalk[i];
        }
        return 0;
    }
};