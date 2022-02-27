#include <string>
#include <iostream>
#include "Pc.cpp"

using namespace std;

int main(){
	//instansiasi
    Pc x;

    //instansiasi + mengeset untuk kelas prosesor
    Processor p;
    p.setName("Intel Core i7");
    p.setPrice(1050000);
    Processor p2("AMD Ryzen 9 3900X", 7650000);

    //instansiasi + mengisi atribut untuk kelas Disk
    Disk d;
    d.setType("SSD");
    d.setCapacity("240 GB");
    d.setPrice(550000);
    Disk d2("HDD", "120 GB", 250000);
    

    //instansiasi + mengisi atribut untuk kelas Ram
    Ram r;
    r.setCapacity("16 GB");
    r.setPrice(858000);
    Ram r2("32 GB", 1000000);

    x.setProcessor(p);
    x.setDisk(d);
    x.setRam(r);
    x.setTotalPrice(p.getPrice(), d.getPrice(), r.getPrice());

    Pc x2;
    x2.setProcessor(p2);
    x2.setDisk(d2);
    x2.setRam(r2);
    x2.setTotalPrice(p2.getPrice(), d2.getPrice(), r2.getPrice());
  

    //proses menampilkan semua atribut 
    cout << "===================================================" << endl;
    cout << "|                  SHOW PC SPECS                  |" << endl;
    cout << "---------------------------------------------------" << endl;
    cout << endl;
    cout << "PC 1" << endl;
    cout << ">PROCESSOR<" << endl;
    cout << "- Name      : " << x.getProcessor().getName() << endl;
    cout << "- Price     : " << x.getProcessor().getPrice() << endl;

    cout << ">DISK<" << endl;
    cout << "- Type      : " << x.getDisk().getType() << endl;
    cout << "- Capacity  : " << x.getDisk().getCapacity() << endl;
    cout << "- Price     : " << x.getDisk().getPrice() << endl;

    cout << ">RAM<" << endl;
    cout << "- Capacity  : " << x.getRam().getCapacity() << endl;
    cout << "- Price     : " << x.getRam().getPrice() << endl;

    cout << endl;
    cout << ">Total Price<" << endl;
    cout << "Total       : " << x.getTotalPrice() << endl;


    cout << endl;
    cout << "PC 2" << endl;
    cout << ">PROCESSOR<" << endl;
    cout << "- Name      : " << x2.getProcessor().getName() << endl;
    cout << "- Price     : " << x2.getProcessor().getPrice() << endl;

    cout << ">DISK<" << endl;
    cout << "- Type      : " << x2.getDisk().getType() << endl;
    cout << "- Capacity  : " << x2.getDisk().getCapacity() << endl;
    cout << "- Price     : " << x2.getDisk().getPrice() << endl;

    cout << ">RAM<" << endl;
    cout << "- Capacity  : " << x2.getRam().getCapacity() << endl;
    cout << "- Price     : " << x2.getRam().getPrice() << endl;

    cout << endl;
    cout << ">Total Price<" << endl;
    cout << "Total       : " << x2.getTotalPrice() << endl;

   
    cout << "===================================================" << endl;

    return 0;
}
