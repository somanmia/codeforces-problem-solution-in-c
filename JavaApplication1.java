import java.util.Scanner;
public class JavaApplication1 {
    public static void main(String[] args) {
      Scanner input=new Scanner(System.in);
      Double x,y;
      x=input.nextDouble();
      y=input.nextDouble();
   
      System.out.printf("floor %.0f / %.0f = %.0f\n",x,y,Math.floor(x/y) );
      System.out.printf("ceil %.0f / %.0f = %.0f\n",x,y,Math.ceil(x/y) );
      System.out.printf("round %.0f / %.0f = %d\n",x,y,Math.round(x/y) );
   
    }
    
}
