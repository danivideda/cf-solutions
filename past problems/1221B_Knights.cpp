#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, counter_1 = 1, counter_2 = 1;
  cin >> N;
  for (int i = 0; i < N; i++) {
    counter_2 = counter_1 * (-1);
    counter_1 = counter_2;
    for (int j = 0; j < N; j++) {
      if (counter_2 == 1) {
        cout << "W";
      } else {
        cout << "B";
      }
      counter_2 = counter_2 * (-1);
    }
    cout << endl;
  }
}