#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, a, b, ans;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a >> b;

    ans = 1440 - (a * 60) - b;
    cout << ans << "\n";
  }

  return 0;
}