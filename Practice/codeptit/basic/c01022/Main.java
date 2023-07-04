import java.util.Scanner;
public class Main {
    public static int sumDigits(int n) {
        int res = 0;
        while (n > 0) {
            res += n % 10;
            n /= 10;
        }
        return res;
    }
    public static void main (String [] args) {
        int test;
        Scanner sc = new Scanner(System.in);
        test = sc.nextInt();
        while (test > 0) {
            int n = sc.nextInt();
            System.out.println(sumDigits(n));
            test--;
        }
    }
}