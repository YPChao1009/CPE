/*
 *(CPE10459, UVA10925) Krakovia.cpp
 * Author:Yun Pei Chao 
 */
package p1;

import java.math.BigInteger;
import java.util.Scanner;

public class source {

	public static void main(String[] args) {
		// TODO �۰ʲ��ͪ���k Stub

		int N,F;
		int count=0;
		Scanner input=new Scanner(System.in);
		while(((N=input.nextInt())!=0) &&((F=input.nextInt())!=0)&& input.hasNext()) {     //*******
			count++;
			BigInteger price;
			BigInteger sum=BigInteger.ZERO;                    //��l
			for(int i=0;i<N;i++) {
				price=input.nextBigInteger();
				sum=sum.add(price);                        //�D�@��+-*/
			}
			
			System.out.printf("Bill #%d costs %d: each friend should pay %d\n\n",count,sum,sum.divide(BigInteger.valueOf(F)));     //��j��
		}
	}

}
