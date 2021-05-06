#include <bits/stdc++.h>
using namespace std;

vector<vector<pair<int, long long>>> adj;
vector<long long> distances;
vector<bool> visited;
vector<int> parents;

void dijkstra() {
    priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> pq;
    distances[0] = 0;
    pq.push(make_pair(0, 0));
    while (!pq.empty()) {
        int a = pq.top().second;
        pq.pop();

        if (visited[a]) continue;
        visited[a] = true;

        for (pair<int, long long> u : adj[a]) {
            int b = u.first;
            long long w = u.second;
            if (distances[a] + w < distances[b]) {
                distances[b] = distances[a] + w;
                pq.push(make_pair(distances[b], b));
                parents[b] = a;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m; cin >> n >> m;
    adj.assign(n, vector<pair<int, long long>>());
    distances.assign(n, LLONG_MAX);
    visited.assign(n, false);
    parents.assign(n, -1);

    for (int i = 0; i < m; i++) {
        int a, b, w; cin >> a >> b >> w;
        a--; b--;
        adj[a].push_back(make_pair(b, w));
        adj[b].push_back(make_pair(a, w));
    }

    dijkstra();

    stack<int> path;
    if (distances[n-1] != LLONG_MAX) {
        int k = n - 1;
        while (k+1 != 1) {
            path.push(k+1);
            k = parents[k];
        }

        cout << 1 << " ";
        while (!path.empty()) {
            cout << path.top() << " ";
            path.pop();
        }
        cout << "\n";
    } else {
        cout << -1 << "\n";
    }

    return 0;
}
