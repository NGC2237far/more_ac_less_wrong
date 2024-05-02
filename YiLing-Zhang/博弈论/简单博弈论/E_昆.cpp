#include <bits/stdc++.h>
using namespace std;

int a[105];

int main() {
    while (1) {
        int n;
        cin >> n;
        if (!n) break;
        int xr = 0;
        for (int i = 1; i <= n; ++i) cin >> a[i], xr ^= a[i];
        int cnt = 0;
        for (int i = 1; i <= n; ++i) {
            int t = xr ^ a[i];
            if (t >= 0 && t < a[i]) ++cnt;
        }
        cout << cnt << '\n';
    }
}