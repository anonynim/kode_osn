#include <bits/stdc++.h>

using namespace std;


int n, arr[2005];

int solve(){
    int result = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = i+1; j < n; ++j) {
            for (int k = j+1; k < n; ++k) {
                if(arr[i] + arr[j] + arr[k] == 0)result++;
            }
        }
    }

    return result;
}

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << solve() <<"\n";

    return 0;
}