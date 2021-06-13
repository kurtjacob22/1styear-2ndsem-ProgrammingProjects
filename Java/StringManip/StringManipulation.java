import java.util.Scanner;

public class StringManipulation {
    public static void main(String[] args) {
        System.out.print("Exercise 1: "); countLetterO();
        System.out.print("Exercise 2: "); displayTrue();
        System.out.print("Exercise 3: "); replaceToPercent();
        System.out.print("Exercise 4: "); positionOfA();
        System.out.print("Exercise 5: "); loopingAString();
    }

    public static void countLetterO(){
        //* Exercise 1
        String sentence = "The quick brown fox jumped over the lazy dog.";
        int counter = 0;
        
        for(int i = 0; i < sentence.length(); i++) {
            if(sentence.charAt(i) == 'o'){
                counter++;
            }
        }
        System.out.println("Letter 'O' appeared " + counter + " times");
    }

    public static void displayTrue(){
        //* Exercise 2
        String str1 = "Class";
        String str2 = " class ";
        
        System.out.println(str1.toLowerCase().equals(str2.trim()));
    }

    public static void replaceToPercent(){
        //* Exercise 3
        String sentence = "The quick brown fox jumped over the lazy dog.";
        System.out.println(sentence.replace(" ", "%"));
    }

    public static void positionOfA(){
        //* Exercise 4
        String sentence = "The quick brown fox jumped over the lazy dog.";
        for(int i = 0; i < sentence.length(); i++){
            if(sentence.charAt(i) == 'a'){
                System.out.println("The index position of 'a' is " + i);
            }
        }
    }

    public static void loopingAString(){
        //* Exercise 5
        Scanner scanner = new Scanner(System.in);
        String sentence = scanner.nextLine();
        for(int i = 0; i < sentence.length(); i++){
            System.out.println(sentence.charAt(i));
        }
    }
}
