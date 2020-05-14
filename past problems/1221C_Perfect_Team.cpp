#include <bits/stdc++.h>
using namespace std;

int main() {
  int q, c, m, x;
  cin >> q;

  for (int i = 0; i < q; i++) {
    cin >> c >> m >> x;
    int team = 0;
    int team_temp = 0;
    int reserve;
    if (c > 0 && m > 0) {
      // CHECK value of c and m, which one is smaller
      if (c <= m) {
        team = c;
        // CHECK value of team and x, which one is smaller
        if (team > x) {
          team = x;
          c = c - team;
          m = m - team;
          x = x - team;
          // CHECK jml tim yg bisa dibuat
          // dari sisa c dan m tadi, karena nilai x pasti nol
          team_temp = (m + c) / 3;
          // CHECK cari nilai terkecil antara c, m, dan team_temp
          if (c <= team_temp) {
            if (c <= m) {
              team_temp = c;
            } else {
              team_temp = m;
            }
          } else {
            if (m <= team_temp) {
              team_temp = m;
            }
          }
          // CHECK hasil akhir dari jumlah team
          team = team + team_temp;
        }
      } else {
        team = m;
        // CHECK value of team and x, which one is smaller
        if (team > x) {
          team = x;
          c = c - team;
          m = m - team;
          x = x - team;
          // CHECK jml tim yg bisa dibuat
          // dari sisa c dan m tadi, karena nilai x pasti nol
          team_temp = (m + c) / 3;
          // CHECK cari nilai terkecil antara c, m, dan team_temp
          if (c <= team_temp) {
            if (c <= m) {
              team_temp = c;
            } else {
              team_temp = m;
            }
          } else {
            if (m <= team_temp) {
              team_temp = m;
            }
          }
          // CHECK hasil akhir dari jumlah team
          team = team + team_temp;
        }
      }
      cout << team << endl;
    } else {
      cout << 0 << endl;
    }
  }
}