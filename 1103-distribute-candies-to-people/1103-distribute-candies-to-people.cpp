class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        int sum=1;
        vector<int> arr(num_people);
        int i=0;
        while(candies>0){
            arr[i]+=min(sum,candies);
            candies-=sum;
            sum+=1;
            i=(i+1)%num_people;
        }return arr;
    }
}; 