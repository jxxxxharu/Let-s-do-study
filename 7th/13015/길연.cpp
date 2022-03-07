// 백준 13015번 별 찍기23
// 2022년 03월 06일

#include <iostream>
#include <algorithm>


using namespace std;



int main() {
	
	int n;
	cin >> n;

	// 별은 총 2n-1줄로 구성됨. 위에 n-1 가운데 1 아래 n-1
	for (int i = 0; i < 2 * n - 1; i++) {

		if (i == 0 || i == 2 * n - 1) {  // 맨 윗줄 || 맨 아랫줄
			for (int j = 0; j < n; j++) cout << "*";
			for (int j = 0; j < 2 * n - 3; j++) cout << " ";
			for (int j = 0; j < n; j++) cout << "*";
			cout << endl;
			continue;
		}

		if (i == n - 1) {  // 가운데
			for (int j = 0; j < n - 1; j++) cout << " ";
			cout << "*";
			for (int j = 0; j < n - 2; j++) cout << " ";
			cout << " ";
			for (int j = 0; j < n - 2; j++) cout << " ";
			cout << "*" << endl;
			continue;
		}

		if (i < n) {   // 가운데 기준으로 윗 부분
			for (int j = 1; j <= i; j++) cout << " ";
			cout << "*";
			for (int j = 1; j < n - 2; j++) cout << " ";
			cout << "*";
			for (int j = n; j >= 1; j--) cout << " ";
			cout << "*" << endl;
			for (int j = 0; j < n - 2; j++) cout << " ";
			cout << "*";
		}
	} 

	return 0;
}
