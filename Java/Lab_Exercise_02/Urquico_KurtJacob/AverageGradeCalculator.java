import java.util.Scanner;
/**
 * AverageGradeCalculator
 * ? a program that calculates the average grade of a student.
 */
public class AverageGradeCalculator {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in); // Scanner Object
        float grd1, grd2, grd3, grd4, grd5, average = 0.00f; // Declaration of variables

        // collecting user's Input --> grades
        System.out.print("Enter first grade: ");
        grd1 = scanner.nextFloat();

        System.out.print("Enter second grade: ");
        grd2 = scanner.nextFloat();

        System.out.print("Enter third grade: ");
        grd3 = scanner.nextFloat();

        System.out.print("Enter fourth grade: ");
        grd4 = scanner.nextFloat();

        System.out.print("Enter fifth grade: ");
        grd5 = scanner.nextFloat();

        average = (grd1 + grd2 + grd3 + grd4 + grd5) / 5; // Computation of average
        String placeHolder = String.format("%.2f", average); // converts average into 2 decimal places

        System.out.println("\n\tYour average is " + placeHolder); // prints the average
        
    }
}