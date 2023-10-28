#include <bits/stdc++.h>

using namespace std;

const int INF = 1e8;

int n, arr[2005];
int memo[2005];

enum{ UNVISITED = -1};

int solve(int k) {
    cout << "solv" << k <<"\n";

    if(memo[k] != UNVISITED)return memo[k];
    if (k == 0) return 0;

    int res = INF;
    for (int i = 0; i < n; ++i) {
        if(arr[i] <= k){
            res = min(res, solve(k - arr[i]) + 1);
        }
    }

    return memo[k] = res;
}

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    memset(memo, UNVISITED, 2005);
    int k;
    cin >> n >> k;

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << solve(k) << "\n";

    return 0;
}