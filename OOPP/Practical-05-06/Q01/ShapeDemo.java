import java.util.Scanner;

public class ShapeDemo {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        Sphere sphere = new Sphere();
        Cone cone = new Cone();
        MyShape myShape = new MyShape();

        int choice;

        do {
            System.out.println("\nPlease enter the number of the shape");
            System.out.println("1. Sphere");
            System.out.println("2. Cone");
            System.out.println("3. MyShape");
            System.out.println("0. Exit");

            System.out.print("\nEnter your answer : ");
            choice = input.nextInt();

            switch (choice) {

                case 1:

                    System.out.println("\nYou have selected the Sphere");

                    System.out.print("Please enter value for the radius : ");
                    double sphereRadius = input.nextDouble();

                    double sphereVolume =
                            sphere.getSphereVolume(sphereRadius);

                    System.out.printf(
                            "Volume of the Sphere is : %.2f%n",
                            sphereVolume
                    );

                    break;

                case 2:

                    System.out.println("\nYou have selected the Cone");

                    System.out.print("Please enter value for the radius : ");
                    double coneRadius = input.nextDouble();

                    System.out.print("Please enter value for the height : ");
                    double coneHeight = input.nextDouble();

                    double coneVolume =
                            cone.getConeVolume(coneRadius, coneHeight);

                    System.out.printf(
                            "Volume of the Cone is : %.2f%n",
                            coneVolume
                    );

                    break;

                case 3:

                    System.out.println("\nYou have selected the MyShape");

                    System.out.print("Please enter value for the radius : ");
                    double myShapeRadius = input.nextDouble();

                    System.out.print("Please enter value for the height : ");
                    double myShapeHeight = input.nextDouble();

                    double myShapeVolume =
                            myShape.getMyShapeVolume(
                                    myShapeRadius,
                                    myShapeHeight
                            );

                    System.out.printf(
                            "Volume of the MyShape is : %.2f%n",
                            myShapeVolume
                    );

                    break;

                case 0:

                    System.out.println("\nExiting...");
                    break;

                default:

                    System.out.println("\nInvalid choice.");
            }

        } while (choice != 0);

        input.close();
    }
}