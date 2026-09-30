package Q01;

public class PatternD {

    public static void main(String[] args) {

        for (int i = 1; i <= 4; i++) {

            for (int j = 1; j <= i; j++) {
                System.out.print("* ");
            }

            System.out.println();
        }

        for (int i = 1; i <= 2; i++) {

            System.out.print("  ");

            for (int j = 1; j <= 2; j++) {
                System.out.print("* ");
            }

            System.out.println();
        }
    }
}