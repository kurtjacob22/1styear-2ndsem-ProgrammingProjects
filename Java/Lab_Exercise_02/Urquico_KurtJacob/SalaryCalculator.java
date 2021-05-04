import java.util.Scanner;
/**
 * SalaryCalculator
 */
public class SalaryCalculator {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in); // Scanner Object
        // Declaration of Variables
        String employeeName;
        double payRate, salary;
        int hours;

        // collecting the employee's information --> name, pay rate and work hours
        System.out.print("\nEnter employee name: ");
        employeeName = scanner.nextLine();

        System.out.print("Enter pay rate: P");
        payRate = scanner.nextDouble();

        System.out.print("Enter hours for work: ");
        hours = scanner.nextInt();

        salary = payRate * hours; // computation of salary
        String placeHolder = String.format("%.3f", salary); // converts salary into 3 decimal places

        // displays the employee's information and its salary
        System.out.println("\n\n\tHi! " + employeeName);
        System.out.println("\tPay Rate: P" + payRate);
        System.out.println("\tTotal Hours: " + hours);
        System.out.println("\tTotal Salary: P" + placeHolder);

        scanner.close();
    }
}