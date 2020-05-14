#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll x, y;
  cin >> x >> y;

  while (x <= y) {
    bool digit[10];
    for (int i = 0; i < 10; i++) {
      digit[i] = false;
    }

    ll c = x;
    while (c) {
      if (!digit[c % 10]) {
        digit[c % 10] = true;
        c /= 10;
      } else {
        break;
      }
    }

    if (c) {
      x++;
    } else {
      cout << x << "\n";
      exit(0);
    }
  }
  cout << -1 << "\n";
  exit(0);
}