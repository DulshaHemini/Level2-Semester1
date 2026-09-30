package Q03;

import java.util.Scanner;

public class AreaCalculator {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        System.out.println("Select a shape");
        System.out.println("1. Square");
        System.out.println("2. Circle");
        System.out.println("3. Rectangle");
        System.out.println("4. Cylinder");

        System.out.print("Enter your choice: ");
        int choice = input.nextInt();

        switch (choice) {

            case 1:
                System.out.print("Enter length: ");
                double length = input.nextDouble();

                double squareArea = length * length;

                System.out.println("Area of Square = " + squareArea);
                break;

            case 2:
                System.out.print("Enter radius: ");
                double radius = input.nextDouble();

                double circleArea = (22.0 / 7.0) * radius * radius;

                System.out.println("Area of Circle = " + circleArea);
                break;

            case 3:
                System.out.print("Enter side 1: ");
                double side1 = input.nextDouble();

                System.out.print("Enter side 2: ");
                double side2 = input.nextDouble();

                double rectangleArea = side1 * side2;

                System.out.println("Area of Rectangle = " + rectangleArea);
                break;

            case 4:
                System.out.print("Enter radius: ");
                double cylinderRadius = input.nextDouble();

                System.out.print("Enter height: ");
                double height = input.nextDouble();

                double cylinderArea =
                        2 * (22.0 / 7.0) * cylinderRadius * height;

                System.out.println("Area of Cylinder = " + cylinderArea);
                break;

            default:
                System.out.println("Invalid choice");
        }

        input.close();
    }
}