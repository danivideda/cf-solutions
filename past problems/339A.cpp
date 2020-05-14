#include <bits/stdc++.h>
using namespace std;

int main(){
	string a;
	cin >> a;
	char arr[100];
	int j = 0;
	for (int i = 0; i < a.size(); ++i){
		if (a[i] != '+'){
			arr[j] = a[i];
			j++;
		}
	}
	sort(arr, arr+j);
	for (int i = 0; i < j; ++i){
		cout << arr[i];
		if (i < j-1){
			cout << '+';
		}
	}
}