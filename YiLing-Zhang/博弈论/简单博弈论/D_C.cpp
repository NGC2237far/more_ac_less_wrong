#include <bits/stdc++.h>
using namespace std;

int main() {
    while (1) {
        int n;
        cin >> n;
        if (!n) break;
        int xr = 0, x;
        while (n--) cin >> x, xr ^= x;
        if (!xr) cout << "Grass Win!\n";
        else cout << "Rabbit Win!\n";
    }
}