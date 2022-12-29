class Solution {
public:
    vector<int> getOrder(vector<vector<int>>& tasks) {
       int n = tasks.size();
        
        //indexing all the tasks so they dont loose their identity
        //indices are being stored at tasks[i][2];
        for(int i=0; i<n; i++) tasks[i].push_back(i);
        sort(tasks.begin(),tasks.end());
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq; //min heap
        vector<int> ans;
        
        int i =0;
        long long t = tasks[0][0]; // current time
        
        while(!pq.empty() or i<n)
        {
            //keep pushing tasks into queue while the
            //enqueueing time of next task is lower than the current time!!
            while(i<n && t>=tasks[i][0]) 
             {
                pq.push({tasks[i][1],tasks[i][2]});
                i++;
             }
           
            //if queue is empty and still the outer loop is running
            //...then this means we still have tasks and also the queue is empty
            //---> CPU is idle from 't'(current time)
            //t0 tasks[i][0](next enqueueing time)!!
            if(pq.empty()) {
                t = tasks[i][0];
            }
            
            //queue is not empty and also the
            //next enqueueing time is greater than curr time!!
            //that means we do the task having shortest burst time
            //untill our current time is equal of greater than the enqueueing time of next task
            
            else  {
               pair<int,int> p = pq.top();
               pq.pop();
               ans.push_back(p.second);
               t += p.first; 
            }  
        }
        return ans;
    }
};