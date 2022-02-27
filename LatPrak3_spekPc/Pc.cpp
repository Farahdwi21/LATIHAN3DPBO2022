#include "Processor.cpp"
#include "Disk.cpp"
#include "Ram.cpp"

using namespace std;

class Pc{
	private:
		//atribut kelas pc
		Processor p;
		Disk d;
		Ram r;
		int totalPrice;


	public:
		//constructor
		Pc(){
		}

		Pc(Processor p, Disk d, Ram r, int totalPrice){
			this->p = p;
			this->d = d;
			this->r = r;
			this->totalPrice = p.getPrice() + r.getPrice() + d.getPrice();
		}


		//prosedur dan fungsi untuk get & set dari processor
		void setProcessor(Processor p){
			this->p = p;
		}
		
		Processor getProcessor(){
			return this->p;
		}

		//prosedur dan fungsi untuk get & set dari Disk
		void setDisk(Disk d){
			this->d = d;
		}
		
		Disk getDisk(){
			return this->d;
		}

		//prosedur dan fungsi untuk get & set dari Ram
		void setRam(Ram r){
			this->r = r;
		}
		
		Ram getRam(){
			return this->r;
		}

		//prosedur dan fungsi untuk get & set dari total price
		void setTotalPrice(int pprice, int dprice, int rprice){
			this->totalPrice = pprice + dprice + rprice;
		}
		
		int getTotalPrice(){
			return this->totalPrice;
		}

	//destructor
	~Pc(){
	}
};