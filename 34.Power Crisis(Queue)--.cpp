/*
 *(CPE21944, UVA151) Power Crisis.cpp
 * Author:Yun Pei Chao 
 */
#include<iostream>
#include<queue>

using namespace std;

bool find(int n, int m) {                         //********
	queue<int> crisis;
	for (int i = 1; i <= n; i++) {                //����Jqueue
		crisis.push(i);
	}
	int count = 0;
	while (crisis.size() != 1) {
		int target = crisis.front();               //�ثe��
		crisis.pop();                              //*******
		if (count%m != 0) {                        //******�䶡�jm�������ȡA��^queue�A���O���N�ᱼ(�ݭn����^queue)
			crisis.push(target);
		}
		count++;
	}
	return crisis.front() == 13;                   //��̫�@�ӼƬO�_��13
}


int main() {

	int n,m;
	while (cin >> n && n != 0) {
		for (int m = 1; m<n; m++) {                    //�@�Ӥ@�Ӹ�
			if (find(n, m) == true) {
				cout << m << endl;
				break;
			}
		}
	}
	

	system("pause");
	return 0;
}