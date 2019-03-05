#include <iostream>
#include <cmath>
int a;
int b;
int prevA;
int prevB;
int SignsB(int n, int b, int prevB){
	if(n==1){
		prevB=0;
		b=1;
		return b, prevB;
	}
}
int SignsA(int n, int a, int prevA){
	if(n==1){
		prevA=1;
		a=1;
		return a, prevA;
	}
}
int ReturnA(int n, int a, int b, int prevA, int prevB){
	prevA+=a;
	prevB+=b;
	a=prevA+prevB;
	return SignsA(n-1, a, prevA) + SignsB(n-1, b, prevB);
}
int ReturnB(int n, int a, int b, int prevA, int prevB){
	prevB+=b;
	prevA+=a;
	b=prevA+prevB-pow(2, n-3);
	return SignsA(n-1, a, prevA) + SignsB(n-1, b, prevB) - pow(2, n-3);
}
int Signs(int n, int a, int b){
	ReturnB(n, a, b, prevA, prevB);
	ReturnA(n, a, b, prevA, prevB);
}

int main(){
	int n;
	printf("How many pairs of parentheses will be? \n");
	scanf("%d",&n);
	Signs(n, a, b);
	printf("%d", a);
}
