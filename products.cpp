#include <iostream>
#include <string>
using namespace std;
class Product{
	private:
		string Name;
		float Cost;
		float Weight;
	public:
		void SetName(){
			cout << "What do you want to buy?" << endl;
			cin >> Name;
		}
		string GetName(){
			return Name;
		}
		void SetCost(){
			cout << "Which is price for kilo?" << endl;
			cin >> Cost;
		}
		float GetCost(){
			return Cost;
		}
		void SetWeight(){
			cout << "How many kilos did you take?" << endl;
			cin >> Weight;
		}
		float GetWeight(){
			return Weight;
		}
			
};
class Buy:public Product{
	private:
	int Count;
	float AllCost;
	public:
	void SetAllCost(){
		AllCost=300;
	}
	float GetAllCost(){
		return AllCost;
	}
	void SetCount(){
		Count = 15;
	}
	int GetCount(){
		return Count;
	}
};
class Check:public Buy{
	public:
	void PrintInfo(){
		Buy shopping;
		shopping.GetName();
		shopping.GetWeight();
		shopping.GetCost();
		shopping.GetAllCost();
		shopping.GetCount();	
	}
};
int main(){
	cout << "Welcome to the shop!!" << endl;
	Buy Products;
	Products.SetName();
	Products.SetWeight();
	Products.SetCost();
	Products.SetAllCost();
	Products.SetCount();
	Check Check;
	Check.PrintInfo();
}
