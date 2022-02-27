#include <string>

using namespace std;

class Ram{
	private:
	//atribut dalam class Ram
		string capacity;
		int price;

	public:
		//constructor
		Ram(){
		}

		Ram(string capacity, int price){
			this->capacity = capacity;
			this->price = price;
		}
		
		//prosedur dan fungsi untuk get & set dari atribut capacity
		void setCapacity(string capacity){
			this->capacity = capacity;
		}
		
		string getCapacity(){
			return this->capacity;
		}

		//prosedur dan fungsi untuk get & set dari atribut price
		void setPrice(int price){
			this->price = price;
		}
		
		int getPrice(){
			return this->price;
		}

		
	//destructor
	~Ram(){
	}
};