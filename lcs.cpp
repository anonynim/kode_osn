#include <bits/stdc++.h>

using namespace std;

const int INF = 1e8;

enum {
    UNVISITED = -1
};

string a, b;
int n,m, memo[1005][1005];

int lcs(int i, int j){
    // kasus dasar
    if(i < 0 || j < 0) return 0;
    // memoisasi
    if(memo[i][j] != UNVISITED) return memo[i][j];

    // kasus rekursif
    if(a[i] == b[j]) return 1 + lcs(i-1,j-1);

    return max(lcs(i-1,j), lcs(i,j-1));
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
    cin >> a >> b;
    n = a.size();
    m = b.size();


    cout << lcs(n-1,m-1) << "\n";


    return 0;
}