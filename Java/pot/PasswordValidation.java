import java.util.Scanner;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

// the first character must not be equal to the last character
// special charaters are not allowed.
// password should not begin with a number
// password must be a combination of small letter, capital letters and numbers

public class PasswordValidation {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        String password;
        boolean validPass[] = {
            false, false, false, false
        };

        System.out.print("Enter your password: ");
        password = scanner.nextLine();

        //* first != last --> first validation
        if(password.charAt(0) != password.charAt(password.length() - 1)){
            validPass[0] =  true;
        }

        //* special characters are not allowed --> second validatio
        Pattern pattern = Pattern.compile("[^a-z0-9 ]", Pattern.CASE_INSENSITIVE);
        Matcher matcher = pattern.matcher(password);
        if(!matcher.find()){
            validPass[1] =  true;
        }

        //* password must not begin with a number
        if(!Character.isDigit(password.charAt(0))){
            validPass[2] =  true;
        }

        //* password must be a combination of small letter, capital letters and numbers
        boolean containsUpperCase = false;
        boolean containsLowerCase = false;
        boolean containsNumber = false;
        for(int i = 0; i < password.length() - 1; i++){
            if(Character.isUpperCase(password.charAt(i))){
                containsUpperCase = true;
            }else if(Character.isLowerCase(password.charAt(i))){
                containsLowerCase = true;
            }else if(Character.isDigit(password.charAt(i))){
                containsNumber = true;
            }

            if(containsUpperCase && containsLowerCase && containsNumber){ //! if all boolean values are true
                validPass[3] = true;
            }
        }

        //* for checking values in ~validPass
        System.out.println("\n");
        if(validPass[0] && validPass[1] && validPass[2] && validPass[3]){
            System.out.println("Your Password is accepted");
        }else{
            System.out.println("Invalid Password");
        }
    }
}
