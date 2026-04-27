#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;
    while (n != 1) {
        cout << n << " ";
        if (n % 2 == 0) n /= 2;
        else n = n * 3 + 1;
    }
    cout << 1 << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    while (t--) solve();
    return 0;
}
