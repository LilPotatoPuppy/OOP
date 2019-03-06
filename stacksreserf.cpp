#include <iostream>
int stack;
int s=0; //i for stack
int boxes;
int b=0;//i for boxes
int i=0;
void BubbleSort(int m[]){
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
	for(int i=0; i<boxes; i++)printf("%d ",m[i]);
}//bubble sort
bool Stack(int m[]){
	bool desition=false;
	b=1;
	int r=b; //main block in stack
	int summ=0;
	while(b<boxes){
		summ+=m[b];
		b++;
	}
	b=r;
	if(m[b-1]>summ||m[b-1]==summ){
		desition=true;
	}
	else{
		desition=false;
	}
	return desition;
}
int main(){
	printf("How many stacks will be c:? \n");
	scanf("%d",&stack);
	printf("How many boxes will be in every stacks? \n");
	scanf("%d",&boxes);
	printf("Go ahead and type :v \n");
	int m[boxes];
	//reading
	while(s<stack){
		while(b<boxes){
			scanf("%d",&m[b]);
			b++;
		}
		b=0;
		BubbleSort(m);
		Stack(m);
		s++;
	}
	//done reading
}
