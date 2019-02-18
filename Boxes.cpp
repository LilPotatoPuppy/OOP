#include <iostream>

void BubbleSort(int m[], int i, int boxes){
	int temp=0;
	i=0;
	int j=0;
	while(i<boxes-1){
		while(j<boxes-i-1){
			if(m[j]>m[j+1]){
				temp=m[j];
				m[j]=m[j+1];
				m[j+1]=temp;
			}
			j++;
		}
		i++;
	}
	for(int i=0; i<boxes; i++)printf("%d",m[i]);
}
int r;
int Summ(int i, int r, int boxes, int m[]){
	r=i;
	int summ=0;
	if(i==boxes)return summ;
	summ+=m[i+1];
	Summ(i+1, r, boxes, m);
}
bool P;
bool Phyramid(int m[], int i, int r, bool P, int boxes, int summ){
	P=true;
	Summ(i, r, boxes, m);
	i=r;
	if(m[i]<summ){
		P=false;
		return P;
	}
	if((m[i]>summ||m[i]==summ)&&P){
		Phyramid(m, i+1, r, P, boxes, summ);
	}
	return P;
}

int main(int summ){
	int stack;
	int boxes;
	printf("How many stacks will be c:? \n");
	scanf("%d",&stack);
	printf("How many boxes will be in every stacks? \n");
	scanf("%d",&boxes);
	int b=0;
	int i=0;
	int m[i];
	while(b<stack){
		while(i<boxes){
			scanf("%d",&m[i]);
			i++;
		}
		BubbleSort(m, i, boxes);
		Phyramid(m, i, r, P, boxes, summ);
		if(P)printf("Its avaliable to build stack \n");
		if(!P)printf("Its not avaliable to build stack \n");
		b++;
		i=0;
	}
	i=0;
}
