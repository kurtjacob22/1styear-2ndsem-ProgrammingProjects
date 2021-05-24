import java.util.Scanner;

public class WithExceptionSample {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int dividend, divisor, quotient;

        System.out.print("Enter Dividend: ");
        dividend = scanner.nextInt();

        System.out.print("Enter divisor: ");

        try{
            divisor = scanner.nextInt();
            quotient = dividend / divisor;
            System.out.print(dividend + " divided by " + divisor + " is equals to: " + quotient);

        }catch(ArithmeticException e){
            System.out.print("Divisor as 0 is invalid");
        }
       
    }
}
