class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        // vector<vector<int>> answer(2);
        // int n = matches.size();
        // vector<int> freq(100001,0);
        // vector<int> freq1(100001,0);
        // for(int i = 0;i < n;i++){
        //     freq[matches[i][1]]++;
        //     freq1[matches[i][0]]++;
        // }
        // for(int i = 0;i < n;i++){
        //     if(freq[matches[i][1]] == 1)
        //         answer[1].push_back(freq[matches[i][1]]);
        //     if(freq1[matches[i][0]] == 0)
        //         answer[0].push_back(matches[i][0]);
        //     else 
        // }
        // return answer;
          map<int,int> lost;
        for (auto m : matches)
        {
            if (!lost.count(m[0])) lost[m[0]];
            lost[m[1]]++;
        }
        
        vector<int> zero, ones;
        for (auto[k,l] : lost)
        {
            if (l == 0) zero.push_back(k);
            if (l == 1) ones.push_back(k);
        }
        
        return {zero,ones};
    }
};