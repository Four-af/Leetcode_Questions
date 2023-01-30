class Solution {
public:
    int tribonacci(int n) {
        if (n==0) return 0;
        if(n==1 || n==2 ) return 1;
        int tn = 0, tn1 = 1, tn2 = 1;
        int tn3 = 2;
        n--;
        n--;
        // n--;
        while(n!=0){
            tn3 = tn + tn1 + tn2;
            tn = tn1;
            tn1 = tn2;
            tn2 = tn3;
            n--;
            cout<<tn3<<" "<<n<<endl;
            if(n==0) break;
        }
        // cout<<tn3;
        return tn3;        
    }
};

//1748130326 + 208287610