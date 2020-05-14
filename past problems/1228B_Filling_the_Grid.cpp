#include <bits/stdc++.h>
#define ll long long
#define mp make_pair
#define fr first
#define sc second
#define check cout << "MASUK\n"
#define vp(a, b) vector<pair<a, b> >

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int h, w;
  ll result = 1;
  cin >> h >> w;
  int r[h], c[w];

  for (int i = 0; i < h; i++) {
    cin >> r[i];
  }

  for (int j = 0; j < w; j++) {
    cin >> c[j];
  }

  string data[h][w];
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      data[i][j] = "E";
      if (r[i] > 0) {
        data[i][j] = "F";
        r[i]--;
      } else if (r[i] == 0) {
        data[i][j] = "R";
        r[i]--;
      }
      // cout << data[i][j] << " ";
    }
    // cout << "\n";
  }

  // check;
  for (int j = 0; j < w; j++) {
    for (int i = 0; i < h; i++) {
      if (c[j] > 0) {
        if (data[i][j] == "R") {
          cout << 0 << "\n";
          exit(0);
        } else {
          data[i][j] = "F";
          c[j]--;
        }
      } else {
        if (data[i][j] == "F") {
          cout << 0 << "\n";
          exit(0);
        } else {
          data[i][j] = "R";
        }
        i = h;
      }
    }
  }

  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      // cout << data[i][j] << " ";
      if (data[i][j] == "E") {
        result = (result * 2) % 1000000007;
      }
    }
    // cout << "\n";
  }

  cout << result << "\n";
  return 0;
}