package Q05;

import java.util.Scanner;

public class TemperatureMessage {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        System.out.print("Enter temperature: ");
        double t = input.nextDouble();

        if (t > 30) {
            System.out.println("Hot");

        } else if (t > 20) {
            System.out.println("warm");

        } else if (t > 10) {
            System.out.println("fine");

        } else {
            System.out.println("cold");
        }

        input.close();
    }
}