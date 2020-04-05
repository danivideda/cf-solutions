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

  ll t;
  ll a, b, temp1, temp2;
  string yes = "YES";
  string no = "NO";
  cin >> t;
  while (t--) {
    cin >> a >> b;
    if ((a - b) % 2 != 0) {
      cout << no << endl;
    } else {
      temp1 = (a - b) / 2;
      if (b % 2 == 0) {
        temp2 = (b / 2) * (b - 1);
      } else {
        temp2 = (b / 2) * b;
      }
      if (temp1 >= temp2) {
        cout << yes << endl;
      } else {
        cout << no << endl;
      }
    }
  }

  return 0;
}