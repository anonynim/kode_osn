#include <bits/stdc++.h>

using namespace std;

const int INF = 1e8;

int n, k, v[1005], w[1005], memo[1005][1005];
enum {
    UNVISITED = -1
};

int solve(int idx, int cap) {
    if (idx < 0) {
        return 0;
    }
    if (memo[idx][cap] != UNVISITED) return memo[idx][cap];
    int best = solve(idx - 1, cap);//tidak ambil
    if (cap >= w[idx]) best = max(best, solve(idx, cap - w[idx]) + v[idx]);  // ambil

    return memo[idx][cap] = best;
}


int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    for (int i = 0; i < 1005; ++i) {
        for (int j = 0; j < 1005; ++j) {
            memo[i][j] = UNVISITED;
        }
    }


    // input
    cin >> k >> n;
    for (int i = 0; i < n; ++i) {
        cin >> w[i] >> v[i];
    }

    cout << solve(n - 1, k) << "\n";

    return 0;
}