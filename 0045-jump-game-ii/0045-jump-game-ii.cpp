class Solution {
public:
    int jump(vector<int>& a) {
        int current = 0;
        int maxx = 0;
        int steps = 0;
        for(int i = 0; i< a.size() -1; i++){
            maxx = max(maxx, i+a[i]);
            if(i==current) {
                steps++;
                current = maxx;
            }
        }
        return steps;
    }
};