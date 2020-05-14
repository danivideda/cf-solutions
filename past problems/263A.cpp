#include <bits/stdc++.h>
using namespace std;

int main(){
	int data[5][5];
	int a, b;
	for (int i = 0; i < 5; ++i){
		//cout << i << "data1" << endl;
		for (int j = 0; j < 5; j++){
			//cout << j << "data2" << endl;
			cin >> data[i][j];
			if (data[i][j] == 1){
				a = i; b = j;
				i = 5; j = 5; //break the loop
				//cout << "if executed";
			}
		}
	}

	a = 2 - a;
	if (a < 0) a = a * (-1);
	b = 2 - b;
	if (b < 0) b = b * (-1);
	cout << a+b << endl;
	return 0;
}