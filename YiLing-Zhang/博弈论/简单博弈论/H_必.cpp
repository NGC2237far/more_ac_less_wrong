#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    int n, m;
    while (cin >> n >> m) {
        int ans = 0;
        while (n--) {
            int x, y;
            cin >> x >> y;
            ans ^= (abs(x - y) - 1);
        }
        if (ans) cout << "I WIN!\n";
        else cout << "BAD LUCK!\n";
    }
}
