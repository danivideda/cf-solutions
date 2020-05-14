#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define fr first
#define sc second
#define cval(x) cout << #x << " = " << x << " ";

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int x[4], result = 0;
  for (int i = 0; i < 4; i++) {
    cin >> x[i];
    result += x[i];
  }

  if (result % 2 == 0) {
    // 1
    if (x[0] == (result - x[0])) {
      cout << "YES\n";
      exit(0);
    }
    if (x[1] == (result - x[1])) {
      cout << "YES\n";
      exit(0);
    }
    if (x[2] == (result - x[2])) {
      cout << "YES\n";
      exit(0);
    }
    if (x[3] == (result - x[3])) {
      cout << "YES\n";
      exit(0);
    }
    // 2
    if ((x[0] + x[1]) == (result - (x[0] + x[1]))) {
      cout << "YES\n";
      exit(0);
    }
    if ((x[0] + x[2]) == (result - (x[0] + x[2]))) {
      cout << "YES\n";
      exit(0);
    }
    if ((x[0] + x[3]) == (result - (x[0] + x[3]))) {
      cout << "YES\n";
      exit(0);
    }
    if ((x[1] + x[2]) == (result - (x[1] + x[2]))) {
      cout << "YES\n";
      exit(0);
    }
    if ((x[1] + x[3]) == (result - (x[1] + x[3]))) {
      cout << "YES\n";
      exit(0);
    }
    if ((x[2] + x[3]) == (result - (x[2] + x[3]))) {
      cout << "YES\n";
      exit(0);
    }
    // 3
    if ((x[0] + x[1] + x[2]) == (result - (x[0] + x[1] + x[2]))) {
      cout << "YES\n";
      exit(0);
    }
    if ((x[0] + x[1] + x[3]) == (result - (x[0] + x[1] + x[3]))) {
      cout << "YES\n";
      exit(0);
    }
    if ((x[0] + x[2] + x[3]) == (result - (x[0] + x[2] + x[3]))) {
      cout << "YES\n";
      exit(0);
    }
    if ((x[1] + x[2] + x[3]) == (result - (x[1] + x[2] + x[3]))) {
      cout << "YES\n";
      exit(0);
    }
    cout << "NO\n";
  } else {
    cout << "NO\n";
  }
  return 0;
}