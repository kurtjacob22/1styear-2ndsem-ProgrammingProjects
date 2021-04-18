

import java.util.Scanner;

public class Salary {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        //initial salary, gross rate, counter and salary range
        double salaryPerWeek = 200.0;
        double grossRate = 0.09;
        int counter[] = {0,0,0,0,0,0,0,0,0};
        String salaryRange[] = {
            "$200 - $299",
            "$300 - $399",
            "$400 - $499",
            "$500 - $599",
            "$600 - $699",
            "$700 - $799",
            "$800 - $899",
            "$900 - $999",
            "$1000 and over"
        };

        System.out.print("How many employees are there?: ");
        int numberOfEmployees = scanner.nextInt();

        for(int i = 1; i <= numberOfEmployees; i++) {
            System.out.print("\nEmployee #" + i + " sales for the week (enter negative value to exit): ");
            double salesWeek = scanner.nextDouble();
            if(salesWeek < 0){
                break; // closes the program if the input is negative
            }
            double totalSalary = (salesWeek * grossRate) + salaryPerWeek;
            System.out.println("Employee #" + i + " will receive $" + totalSalary);
            if(totalSalary <= 299.0 && totalSalary >= 200.0){
                counter[0]++;
            }else if(totalSalary <= 399.0 && totalSalary >= 300.0){
                counter[1]++;
            }else if(totalSalary <= 499.0 && totalSalary >= 400.0){
                counter[2]++;
            }else if(totalSalary <= 599.0 && totalSalary >= 500.0){
                counter[3]++;
            }else if(totalSalary <= 699.0 && totalSalary >= 600.0){
                counter[4]++;
            }else if(totalSalary <= 799.0 && totalSalary >= 700.0){
                counter[5]++;
            }else if(totalSalary <= 899.0 && totalSalary >= 800.0){
                counter[6]++;
            }else if(totalSalary <= 999.0 && totalSalary >= 900.0){
                counter[7]++;
            }else{
                counter[8]++;
            }
        }

        System.out.println("\n\tSalary Range \tCount");
        for(int i = 0; i < salaryRange.length; i++){
            System.out.println("\t" + salaryRange[i] + "\t" + counter[i]);
        }

        scanner.close();
    }
}
