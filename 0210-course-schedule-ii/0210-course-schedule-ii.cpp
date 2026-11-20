class Solution {
public:
    // Check whether the graph contains a cycle
    bool isCycle(int curr, vector<bool>& vis, vector<bool>& recPath, vector<vector<int>>& adj) {
        vis[curr] = true;
        recPath[curr] = true;

        for (int v : adj[curr]) {
            if (!vis[v]) {
                if (isCycle(v, vis, recPath, adj))
                    return true;
            }
            else if (recPath[v]) {
                return true;
            }
        }

        recPath[curr] = false;
        return false;
    }

    // Find the topological ordering
    void TopologicalSort(vector<vector<int>>& adj, stack<int>& s, vector<bool>& vis, int curr) {
        vis[curr] = true;
        for (int v : adj[curr]) {
            if (!vis[v]) {
                TopologicalSort(adj, s, vis, v);
            }
        }
        s.push(curr);
    }

    vector<int> findOrder(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);

        // Build adjacency list
        for (auto& edge : edges) {
            adj[edge[1]].push_back(edge[0]);
        }

        // Step 1: Detect cycle
        vector<bool> vis(n, false);
        vector<bool> recPath(n, false);
        for (int i = 0; i < n; i++) {
            if (!vis[i]) {
                if (isCycle(i, vis, recPath, adj)) {
                    return {};
                }
            }
        }

        // Step 2: Topological sorting
        stack<int> s;
        vector<bool> visited(n, false);
        for (int i = 0; i < n; i++) {
            if (!visited[i]) {
                TopologicalSort(adj, s, visited, i);
            }
        }

        // Step 3: Store answer
        vector<int> ans;
        while (!s.empty()) {
            ans.push_back(s.top());
            s.pop();
        }
        return ans;
    }
};
