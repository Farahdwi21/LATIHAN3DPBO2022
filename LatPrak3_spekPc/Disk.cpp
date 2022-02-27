#include <string>

using namespace std;

class Disk{
	private:
	//atribut dalam class disk
		string type;
		string capacity;
		int price;

	public:
		//constructor
		Disk(){
		}

		Disk(string type, string capacity, int price){
			this->type = type;
			this->capacity = capacity;
			this->price = price;
		}


		//prosedur dan fungsi untuk get & set dari atribut type
		void setType(string type){
			this->type = type;
		}
		
		string getType(){
			return this->type;
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
	~Disk(){
	}
};