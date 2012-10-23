import java.io.*;

public class Exam {
	public static void main(String[] args){
		String fileName = null;
		if (args.length > 0){
		
			fileName = args[0];
		
		}else{
		
			System.out.println("Wrong filename!");
			return;	
		}
		try {
				BufferedReader reader = new BufferedReader (new FileReader(fileName));
				String line;
				int summ = 0;
				while ((line = reader.readLine()) != null){
					
					summ += Integer.parseInt(line.split(",")[1]);
					
				}
				System.out.println(summ);
				
		} catch (Exception e){
		
		}
		
	}	
}	
