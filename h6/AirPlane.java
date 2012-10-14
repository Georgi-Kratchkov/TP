//Технологично училище "Електронни системи" към ТУ - София http://www.elsys-bg.org/
//11 Б клас
//Номер 9
//Георги Кръчков

import java.util.Random;
public class AirPlane {
	
	private int [][] seats = new int[6][27];
	public void printSeats(){
                
                for (int i = 0; i<27 ; i++){
                        
                        for(int j = 0; j<6; j++){
                                System.out.print(seats[j][i]);
                                if (j == 2) {
					 System.out.print(" ");
				}
                        }       
                        System.out.println("");
                }
	}

	public void add(int rvalue) {
	boolean stop = false;
	 for (int i = 0; (i < 27) && (stop == false) ; i++ ){
		for(int j = 0; (j < 6) && (stop == false); j++) {
			if (seats[j][i] == 0){
				if (rvalue == 1){
					seats[j][i] = 1;
					stop = true;
				} else if (rvalue == 2){
					if (j < 5) 
					{	if (seats[j+1][i] == 0){
						seats[j][i] = 1;
						seats[j+1][i] = 1;
						stop = true;
						}
					}
				} if (rvalue == 3){
					if (j < 4)
					{	if ((seats[j+1][i] == 0)&&(seats[j+2][i]) == 0){
						seats[j][i] = 1;
                                        	seats[j+1][i] = 1;
						seats[j+2][i] = 1;
                                        	stop = true;
						}
					}
				}
			}			 
			
		}
	    
	 }
	}

	public static void main(String args[]) {
		AirPlane plane = new AirPlane();
		Random rand = new Random();
		int n = 0;
		int sum = 0;
		int i;
		for (i = 0; sum < 162; i++ ){
			n = rand.nextInt(3) + 1;
				if ((sum + n) <= 162 )
				{
					plane.add(n);
					sum = sum + n;
				}
		}
		plane.printSeats();  		
		System.out.println("Broq na patnicite v samoleta e: " + sum);
		System.out.println("Broq na grupite v samoleta e: " + i);
	}	


}
