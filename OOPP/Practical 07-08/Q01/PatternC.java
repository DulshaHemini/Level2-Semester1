package Q01;

public class PatternC {

    public static void main(String[] args) {

        for (int i = 1; i <= 4; i++) {

            for (int space = 1; space <= 4 - i; space++) {
                System.out.print("  ");
            }

            for (int j = 1; j <= i; j++) {
                System.out.print("* ");
            }

            System.out.println();
        }
    }
}