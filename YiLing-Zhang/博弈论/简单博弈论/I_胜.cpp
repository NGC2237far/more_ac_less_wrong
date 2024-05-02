#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int s, k;
    cin >> s >> k;
    if (k & 1) {
        cout << s % 2 << '\n';
        return;
    }
    else {
        int t = (s + 1) % (k + 1);
        if (!t) cout << k << '\n';
        else if (t % 2) cout << "0\n";
        else cout << "1\n";
    }
}

signed main() {
    int t;
    cin >> t;
    while (t--) solve();
}
