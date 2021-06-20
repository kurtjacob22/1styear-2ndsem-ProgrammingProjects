import java.util.Scanner;

/**
 * Sample
 */
public class Sample {

	public static void main(String[] args) {
		String str1 = "Class";
        String str2 = " class ";
         
        str1 = str1.toLowerCase();
        str2 = str2.trim();

        System.out.println(str1.equals(str2));	

	}
}