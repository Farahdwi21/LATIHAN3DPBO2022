class Pc{

	Processor p;
	Disk d;
	Ram r;
	private int totalprice;

	//constructor
	Pc(){
	}

	//get & set untuk atribut processor
	public void setProcessor(Processor p){
		this.p = p;
	}
		
	public Processor getProcessor(){
		return this.p;
	}

	//get & set untuk atribut disk
	public void setDisk(Disk d){
		this.d = d;
	}
		
	public Disk getDisk(){
		return this.d;
	}

	//get & set untuk atribut ram
	public void setRam(Ram r){
		this.r = r;
	}
		
	public Ram getRam(){
		return this.r;
	}

	//get & set untuk atribut price 
	public void settotalPrice(int pprice, int dprice, int rprice){
		this.totalprice = pprice + dprice + rprice;
	}
		
	public int gettotalPrice(){
		return this.totalprice;
	}
}