class Solution {
public:
    vector<vector<string>> findLadders(string beginWord, string endWord, vector<string>& wordList) {
        set<string>st(wordList.begin(), wordList.end());
        set<string> visited;
        vector<vector<string>>res;
        queue<vector<string>>q;
        q.push({beginWord});
        while(!q.empty()){
            int size=q.size();
            while(size--){
                vector<string> curr_path=q.front();//current path
                q.pop();
                string s=curr_path.back();//the front from q that we popped
                for(int i=0;i<s.size();i++){
                    for(char c='a';c<='z';c++){
                        string temp = s;
                        temp[i]=c;
                        if(st.count(temp)!=0){//checking existence in set
                            vector<string>new_path = curr_path;
                            new_path.push_back(temp);
                            visited.insert(temp);//inserting new val char in set
                            if(temp==endWord)
                                res.push_back(new_path);
                            else
                                q.push(new_path);
                        }
                    }
                }
                
            }
            for(auto itr:visited){
                st.erase(itr);
            }
        }return res;
    }
};