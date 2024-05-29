class Solution
{
public:
    int ladderLength(string beginWord, string endWord, vector<string> &wordList)
    {
        unordered_set<string> s(wordList.begin(), wordList.end());
        queue<pair<string, int>> q;
        int steps = 0;
        q.push({beginWord, steps + 1});
        s.erase(beginWord);
        while (!q.empty())
        {
            string word = q.front().first;
            int steps = q.front().second;
            
            q.pop();
            if(word == endWord) return steps;
            // s.erase()
            string original = word;
            for (int i = 0; i < original.size(); i++)
            {
                // char y = word[i];
                for (char x = 'a'; x <= 'z'; x++)
                {
                    word[i] = x;
                    if (s.count(word))
                    {
                        s.erase(word);
                        q.push({word, steps + 1});
                    }
                }
                word = original;
                // word[i] = y;
            }
        }
        return 0;
    }
};
