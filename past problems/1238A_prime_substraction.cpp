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

  ll x, y;
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    cin >> x >> y;
    vector<ll> prime;
    prime.pb(2);
    if ((x - y) % 2 == 0) {
      cout << "YES" << '\n';
      goto end;
    }
    for (ll i = 3; i < x; i++) {
      bool status = 0;
      for (ll j = 2; j < i; j++) {
        if (i % j == 0) {
          status = 1;
        }
      }
      if (status == 0) {
        prime.pb(i);
        if ((x - y) % i == 0) {
          cout << "YES" << '\n';
          goto end;
        }
      }
    }
    cout << "NO" << '\n';
  end:;
  }
  // for (int i = 0; i < prime.size(); i++) {
  //   bool status2 = 0;
  //   ll temp = x - y;
  //   if (temp % prime[i] == 0) {
  //     cout << "YES" << '\n';
  //     exit(0);
  //   }
  // }

  // cout << "NO" << '\n';
  // exit(0);

  return 0;
}