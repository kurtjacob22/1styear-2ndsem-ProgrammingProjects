import java.util.Scanner;

public class Calculator {
    public static void main(String[] args){
        clearScreen();
        Scanner scanner = new Scanner(System.in);
        int num1 = 0;
        int num2 = 0;
        int total = 0;
        String selector;

        try{
            System.out.print("Enter the first number: ");
            num1 = scanner.nextInt();
            System.out.print("Enter the Second number: ");
            num2 = scanner.nextInt();
            
        }catch(Exception e){
            System.out.println("Error: "+ e.getMessage());
            pressEnterKeyToContinue();
            main(null); // looping through the main method
        }

        
        System.out.println("\na. Addition - enter : (+)");
        System.out.println("b. Subtraction - enter : (-)");
        System.out.println("c. Multiplication - enter : (*)");
        System.out.println("d. Division - enter : (/)");
        System.out.print("\nEnter the operator: ");
        selector = scanner.next();
        clearScreen();
        switch(selector){
            case "+": 
                total = num1 + num2; calcTemplate(total); break;
            case "-": 
                total = num1 - num2; calcTemplate(total); break;
            case "*":
                total = num1 * num2; calcTemplate(total); break;
            case "/": 
                total = num1 / num2; calcTemplate(total); break;
            default: 
                System.out.println("Invalid Operator"); break;
        }
        scanner.close();
    }

    public static void calcTemplate(int answer){
        int buffer = 29;
        String convertAns = Integer.toString(answer);
        System.out.println("+------------Calculator----------+");
        System.out.println("+  ____________________________  +");
        System.out.print("+  = " + answer);    
        for(int i = 0; i < buffer - convertAns.length() - 1; i++){
            System.out.print(" ");
        }System.out.print("+");
        System.out.println("\n+  ____________________________  +");
        System.out.println("+  ____________________________  +");
        System.out.println("+  |___C___|___(%)___|___(=)__|  +");
        System.out.println("+  |___7___|____8____|____9___|  +");
        System.out.println("+  |___4___|____5____|____6___|  +");
        System.out.println("+  |___1___|____2____|____3___|  +");
        System.out.println("+  |_______0_________|___(*)__|  +");
        System.out.println("+  |__(+)__|___(-)___|___(/)__|  +");
        System.out.println("+________________________________+");
    }

    public static void clearScreen() {  
        System.out.print("\033[H\033[2J");  
        System.out.flush();  
    }  

    public static void pressEnterKeyToContinue(){ 
        System.out.println("Press Enter key to continue...");
        Scanner s = new Scanner(System.in);
        s.nextLine();
    }
}
