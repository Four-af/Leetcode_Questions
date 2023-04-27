class Solution {
public:
    int bulbSwitch(int n) {
        long long a=1;
        int c = 0;
        while((a*a)<=n){
            a++;
            c++;
        }
        return c;
    }
};