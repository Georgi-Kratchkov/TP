package Ball;

public class Balls {

	public static void main(String[] args) {

		BallContainer ball = new BallContainer();
		
		ball.add("Gosho");
		ball.add("Pesho");
		ball.add("Pesho");
		ball.add("Ivan");
		ball.remove("Ivan");
		ball.remove("Something");
		ball.size();
		ball.getCapacity();
		ball.contains("Ivan");
		ball.show();
		
		ball.clear();
		ball.size();
		ball.getCapacity();
		ball.contains("Gosho");
	}

}
