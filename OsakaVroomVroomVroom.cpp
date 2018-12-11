#include <iostream>
int main(){
	class car{
		int MaxSpeed = 200;
		char GasolineLvl = 'Full';
		int YearOfLastChecking = 2018;
		char SerialNumber = '2E4R';
		void SoundsEffect(int MaxSpeed, char GasolineLvl, int YearOfLastChecking, char SerialNumber){
			printf("Beep");
			printf("%d %c %d %c",MaxSpeed ,GasolineLvl ,YearOfLastChecking ,SerialNumber );
		}
	};
}
