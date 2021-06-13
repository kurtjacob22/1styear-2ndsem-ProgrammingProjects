
import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        DateCalendar calendar = new DateCalendar();
        calendar.enteredMonth(scanner);
        calendar.enteredDay(scanner);
        calendar.enteredYear(scanner);
        System.out.println(calendar.convertedSelectedDate);
    }
}