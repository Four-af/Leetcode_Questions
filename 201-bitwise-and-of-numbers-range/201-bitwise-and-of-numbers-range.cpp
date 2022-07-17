class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
    int ans = 0;
        for (int k = 31; k >= 0; k--) {
            int l = (left >> k) & 1; //extract bit from MSB to LSB from left
            int r = (right >> k) & 1; //extract bit from MSB to LSB from right
            if (l == r) ans = ans | (l << k);
            else break;
        }
        
        return ans;    
    }
};

//a solution
//         int d = r-l;
//         if(!d) return l; // edge case
        
//         // calculate the number of bits that get flipped from the end -1
//         int shift = log(d)/log(2) + 1; // log base 2
        
//         unsigned int a = -1; // all 1 in bit representation
        
//         // a << shift makes all the bits that were flipped either once 0
//         return l & r & a << shift;
    