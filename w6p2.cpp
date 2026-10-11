#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(void)
{
    int T;
    cin >> T;
    while (T--) {
        int N, M;
        cin >> N >> M;
        vector<vector<int>> graph(N+1);

        while (M--) {
            int u, v;
            cin >> u >> v;
            graph[u].push_back(v);
        }
        int K;
        cin >> K;
        // vector<int> building;
        // building.push_back(1);
        vector<bool> visited(N+1);
        visited[1] = true;
        while (K--) {
            int tmp;
            cin >> tmp;
            visited[tmp] = true;
        }

        queue<int> queue;
        queue.push(1);

        bool found = false;
        while (!queue.empty()) {
            int cur = queue.front();
            queue.pop();

            if (graph[cur].empty()) {
                found = true;
                break;
            }

            for (int next: graph[cur]) {
                if (visited[next]) continue;

                visited[next] = true;
                queue.push(next);
            }
        }
        cout << (found ? "YES" : "NO") << '\n';
    }

    return 0;
}