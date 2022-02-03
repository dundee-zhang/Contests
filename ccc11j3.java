import java.util.Scanner;
class ccc11j3 {
    public static void main(String[] args) {
        Scanner k = new Scanner(System.in);

        int p = k.nextInt();
        int c = k.nextInt();

        int count = 2;

        while(true) {
            int d = Math.abs(p - c);

            p = c;

            c = d;



            count++;

            if(p < c) {
                break;
            }
        }

        System.out.println(count);
    }
}