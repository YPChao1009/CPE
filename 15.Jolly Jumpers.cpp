/*
 *(CPE10405, UVA10038) Jolly Jumpers.cpp
 * Author:Yun Pei Chao 
 */
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;


int main() {

	int n;
	int set[3000];
	int diff[3000];
	
	while (cin >> n) {
		for (int i = 0; i < n; i++) {
			cin >> set[i];
			
		}
		for (int j = 0; j <n-1; j++) {
			diff[j] = abs(set[j+1] - set[j]);
			
		}
		int flag=0;
		int note[1000];
		for (int i = 0; i < n-1; i++) {
			
			if (diff[i] > (n - 1)) {
				flag = 1;
				break;                             //************
			}
		}

		
		
		if (flag == 0) {
			cout << "Jolly\n";
		}
		else if (flag == 1) {
			cout << "Not jolly\n";
		}
	
	}

	system("pause");
	return 0;
}