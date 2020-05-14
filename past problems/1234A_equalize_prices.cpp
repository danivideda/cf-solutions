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

  int q, n, a, ans;

  cin >> q;
  for (int i = 0; i < q; i++) {
    ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
      cin >> a;
      ans += a;
    }

    // cval(ans);
    if (ans % n != 0) {
      ans = (ans / n) + 1;
    } else {
      ans /= n;
    }
    cout << ans << '\n';
  }

  return 0;
}