#include <bits/stdc++.h>
using namespace std;

int lib[12];
int main() {
  int n, q;
  cin >> q;
  for (int i = 0; i < q; i++) {
    cin >> n;
    for (int i = 0; i < 12; i++) {
      lib[i] = 0;
    }
    for (int i = 0; i < n; i++) {
      int temp;
      cin >> temp;
      int counter = 0;
      if (temp <= 2048) {
        while (temp > 1) {
          temp = temp / 2;
          counter++;
        }
        // cout << "counter: " << counter << endl;
        lib[counter]++;
      }
    }

    // cout << "first lib: ";
    // for (int i = 0; i < 12; i++) {
    //   cout << lib[i] << " ";
    // }
    // cout << endl;
    if (lib[11] < 1) {
      // cout << "second lib: ";
      for (int i = 0; i < 12; i++) {
        if (lib[i] >= 2) {
          lib[i + 1] = lib[i + 1] + (lib[i] / 2);
        }
        // cout << lib[i] << " ";
      }
      // cout << endl;
      if (lib[11] >= 1) {
        cout << "YES" << endl;
      } else {
        cout << "NO" << endl;
      }
    } else {
      cout << "YES" << endl;
    }
    // cout << "end" << endl;
  }
}