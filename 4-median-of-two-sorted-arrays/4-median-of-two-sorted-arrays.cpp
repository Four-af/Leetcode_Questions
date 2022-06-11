class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    int M=nums1.size(), N=nums2.size();
    if(M==0 && N == 0){
        return 0;
    }
    int i =0, j= 0, k = 0;
    int NM = M + N;
    int new_arr [NM];
   
    while(i<M && j <N){//feeding first array into holder
        if(nums1[i]<nums2[j])
        {
            new_arr[k++] = nums1[i++];
        }
        
        else{
            new_arr[k++] = nums2[j++];
        }
    }
    while(i<M){
        new_arr[k++] = nums1[i++];
    }
    while(j<N){
        new_arr[k++] = nums2[j++];
    }   // array sorted
    if(NM%2 ==0 ){        
        return (double) (new_arr[NM/2] + new_arr[(NM/2)-1])/2;
    }
    return (double)new_arr[(NM)/2];

}
//TC = O(log(m+n))
//SC = O(1)
};