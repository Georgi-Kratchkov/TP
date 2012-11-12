package org.elsys.airplane;

public class Human {
	private String name;
	private String gender;
	
	public Human (){

		int i;
		RandomStrings names = new RandomStrings();
		String[] genders = {"Male", "Female"};
		setName(names.random());
		i = (int)((Math.random() * 10)%2);
		setGender(genders[i]);

		
	}
	
	public void setName(String ime){
		name = ime; 
	}
	
	public void setGender(String pol){
		gender = pol;		
	}
	
	public String getName(){
		return name;
	}
	public String getGender(){
		return gender;
	}

}