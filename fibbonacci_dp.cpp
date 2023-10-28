#include <bits/stdc++.h>

using namespace std;

const int INF = 1e8;

int memo[1005];
enum {UNVISITED = -1};
int fib(int k){
    if(memo[k] != UNVISITED) return memo[k];
    if(k == 0) return 1;
    if(k == 1) return 1;

    return memo[k] = fib(k-1) + fib(k-2);
}

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    memset(memo, UNVISITED, 2005);
    int k;
    cin >> k;


    cout << fib(k) << "\n";

    return 0;
}