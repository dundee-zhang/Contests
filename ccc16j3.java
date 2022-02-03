import java.util.Scanner;
class ccc16j3 {
    public static int check(String s) {
        String r = "";
        for(int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            r = c + r;
        }

        if(s.equals(r)) {
            return 1;
        } else {
            return 0;
        }
    }
    public static void main(String[] args) {
        Scanner k = new Scanner(System.in);

        int a = 0;

        String word = k.nextLine();
        String cS = "";

        for(int i = 0; i < word.length(); i++) {

            for(int l = i + 1; l <= word.length(); l++) {
                cS = word.substring(i, l);
                
                int p = check(cS);

                if(p == 1 && cS.length() > a) {
                    a = cS.length();
                }
            }
        }

        System.out.println(a);
    }    
}