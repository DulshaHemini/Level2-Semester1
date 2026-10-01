package Q07;

import java.util.Scanner;

public class OddEven {

    public static String checkOddEven(int number) {

        if (number % 2 == 0) {
            return "Even";
        } else {
            return "Odd";
        }
    }

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        System.out.print("Enter an integer: ");
        int number = input.nextInt();

        System.out.println(number + " is " + checkOddEven(number));

        input.close();
    }
}