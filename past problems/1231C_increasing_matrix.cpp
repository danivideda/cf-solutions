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

  int n, m, result = 0;
  cin >> n >> m;
  int data[n][m];
  vector<pair<int, int> > list;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> data[i][j];
      if (data[i][j] == 0) {
        list.pb(mp(i, j));
      } else {
        if ((data[i][j] <= data[i - 1][j] || data[i][j] <= data[i][j - 1]) &&
            (i > 0 && j > 0)) {
          cout << -1 << '\n';
          exit(0);
        }
        result += data[i][j];
      }
    }
  }

  // cval(list.size());

  for (int i = (list.size() - 1); i >= 0; i--) {
    int a, b;
    a = list[i].fr;
    b = list[i].sc;
    data[a][b] = min(data[a + 1][b], data[a][b + 1]) - 1;
    if ((data[a][b] <= data[a - 1][b]) || (data[a][b] <= data[a][b - 1])) {
      cout << -1 << '\n';
      exit(0);
    }
    result += data[a][b];
  }
  cout << result << '\n';

  return 0;
}