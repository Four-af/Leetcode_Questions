class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n=arr.size();
        int f=0;
        vector<int> hutao;
        for(int i=0;i<arr.size();i++){
            hutao.push_back(arr[i]);
            if(arr[i]==0){
                hutao.push_back(0);  
                // n++;
                f++;
            }
        }
        // for(int i=0;i<f;i++){
        //     arr.push_back(0);
        // }
        
        for(int i=0;i<n;i++){
            arr[i]=hutao[i];
        }
    }
};