import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner k = new Scanner(System.in);

        int[] n = new int[4];

        for(int i = 0; i < 4; i++) {
            n[i] = k.nextInt();
        }

        if(n[0] == 8 && n[3] == 8 && n[1] == n[2]) {
            System.out.println("ignore");
        } else if(n[0] == 9 && n[3] == 9 && n[1] == n[2]) {
            System.out.println("ignore");
        } else if(n[0] == 9 && n[3] == 8 && n[1] == n[2]) {
            System.out.println("ignore");
        } else if(n[0] == 8 && n[3] == 9 && n[1] == n[2]) {
            System.out.println("ignore");
        }else {
            System.out.println("answer");
        }
    }
}