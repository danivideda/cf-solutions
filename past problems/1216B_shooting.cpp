#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define fr first
#define sc second
#define nl cout << '\n'
#define cval(x) cout << #x << " = " << x << " "

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  int sorted[n], data[n];

  for (int i = 0; i < n; i++) {
    cin >> sorted[i];
    data[i] = sorted[i];
  }
  sort(sorted, sorted + n, greater<int>());

  int result = 0;
  int x = 0;
  for (int i = 0; i < n; i++) {
    result = result + (sorted[i] * x) + 1;
    x++;
  }

  cout << result << '\n';

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (sorted[i] == data[j]) {
        cout << j + 1 << " ";
        data[j] = -1;
        break;
      }
    }
  }

  return 0;
}