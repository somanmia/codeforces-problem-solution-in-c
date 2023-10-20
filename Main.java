import java.util.Scanner;
public class Main{
    public static void main(String[] args) {
        Scanner input=new Scanner(System.in);
        int x;long y;String str;float p;double q;
        x=input.nextInt();
        y=input.nextLong();
        str=input.next();
        char ch=str.charAt(0);
        p=input.nextFloat();
        q=input.nextDouble();
        System.out.println(x);
         System.out.println(y);
          System.out.println(ch);
           System.out.printf("%.2f\n",p);
            System.out.printf("%.1f\n",q);
    }
}
