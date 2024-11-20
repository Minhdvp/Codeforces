#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n, c;
    cin >> t;

    while (t--) {
        cin >> n >> c;

        vector<vector<int>> adj(n + 1);
        vector<int> degrees(n + 1, 0);
        vector<int> gold(n + 1);

        for (int i = 1; i <= n; i++) {
            cin >> gold[i];
        }

        for (int i = 1; i < n; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
            degrees[u]++;
            degrees[v]++;
        }

        priority_queue<pair<int, int>> pq; // Max heap based on degrees
        for (int i = 1; i <= n; i++) {
            pq.push({degrees[i], i});
        }

        int ans = 0;
        while (!pq.empty()) {
            int deg = pq.top().first;
            int node = pq.top().second;
            pq.pop();

            if (gold[node] >= 0) {
                ans += gold[node];
                for (int neighbor : adj[node]) {
                    gold[neighbor] -= c;
                    degrees[neighbor]--;
                    pq.push({degrees[neighbor], neighbor});
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}