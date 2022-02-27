#include <string>

using namespace std;

class Processor{
	private:
	//atribut dalam class processor
		string name;
		int price;

	public:
		//constructor
		Processor(){
		}

		Processor(string name, int price){
			this->name = name;
			this->price = price;
		}


		//prosedur dan fungsi untuk get & set dari atribut name
		void setName(string name){
			this->name = name;
		}
		
		string getName(){
			return this->name;
		}

		//prosedur dan fungsi untuk get & set dari atribut price
		void setPrice(int price){
			this->price = price;
		}
		
		int getPrice(){
			return this->price;
		}

		
	//destructor
	~Processor(){
	}
};