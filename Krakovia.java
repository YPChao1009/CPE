/*
 *(CPE10459, UVA10925) Krakovia.java
 * Author:Yun Pei Chao 
 */
package p1;                                                              //java有內建大數運算函式BigInteger

import java.math.BigInteger;                                   
import java.util.Scanner;

public class source {

	public static void main(String[] args) {
		// TODO 自動產生的方法 Stub

		int N,F;
		int count=0;
		Scanner input=new Scanner(System.in);
		while(((N=input.nextInt())!=0) &&((F=input.nextInt())!=0)&& input.hasNext()) {     
			count++;
			BigInteger price;
			BigInteger sum=BigInteger.ZERO;                    //初始
			for(int i=0;i<N;i++) {
				price=input.nextBigInteger();
				sum=sum.add(price);                        //非一般+-*/
			}
			
			System.out.printf("Bill #%d costs %d: each friend should pay %d\n\n",count,sum,sum.divide(BigInteger.valueOf(F)));     //轉大數
		}
	}

}
