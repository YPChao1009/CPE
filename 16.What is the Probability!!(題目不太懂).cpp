#include<iostream>
#include<string>
#include<cmath>
using namespace std;



int main() {

	int s;
	cin >> s;
	while (s--) {
		long int n,i;
		double p;
		cin >> n >> p >> i;
		if (p < 0.00001)                                      //�Ӥp���p
			cout << "0.0000\n";
		double q = 1 - p;
		printf("%.4f\n",(pow(q,i-1)*p)/(1-pow(q,n)));         //(q��i-1����*p)/(1-q��n����)

	}


	system("pause");
	return 0;
}