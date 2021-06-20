import java.util.Scanner;
public class LoanCalculator {
 public static void main(String[] args) {

 Scanner myObj = new Scanner(System.in);
 float T_interest;
 float interest;
 interest = .6f;
 float T_Payment;

 System.out.println("Loan Calculator\n");

 // Name input
 System.out.print("Enter Your Name: ");
 String name = myObj.nextLine();

 // Loan Amount
 System.out.print("Loan Amount(1000-10000): ");
 float loan = myObj.nextFloat();

 // Term input
 System.out.print("Loan Terms (1-12mos): ");
 int term = myObj.nextInt();
 System.out.print("Interest Rate(6%)");

 // Soution
 T_interest = (loan * interest);
 T_Payment = (loan + T_interest)/term;
 System.out.println("Loan Calculator");
 System.out.println("Your Loan Amount is "+loan);
 System.out.println("Your Total Interest:"+T_interest);
 System.out.println("Your Monthly Payment:"+T_Payment);

 }
}