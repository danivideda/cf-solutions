#include <bits/stdc++.h>
using namespace std;

int main(){
	string a;
	int x1, y1, x2, y2, status = 0, sum = 0;

	cin >> a;
	for (int i = 0; i < a.size(); ++i){
		//cout << "first" << endl;
		if (a[i] == '['){
			x1 = i;
			status++;
			break;
		}
		if (i == (a.size())-1){
			status = 1;
			goto end;
		}
	}
	for (int i = x1+1; i < a.size(); ++i){
		//cout << "second" << endl;
		if (a[i] == ':'){
			y1 = i;
			status++;
			break;
		}
		if (i == (a.size())-1){
			status = 1;
			goto end;
		}
	}
	for (int i = (a.size())-1; i > y1; --i){
		//cout << "third" << endl;
		if (a[i] == ']'){
			x2 = i;
			status++;
			break;
		}
		if (i == y1+1){
			status = 1;
			goto end;
		}
	}
	//cout << y1 << endl;
	for (int i = x2-1; i > y1; --i){
		//cout << "fourth" << endl;
		//cout << i << endl;
		if (a[i] == ':'){
			y2 = i;
			status++;
			break;
		}
		//cout << "After break" << endl;
		if (i == y1+1){
			status = 1;
			goto end;
		}
	}


	for (int i = y1+1; i < y2; i++){
		if (a[i] == '|'){
			sum++;
		}
	}
	end:
	if (status == 4){
		cout << sum+4 << endl; 
	}
	else {
		cout << "-1";
	}
}