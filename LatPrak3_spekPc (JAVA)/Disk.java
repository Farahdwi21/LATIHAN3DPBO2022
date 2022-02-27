class Disk{
	//atribut
	private String type;
	private String capacity;
	private int price;

	//constructor
	Disk(){
	}

	//get & set untuk atribut type
	public void setType(String type){
		this.type = type;
	}
		
	public String getType(){
		return this.type;
	}

	//get & set untuk atribut capacity
	public void setCapacity(String capacity){
		this.capacity = capacity;
	}
		
	public String getCapacity(){
		return this.capacity;
	}

	//get & set untuk atribut price 
	public void setPrice(int price){
		this.price = price;
	}
		
	public int getPrice(){
		return this.price;
	}
}