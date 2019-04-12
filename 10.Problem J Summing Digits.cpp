/*
 *(CPE10473, UVA11332) Problem J: Summing Digits.cpp
 * Author:Yun Pei Chao 
 */
#include<iostream>
#include<string>
using namespace std;

int F(int a) {
	int total=0;
	while (a > 0) {                        //�Ҧ���ƪ��Ʀr�ۥ[
		total += a % 10;
		a /= 10;
	}
	return total;
}

int main() {
	int n;
	
	while (cin >> n&& n!=0) {
     
		while (n > 9) {                   //�ܦ��Q�i��ƪ��ɭԭn��FUNCTION
           int total=0;
			total += F(n);
			n = total;
		}
		cout << n << endl;
	}
	





	system("pause");
	return 0;
}