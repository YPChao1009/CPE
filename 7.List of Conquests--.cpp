/*
 *(CPE21924, UVA10420) List of Conquests.cpp
 * Author:Yun Pei Chao 
 */
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;



int main() {

	int n;
	cin >> n;
	
	string country[2000] = {}, first_name[2000] = {}, last_name[2000] = {};
		
	for (int i = 0; i < n; i++) {
		
		cin >> country[i] >>first_name[i] >> last_name[i];
		


	}

	sort(country, country + n);                    //���a���Ʀn
	for (int i = 0; i < n; i++) {                  //��O�_����
		int num = 1;
		cout << country[i] << " ";
		for (int j = i + 1; j < n; j++) {          //****��P�Ӱ�a�Ӽ� ���줣�@�ˬ���
			if (country[i] == country[j]) {
				num++;
			}
			else if (country[i] != country[j]) {
				cout << num << endl;
				break;
			}
			cout << num << endl;
		i = j;                                              //***************
		}
		
	}




	system("pause");
	return 0;
}