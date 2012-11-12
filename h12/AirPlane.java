package org.elsys.airplane;

import java.util.Random;
import java.lang.String;

public class AirPlane {

	private String[][][] seats = new String[6][27][2];

	public void printSeats() {

		for (int i = 0; i < 27; i++) {

			for (int j = 0; j < 6; j++) {
				System.out.print(seats[j][i][0]);
				if (j == 2) {
					System.out.print(" ");
				}
			}
			System.out.println("");
		}
	}

	public void add(int rvalue, Human a, Human b, Human c) {
		boolean stop = false;
		for (int i = 0; (i < 27) && (stop == false); i++) {
			for (int j = 0; (j < 6) && (stop == false); j++) {
				if (seats[j][i][0] == null) {
					if (rvalue == 1) {
						seats[j][i][0] = a.getName();
						seats[j][i][1] = a.getGender();
						stop = true;
					} else if (rvalue == 2) {
						if (j < 5) {
							if (seats[j + 1][i][0] == null) {
								seats[j][i][0] = a.getName();
								seats[j][i][1] = a.getGender();

								seats[j + 1][i][0] = b.getName();
								seats[j + 1][i][1] = b.getGender();
								stop = true;
							}
						}
					}
					if (rvalue == 3) {
						if (j < 4) {
							if ((seats[j + 1][i][0] == null)
									&& (seats[j + 2][i][0]) == null) {
								seats[j][i][0] = a.getName();
								seats[j][i][1] = a.getGender();

								seats[j + 1][i][0] = b.getName();
								seats[j + 1][i][1] = b.getGender();

								seats[j + 2][i][0] = c.getName();
								seats[j + 2][i][1] = c.getGender();

								stop = true;
							}
						}
					}
				}

			}

		}
	}

	public void remove(Human h) {
		boolean ready = false;

		for (int i = 0; i < 27; i++) {
			for (int j = 0; j < 6; j++) {
				if (seats[j][i][0] == h.getName()) {
					seats[j][i][0] = null;
					ready = true;
				}
			}
		}
		if (ready != true) {
			System.out.println("The name: " + h.getName()
					+ " has not been found on the airplane!");
		}
	}

	public void clear() {
		for (int i = 0; i < 27; i++) {
			for (int j = 0; j < 6; j++) {
				seats[j][i][0] = null;
				seats[j][i][1] = null;
			}
		}
	}

	public void getMales() {
		int x = 0;
		for (int i = 0; i < 27; i++) {
			for (int j = 0; j < 6; j++) {
				if (seats[j][i][1] == "Male") {
					x++;
				}
			}
		}
		System.out.println("The males are: " + x);
	}

	public void getFemales() {
		int x = 0;
		for (int i = 0; i < 27; i++) {
			for (int j = 0; j < 6; j++) {
				if (seats[j][i][1] == "Female") {
					x++;
				}
			}
		}
		System.out.println("The females are:" + x);
	}

	public void getCapacity(int sum) {
		if (sum < 162) {
			System.out.println(162 - sum);
		} else {
			System.out.println("The airplane is Full !");
		}
	}

	public static void main(String args[]) {

		Human h = new Human();

		AirPlane plane = new AirPlane();
		Random rand = new Random();
		int n = 0;
		int sum = 0;
		int i;
		for (i = 0; sum < 162; i++) {
			n = rand.nextInt(3) + 1;
			if ((sum + n) <= 162) {
				Human a = new Human();
				Human b = new Human();
				Human c = new Human();
				plane.add(n, a, b, c);
				sum = sum + n;
			}
		}
		plane.printSeats();
		plane.remove(h);
		System.out.println("Broq na patnicite v samoleta e: " + sum);
		System.out.println("Broq na grupite v samoleta e: " + i);

		plane.getCapacity(sum);
		plane.getMales();
		plane.getFemales();
		plane.clear();
		plane.printSeats();
	}

}
