//Технологично училище "Електронни системи" към ТУ - София http://www.elsys-bg.org/
//11 Б клас
//Номер 9
//Георги Кръчков

import java.util.Arrays;
import java.util.Collections;

public class Properties{
	public static void main(String[] args ){
	int i = 0;
	int n = args.length;
	String[] strArray  = new String [n];
	
		for (i = 0; i < n; i++){
			strArray[i] = System.getProperty(args[i]);
			if (strArray[i] == null){
                        	strArray[i] = "error";
                        }
		} 

		if (args[n-1].equals("down") == true){
                	Arrays.sort(strArray,Collections.reverseOrder());
                }else{
                        Arrays.sort(strArray);
                }

		for (String str:strArray){
			if (str != "error"){
				System.out.println(str); 	
			} 
		}
	}	
}
