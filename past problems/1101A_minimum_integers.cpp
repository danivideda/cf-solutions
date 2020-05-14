#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define fr first
#define sc second
#define cval(x) cout << #x << " = " << x << " \n"

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int q, l, r, d, d2;
  cin >> q;

  for (int i = 0; i < q; i++) {
    cin >> l >> r >> d;
    d2 = d;
    bool condition = false;
    while (condition == false) {
      if ((d2 < l && d2 < r) || (d2 > l && d2 > r)) {
        condition = true;
      } else {
        d2 = ((r / d) + 1) * d;
      }
    }
    cout << d2 << '\n';
  }

  return 0;
}