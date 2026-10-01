package Q04;

import java.util.Scanner;

public class SortThreeNumbers {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        System.out.print("Enter value for a: ");
        int a = input.nextInt();

        System.out.print("Enter value for b: ");
        int b = input.nextInt();

        System.out.print("Enter value for c: ");
        int c = input.nextInt();

        int temp;

        if (a > b) {
            temp = a;
            a = b;
            b = temp;
        }

        if (b > c) {
            temp = b;
            b = c;
            c = temp;
        }

        if (a > b) {
            temp = a;
            a = b;
            b = temp;
        }

        System.out.println("Ascending order:");
        System.out.println(a + " " + b + " " + c);

        input.close();
    }
}