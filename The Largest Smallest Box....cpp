/*
 *(CPE10423, UVA10215) The Largest Smallest Box....cpp
 * Author:Yun Pei Chao 
 */
#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int Min(int a, int b) {
	if (b > a)
	{
		return a;
	}
	else
		return b;
}

int main() {


	double L, W;
		double max, min;
	while (cin >>L >>W) {
		
		max = ((L + W) - sqrt(L*L - L * W + W * W)) / 6;
		min = Min(L, W)*0.5;

		printf("%.3f %.3f %.3f\n", max + (1E-6), 0.000, min + (1E-6));
		
	}
	system("pause");
	return 0;
}
