#include <bits/stdc++.h>
using namespace std;

int main() {
  int str, intel, exepr;
  int quer;
  int count;

  cin >> quer;

  for (int i = 0; i < quer; i++) {
    count = 0;

    cin >> str;
    cin >> intel;
    cin >> exepr;

    // Precautions
    if (str <= 1) {
      cout << '0';
      goto selesai;
    }

    if (exepr <= 0) {
      cout << '0';
      goto selesai;
    }

    for (int j = 1; j <= exepr; j++) {
      str = str + j;
      exepr = exepr - j;
      intel = intel + exepr;

      if (str >= intel) {
        count++;
      }
    }
    cout << count;

  selesai:;
  }
}