class Processor{
	//atribut
	private String name;
	private int price;

	//constructor
	Processor(){
	}

	//get & set untuk atribut name
	public void setName(String name){
		this.name = name;
	}
		
	public String getName(){
		return this.name;
	}

	//get & set untuk atribut price 
	public void setPrice(int price){
		this.price = price;
	}
		
	public int getPrice(){
		return this.price;
	}
}
