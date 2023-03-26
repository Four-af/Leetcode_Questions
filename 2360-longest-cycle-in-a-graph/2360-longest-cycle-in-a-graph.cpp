class Solution {
public:
    int maxLength = -1;
    void dfs(vector<int> &edges, vector<int> &previousIndex, vector<int> &visited, int currentNode, int currentIndex) {
        if(previousIndex[currentNode]) {
            maxLength = max(maxLength, currentIndex - previousIndex[currentNode]);
            return;
        }
        if(!visited[currentNode]) {
            previousIndex[currentNode] = currentIndex;
            currentIndex++;
            visited[currentNode] = 1;
            if(edges[currentNode] != -1) dfs(edges, previousIndex, visited, edges[currentNode], currentIndex);
        }
        previousIndex[currentNode] = 0;
        return;
    }

    int longestCycle(vector<int>& edges) {
        vector<int> visited(edges.size(), 0);
        vector<int> previousIndex(edges.size(), 0);
        maxLength = -1;
        for(int i = 0; i < edges.size(); i++) {
            if(!visited[i]) dfs(edges, previousIndex, visited, i, 1);
        }
        return maxLength;
    }
};