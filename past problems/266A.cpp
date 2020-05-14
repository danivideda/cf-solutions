#include <iostream>
#include <string>
using namespace std;

int main(){
	int n, sum = 0;
	string a;
	char temp;
	cin >> n >> a;
	for (int i = 1; i < a.size(); i++){
		temp = a[i-1];
		if (a[i] == a[i-1]){
			sum++;
		}
	}
	cout << sum << endl;
}