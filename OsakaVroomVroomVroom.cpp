#include <iostream>
#include <string>
using namespace std;
		class car{
			private:
		int MaxSpeed;
		std::string GasolineLvl;
		int YearOfLastChecking;
		std::string SerialNumber;
		public:
			car(){
				MaxSpeed = 200;
				GasolineLvl = ("Full");
				YearOfLastChecking =2018;
				SerialNumber = ("2W6T");
			}
			void NewInfo(){
				cout << "Type new parametr for max speed" << endl;
				cin >> MaxSpeed;
				if(MaxSpeed<30){
					while(MaxSpeed<30){
						cout<<"Its too low, maybe you forgot a number, maybe you need a new car, type again"<<endl;
						cin >> MaxSpeed;
						continue;
					}
				}
				cout << "Type state of gasoline can" << endl;
				cin >> GasolineLvl;
				cout<<"When your car was checked?"<< endl;
				cin>>YearOfLastChecking;
				if(YearOfLastChecking>2018){
					while(YearOfLastChecking>2018){
					cout<<"Are you from future or something? Type date that fits for time frameworks"<<endl;
					cin>>YearOfLastChecking;
					continue;	
					}
				}
				cout << "Type serial number of your car" << endl;
				cin >> SerialNumber; 
			}
			void Printing(){
				cout<<" Max Speed = "<< MaxSpeed << endl;
				cout<<" State of gasoline can now "<< GasolineLvl << endl;
				cout<<" Your car was checked in "<< YearOfLastChecking << endl;
				cout<<" serial number of your car is "<< SerialNumber<< endl;
			}
			
		void SoundsEffect(){
			cout << endl;
			cout << "Beep" << endl;
			cout << endl;
		}
	};
int main(){
	car weeew;
	weeew.NewInfo();
	weeew.SoundsEffect();
	weeew.Printing();
	weeew.SoundsEffect();
	weeew.SoundsEffect();
}
