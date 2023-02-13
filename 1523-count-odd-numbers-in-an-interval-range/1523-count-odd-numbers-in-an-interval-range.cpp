#define ll long long
class Solution {
public:
    int countOdds(int low, int high) {
        ll k = high-low+1;
        if(!(k&1)) return k/2;
        else if(high&1) return k/2+1;
        else return k/2;
        
    }
};