package Q08;

public class SumAndAverage {

    public static void main(String[] args) {

        int sum = 0;

        for (int i = 1; i <= 100; i++) {
            sum = sum + i;
        }

        double average = sum / 100.0;

        System.out.println("The sum is " + sum);
        System.out.println("The average is " + average);
    }
}
