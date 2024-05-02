#include <bits/stdc++.h>
#define int long long
using namespace std;

int s[105], sg[10005];

signed main() {
    while (1) {
        int k, m;
        cin >> k;
        if (!k) break;
        for (int i = 1; i <= k; ++i) cin >> s[i];
        sort(s + 1, s + k + 1);
        sg[0] = 0;
        for (int i = 1; i <= 1e4; ++i) {
            bool vis[105] = {0};
            for (int j = 1; j <= k && s[j] <= i; ++j) vis[sg[i - s[j]]] = 1;
            for (int j = 0; j < 100; ++j) if (!vis[j]) {
                sg[i] = j;
                break;
            }
        }
        cin >> m;
        int n, x;
        while (m--) {
            int n;
            cin >> n;
            int ans = 0;
            while (n--) cin >> x, ans ^= sg[x];
            if (ans) cout << 'W';
            else cout << 'L';
        }
        cout << '\n';
    }
}