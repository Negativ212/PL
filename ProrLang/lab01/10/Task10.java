import java.util.Scanner;

public class Task10 {
    public static void main(String[] args) {
        int x, s = 0;
        Scanner sc = new Scanner(System.in);
        x = sc.nextInt();
        for (int i = 0; i < 123; i++)
            s += x;
        System.out.print(s);
    }
}