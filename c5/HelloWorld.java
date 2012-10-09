public class HelloWorld {
	private static int l;
	public  static void main(String [] args){
		System.out.println("Hello World!");
		int n;
		for (int i=0; i<100;  i++){
			l += i;
		}
		int [] arr = new int[10];
		for(int i=0, p=1; i<10; i++, p+=2){
			arr[i] = p;
		 System.out.println(arr[i]);
		}
		
	}
}
