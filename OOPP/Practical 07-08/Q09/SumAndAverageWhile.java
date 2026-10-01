package Q09;

public class SumAndAverageWhile {

    public static void main(String[] args) {

        int sum = 0;
        int i = 1;

        while (i <= 100) {
            sum = sum + i;
            i++;
        }

        double average = sum / 100.0;

        System.out.println("The sum is " + sum);
        System.out.println("The average is " + average);
    }
}