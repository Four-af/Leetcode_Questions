class Solution {
public:
    int strStr(string h, string n) {
        if(n.size() > h.size()) return -1;
         int i, j=0;
         for(i=0; i< h.size(); i++){
             if(h[i] == n[j]){
                 while(j!=n.size()){
                     if(h[i+j]!=n[j]){
                         j=0;
                         break;
                     }
                     else j++;
                     if(j==n.size()) return i;
                 }
             }
         }
        return -1;
    }
};