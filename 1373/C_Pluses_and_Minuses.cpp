#include <bits/stdc++.h>
#define ll long long

using namespace std;

map<int, int> mp;
int getCount(int key) {
  return mp[key];
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  // int t;
  // cin >> t;
  // string s;

  // while (t--) {
  //   cin >> s;
  //   bool ok;
  //   int res = 0, cur;
  //   ll init = 1;

  //   while (init) {
  //     cur = init - 1;
  //     init++;
  //     ok = true;

  //     for (int i = 0; i < s.length(); i++ ) {
  //       res++;
  //       s[i] == '+' ? cur++ : cur--;
  //       if (cur < 0) {
  //         ok = false;
  //         break;
  //       }
  //     }

  //     if (ok) break;
  //   }

  //   cout << res << endl;
  // }

  ll int t, res;
  string st;
  cin >> t;
  while (t--) {
    cin >> st;
    mp.clear();

    res = 0;
    int mx = 0;
    int count = 0;
    
    for (int i = 0; i < st.length(); i++) {
      st[i] == '-' ? count-- : count++;

      if (count < 0 && mp.find(count) == mp.end()) mp[count] = i+1;

      mx = min(mx, count);
    }

    mx *= -1;

    for (int i = 0; i < mx; i++) {
      res += getCount(-(i+1));
    }

    cout << res+st.length() << endl;
  }

  return 0;
}