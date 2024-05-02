#include <bits/stdc++.h>
using namespace std;

string a = "Kiki\n", b = "Cici\n";
string res[1005];


int main() {
    res[1] = res[2] = a;
    for (int i = 3; i <= 1000; ++i) {
        int t = __lg(i);
        bool ok = 0;
        for (int j = 0; j <= t; ++j) if (res[i - (1 << j)] == b) {
            ok = 1;
            res[i] = a;
            break;
        }
        if (!ok) res[i] = b;
    }
    
    int n;
    while (cin >> n) cout << res[n];
}
