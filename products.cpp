#include <iostream>
#include <string>
using namespace std;
class Product{
	private:
		std::string Name;
		float Cost;
		float Weight;
		public:
		void Apples(std::string Name, float Weight){
			cout << "Apples! Good choice! How many kilos will you take?" << endl;
			cin >> Weight;
			Name = ("Apples");
		}
		void Candies(std::string Name, float Weight){
			cout << "Candies! Tasty, but not healthy. \n ... \n No one actually cares. How many kilows will you take?" << endl;
			cin >> Weight;
			Name = ("Candies");
		}
		void Tomatoes(std::string Name, float Weight){
			cout << "Tomatoes! Tasty and healhty! How many kilos will you take?" << endl;
			cin >> Weight;
			Name = ("Tomatoes");
		}
		void SetCost(std::string Name, float Cost, float Weight){
			if(Name==("Apples"))Cost = Weight*73;
			if(Name==("Candies"))Cost = Weight*56.7;
			if(Name==("Tomatoes"))Cost = Weight*45.8;
		}
		
};
class Buy:public Product{
	Buy(std::string Name, int Count, float Cost, float Weight){
		Cost=Cost;
		Weight=Weight;
	}
	void SetCount(std::string Name, int Count, float Weight){
			if(Name==("Apples"))Count = Weight/1.76;
			if(Name==("Candies"))Count = Weight/0.94;
			if(Name==("Tomatoes"))Count = Weight/2;
		}
};
class Check:public Buy{
	void Check1(){
		cout << "You bought" << Weight << "kilos of" << Name << ". This will cost you" << Cost << "rubles. Total numbers of" << Name << "bought:" << Count << endl;
	}
};
int main(){
	Product noodle;
	cout << "What do you want to buy? Apples, Candies or tomatoes?" << endl;
	std::string a;
	cin >> a;
	if(a==("Apples")){
		noodle.Apples;
		noodle.SetCost;
		noodle.SetCount;
		noodle.Check;
	}
	if(a==("Candies")){
		noodle.Candies;
		noodle.SetCost;
		noodle.SetCount;
		noodle.Check;
	}
	if(a==("Tomatoes")){
		noodle.Tomatoes;
		noodle.SetCost;
		noodle.SetCount;
		noodle.Check;
	}
}
