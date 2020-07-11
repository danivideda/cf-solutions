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

  int x, zeroes, ones;
  string y;
  cin >> x;
  for (int i = 0; i < x; i++) {
    cin >> y;
    zeroes = 0;
    ones = 0;
    
    for (int j = 0; j < y.length(); j++) {
      (y[j] == '1') ? ones++ : zeroes++;
    }

    // cout << ones << " " << zeroes << endl;
    if (ones == 0 || zeroes == 0) {
      cout << "NET" << endl;
    } else {
      if (min(ones, zeroes) % 2 == 1) {
        cout << "DA" << endl;
      } else {
        cout << "NET" << endl;
      }
    }
  }
  
  return 0;
}