#include <iostream>
#include <cmath>
int a;
int b;
int SignsB(int n, int b){
	if(n==1) return b=0;
}
int SignsA(int n, int a){
	if(n==1) return a=1;
}
int ReturnA(int n, int a, int b){
	SignsA(n, a);
	return SignsA(n-1, a) + SignsB(n-1, b);
}
int ReturnB(int n, int a, int b){
	SignsB(n, b);
	return SignsA(n-1, a) + SignsB(n-1, b) - pow(2, n-3);
}
int Signs(int n, int a, int b){
	ReturnB(n, a, b);
	ReturnA(n, a, b);
}

int main(){
	int n;
	printf("How many pairs of parentheses will be? \n");
	scanf("%d",&n);
	Signs(n, a, b);
	printf("%d", a);
}
