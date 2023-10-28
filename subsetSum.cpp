#include <bits/stdc++.h>

using namespace std;


int n, k;
int arr[100];

bool solve(int idx, int sum) {
    if (sum == k) return true;
    if (idx >= n || sum > k) return false;

    bool opt1 = solve(idx + 1, sum + arr[idx]);
    bool opt2 = solve(idx + 1, sum);
    return opt1 || opt2;
}

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    if (solve(0, 0)) {
        cout << "YA\n";
    } else {
        cout << "TIDAK\n";
    }
}
