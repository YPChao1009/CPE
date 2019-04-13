/*
 *(CPE21944, UVA151) Power Crisis.cpp
 * Author:Yun Pei Chao 
 */
#include<iostream>
#include<queue>

using namespace std;

bool find(int n, int m) {                         //********
	queue<int> crisis;
	for (int i = 1; i <= n; i++) {                //全放入queue
		crisis.push(i);
	}
	int count = 0;
	while (crisis.size() != 1) {
		int target = crisis.front();               //目前的
		crisis.pop();                              //*******
		if (count%m != 0) {                        //******找間隔m之間的值，放回queue，不是的就丟掉(需要的放回queue)
			crisis.push(target);
		}
		count++;
	}
	return crisis.front() == 13;                   //找最後一個數是否為13
}


int main() {

	int n,m;
	while (cin >> n && n != 0) {
		for (int m = 1; m<n; m++) {                    //一個一個試
			if (find(n, m) == true) {
				cout << m << endl;
				break;
			}
		}
	}
	

	system("pause");
	return 0;
}