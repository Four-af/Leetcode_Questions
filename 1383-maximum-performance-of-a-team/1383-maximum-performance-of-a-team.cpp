class Solution{
public:
    const int mod = (int)1e9 + 7;
    int maxPerformance(int n, vector<int> &speed, vector<int> &efficiency, int k){
      priority_queue<int, vector<int>, greater<int>> pq;//min heap
      vector<pair<int, int>> v;//eff speed pair cz we needa sort eff
      for (int i = 0; i < n; i++){
        v.push_back({efficiency[i], speed[i]});
      }
      sort(v.rbegin(), v.rend()); 
      long totSpeed = 0, ans = 0;
      for (int i = 0; i < n; i++) {
        int currEff = v[i].first;
        int currSpeed = v[i].second;
        if (pq.size() == k) {
		  // remove the minimum speed from the pq
          totSpeed -= pq.top();
          pq.pop();
        }
		// push the current speed in the pq
        pq.push(currSpeed); 
		// add the current speed to the totSpeed
        totSpeed += currSpeed; 
        ans = max(ans, totSpeed * currEff); 
      }
      return ans % mod;
    }
};

//learned from solution by https://leetcode.com/problems/maximum-performance-of-a-team/discuss/2559890/C%2B%2B-or-Min-Heap-Implementation