import java.util.Scanner;

public class ccc15j2 {


    public static void main(String args[]) {
        Scanner kb = new Scanner(System.in);
        int happy = 0, sad = 0;

        String str = kb.nextLine();
        String happyStr = ":-)";
        String sadStr = ":-(";

        // happy
        int lastIndex = 0;
        while(lastIndex != -1) {

            lastIndex = str.indexOf(happyStr, lastIndex);

            if(lastIndex != -1) {
                happy++;
                lastIndex += happyStr.length();
            }
        }

        // sad
        lastIndex = 0;
        while(lastIndex != -1) {

            lastIndex = str.indexOf(sadStr, lastIndex);

            if(lastIndex != -1) {
                sad++;
                lastIndex += sadStr.length();
            }
        }

        if(happy + sad == 0) {
            System.out.println("none");
        }
        else if(happy > sad) {
            System.out.println("happy");
        }
        else if(happy < sad) {
            System.out.println("sad");
        }
        else {
            System.out.println("unsure");
        }
    }
}