#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100000;
int sumDiv[MAXN + 1];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Precompute the sum of proper divisors for every number.
    for (int i = 1; i <= MAXN / 2; ++i) {
        for (int j = 2 * i; j <= MAXN; j += i) {
            sumDiv[j] += i;
        }
    }

    int a, b;
    while (cin >> a >> b && (a != 0 || b != 0)) {
        int ans = 0;
        for (int i = max(1, a); i <= b; ++i) {
            int j = sumDiv[i];

            // j > i ensures each unordered pair is counted only once.
            if (j > i && j >= a && j <= b && sumDiv[j] == i) {
                ++ans;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
