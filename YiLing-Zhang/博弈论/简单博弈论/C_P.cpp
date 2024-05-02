#include <bits/stdc++.h>
using namespace std;

int f[1005] = {0};
int sg[1005] = {0};

void SG() {
    f[1] = 1, f[2] = 2;
    for (int i = 3; ; ++i) {
        f[i] = f[i - 1] + f[i - 2];
        if (f[i] > 1000) break;
    }
    for (int i = 1; i <= 1000; ++i) {
        set<int> st;
        for (int j = 1; f[j] <= i; ++j) st.insert(sg[i - f[j]]);
        int t = 0;
        for (auto x:st) if (x == t) ++t; else break;
        sg[i] = t;
    }
}



int main() {
    SG();
    while (1) {
        int n, m, p;
        cin >> n >> m >> p;
        if (!n && !m && !p) break;
        if (sg[n] ^ sg[m] ^ sg[p]) cout << "Fibo\n";
        else cout << "Nacci\n";
    }
}
