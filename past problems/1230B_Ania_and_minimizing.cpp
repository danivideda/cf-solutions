#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define fr first
#define sc second
#define cval(x) cout << #x << " = " << x << " "

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  if (n == 1 && k != 0) {
    cout << 0;
    exit(0);
  }
  if (k == 0) {
    cout << s;
    exit(0);
  }

  if (s[0] != '1' && k != 0) {
    s[0] = '1';
    k--;
  }

  for (int i = 1; i < n; i++) {
    if (s[i] != '0' && k > 0) {
      s[i] = '0';
      k--;
    }
  }

  cout << s << '\n';

  return 0;
}