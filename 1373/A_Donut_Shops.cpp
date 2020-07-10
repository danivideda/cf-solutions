#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define fr first
#define sc second
#define vp(a, b) vector<pair<a, b> >

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  // freopen("input.txt", "r", stdin);

  ll x, a, b, c;
  cin >> x; 

  for (int i = 0; i < x; i++) {
    cin >> a >> b >> c;

    if (a >= c) {
      cout << "-1 " << b << endl;
    } else if (a*b <= c) {
      cout << "1 -1" << endl;
    } else {
      cout << "1 " << b << endl;
    }
  }

  return 0;
}
