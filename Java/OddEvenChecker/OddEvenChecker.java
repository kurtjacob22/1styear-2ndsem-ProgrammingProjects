import java.util.Scanner;

public class OddEvenChecker {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int positiveInt, counterToDisplayError = 0;
        String backToMenu;

        do{ // outer loop --> responsible if the user wants to use the program again
            do{ // inner loop --> verifies if the user input is a positive integer
                if(counterToDisplayError > 0){ // displays error if and only if the counterToDisplatError is not 0
                    System.out.println("\nError: negative values are not allowed");
                    System.out.print("Please ");
                }
                System.out.print("Enter a positive integer: ");
                positiveInt = scanner.nextInt();
                counterToDisplayError++; // increments the counterToDisplayError --> which means that the user enters an invalid inpue (negative integer)
            }while(positiveInt <= 0);
    
            if(positiveInt % 2 == 0){ // check if the integer is odd or even
                System.out.println("\nThe number " + positiveInt + " is an even number");
            }else{
                System.out.println("\nThe number " + positiveInt + " is an odd number");
            }

            System.out.print("\nDo you want to check an integer again? (y / n): ");
            backToMenu = scanner.next();
            counterToDisplayError = 0; // resets the counter for displaying error on the inner do-while loop 

        }while(backToMenu.toLowerCase().charAt(0) != 'n'); 
        
    }
}
