import java.util.InputMismatchException;
import java.util.Scanner;

public class WithExceptionSample {
    public static void main(String[] args) {
  
        Scanner scanner = new Scanner(System.in);
        int dividend, divisor, quotient;

        try{
            System.out.print("Enter Dividend: ");
            dividend = scanner.nextInt();

            System.out.print("Enter divisor: ");
            divisor = scanner.nextInt();

            quotient = dividend / divisor;
            System.out.print(dividend + " divided by " + divisor + " is equals to: " + quotient);

        }catch(ArithmeticException e){
            System.out.println(e.getMessage());

        }catch(InputMismatchException e){
            System.out.println(e.getMessage());
            
        }finally{
            System.out.println("Thank you for your time");
        }
    }
}
