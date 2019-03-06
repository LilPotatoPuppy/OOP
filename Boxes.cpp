#include <iostream>
int stack;
int s=0; //i for stack
int boxes;
int b=0;//i for boxes
int i=0;
bool desition;
void BubbleSort(int m[]){
	i=0;
	while(i<boxes){
		scanf("%d",&m[i]);
		i++;
	}
	int temp=0;
	int j;
	for(i=0; i<boxes-1; i++){
		for(j=0; j<boxes-i-1; j++){
			if(m[j]<m[j+1]){
				temp=m[j];
				m[j]=m[j+1];
				m[j+1]=temp;
			}
		}
	}
	for(int i=0; i<boxes; i++)printf("%d ",m[i]);
}//bubble sort
bool Stack(int m[]){
	desition=false;
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
		BubbleSort(m);
		i=0;
		Stack(m);
		if(desition){
			printf("\n you can build safe stack uwu \n");
		}
		if(!desition){
			printf("\n no! dont build this! its not safe >:c \n");
		}
		s++;
	}
	//done
}
