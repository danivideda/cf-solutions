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
  int t;
  cin >> t;
  string s;

  for (int j = 0; j < t; j++) {
    cin >> s;
    bool ok;
    int res = 0, cur;
    ll init = 1;

    while (init) {
      cur = init - 1;
      init++;
      ok = true;

      for (int i = 0; i < s.length(); i++ ) {
        res++;
        s[i] == '+' ? cur++ : cur--;
        if (cur < 0) {
          ok = false;
          break;
        }
      }

      if (ok) break;
    }

    cout << res << endl;
  }

  return 0;
}