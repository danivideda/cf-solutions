#include <bits/stdc++.h>
using namespace std;

char arr[110];
int main() {
  int n, j;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    cin >> arr;
    j = 0;  // variabel j akan menjadi 'ukuran / jumlah huruf' dari kata yang
            // akan dimasukkan nantinya
    while (arr[j] != 0) {
      j++;
    }
    if (j <= 10) {
      for (int i = 0; i < j; ++i) {
        cout << arr[i];
      }
    } else {
      cout << arr[0] << j - 2
           << arr[j - 1];  // Ngeluarin huruf pertama, jumlah huruf ditengah
                           // (j-2), dan huruf terakhir
    }
    cout << endl;
  }
}
