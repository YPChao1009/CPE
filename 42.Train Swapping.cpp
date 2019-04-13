/*
 *(CPE22811, UVA299) Train Swapping.cpp
 * Author:Yun Pei Chao 
 */
#include<iostream>
using namespace std;

void swap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

int main() {
	
	int n;
	cin >> n;
	int length;
	int train[50];
	while (n--) {
		cin >> length;
		int count = 0;
		for (int i = 0; i < length; i++) {
			cin >> train[i];
		}
		for (int i = 0; i < length - 1; i++) {                 //bubble sort(ититец┤л)
			for (int j = 0; j < length-i-1; j++) {
				if (train[j] > train[j + 1]) {
					swap(train[j], train[j + 1]);
					count++;
				}
			}
		}
		
		cout << "Optimal train swapping takes " << count << " swaps.\n";
	}

	system("pause");
	return 0;
}