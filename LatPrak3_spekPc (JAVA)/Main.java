class Main{

	public static void main(String[] args){
	//deklarasi class
	Processor p;
	Disk d;
	Ram r;
	Pc xpc;

	//instansiasi kelas processor
	p = new Processor();
	p.setName("Intel Core i7");
    p.setPrice(1050000);


    //instansiasi + mengisi kelas disk
    d = new Disk();
    d.setType("SSD");
    d.setCapacity("240 GB");
    d.setPrice(550000);

    //instansiasi + mengisi kelas ram
    r = new Ram();
    r.setCapacity("16 GB");
    r.setPrice(858000);

    xpc = new Pc();
    xpc.setProcessor(p);
    xpc.setDisk(d);
    xpc.setRam(r);
    //xpc.setTotalPrice(p.getPrice(), d.getPrice(), r.getPrice());

    //menampilkan semua atribut 
	System.out.println("===================================================");
	System.out.println("|                  SHOW PC SPECS                  |");
	System.out.println("---------------------------------------------------");
	System.out.println(">PROCESSOR<");
	System.out.println("- Name		: " + xpc.getProcessor().getName());
	System.out.println("- Price  	: " + xpc.getProcessor().getPrice());

	System.out.println(">DISK<");
	System.out.println("- Type		: " + xpc.getDisk().getType());
	System.out.println("- Capacity      : " + xpc.getDisk().getCapacity());
	System.out.println("- Price		: " + xpc.getDisk().getPrice());

	System.out.println(">RAM<");
	System.out.println("- Capacity      : " + xpc.getRam().getCapacity());
	System.out.println("- Price		: " + xpc.getRam().getPrice());

	System.out.println("\n");
	System.out.println(">TOTAL PRICE<");
	System.out.println("Total  : " + xpc.gettotalPrice());
	System.out.println("---------------------------------------------------");
	}
}