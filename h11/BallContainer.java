package Ball;

import java.util.List;
import java.util.ArrayList;

public class BallContainer {
	List<String> ls = new ArrayList<String>(20);
	
	public void add(String a){
		if (ls.contains(a) == true)
			System.out.println("The element already exist! ");
		else
			ls.add(a);
	}
	
	public void remove(String r){
		if (ls.contains(r) == true)
			ls.remove(r);
		else
			System.out.println("The element who you want to remove, missing! ");
	}
		
	public void getCapacity(){
		int capacity;
		capacity = 20 - ls.size() ;
		System.out.println("The capacity is: "+capacity);
	}
	
	public void size(){
		System.out.println("The size is: "+ls.size());
	}
		
	public void clear(){
		ls.clear();	
	}
	
	public void show(){
		for (int i=0 ; i < ls.size(); i++){
			System.out.println(ls.get(i));
			
		}
		
	}
	
	public void contains(String b){
		System.out.println(ls.contains(b));
		
	}
		

}
