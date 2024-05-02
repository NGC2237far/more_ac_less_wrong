#include <bits/stdc++.h>
using namespace std;

const int N = 2e3 + 5;

bool dp[N][N] = {{0}};

int main() {
    for (int i = 1; i < N; ++i) {
        for (int j = 1; j < N; ++j) {
            if (i == 1 && j == 1) {
                dp[i][j] = 0;
                continue;
            }
            bool ok = 1;
            if (j >= 2 && !dp[i][j - 1]) ok = 0;
            if (i >= 2 && !dp[i - 1][j]) ok = 0;
            if (i >= 2 && j >= 2 && !dp[i - 1][j - 1]) ok = 0;
            dp[i][j] = !ok;
        }
    }
    while (1) {
        int n, m;
        cin >> n >> m;
        if (!n && !m) break;
        if (dp[n][m]) cout << "Wonderful!\n";
        else cout << "What a pity!\n";
    }
}