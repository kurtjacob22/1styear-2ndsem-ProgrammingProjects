import java.time.format.DateTimeFormatter;  
import java.time.LocalDateTime;  
import java.util.Arrays;  
import java.util.Scanner;

public class DateCalendar {

    private int  daysMonth, month, year;
    private String monthName;
    public int daysYear; // will be mapping the daysYear into days with month --> 3 :: January 3
    public int enteredDay, enteredMonth, enteredYear;
    public String convertedSelectedDate;

    DateCalendar(){
        // data for current date
        this.year = getYear();
        this.month = getMonth();
        this.daysYear = numberOfDaysInAYear();
        this.daysMonth = numberOfDaysInAMonth();
        this.monthName = getMonthName(this.month);
        // user input --> converts and maps to the year 
        this.enteredDay = 0;
        this.enteredMonth = 0;
        this.enteredYear = 0;
        this.convertedSelectedDate = "";
    }

    public void convertedSelectedDate(){
        this.convertedSelectedDate = getMonthName(this.enteredMonth) + " " + this.enteredDay + ", " + this.enteredYear;
    }

    public void enteredDay(Scanner scanner){
        System.out.print("Enter Day: ");
        this.enteredDay = scanner.nextInt();
    }

    public void enteredMonth(Scanner scanner){
        System.out.print("Enter Month: ");
        this.enteredMonth = scanner.nextInt();
    }

    public void enteredYear(Scanner scanner){
        System.out.print("Enter Year: ");
        this.enteredYear = scanner.nextInt();    
    }

    public int getYear(){
        // gets the year based on the system's time and date
        DateTimeFormatter dtf = DateTimeFormatter.ofPattern("yyyy");  
        LocalDateTime now = LocalDateTime.now();
        return Integer.parseInt(dtf.format(now));  
    }

    public int getMonth(){
        DateTimeFormatter dtf = DateTimeFormatter.ofPattern("MM");  
        LocalDateTime now = LocalDateTime.now();
        return Integer.parseInt(dtf.format(now));  
    }

    public String getMonthName(int monthNum){
        String[] months = {
            "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"
        };

        return months[monthNum - 1];
    }

    public int numberOfDaysInAYear(){
        // returns the number of days in a year depending on the year --> leap year or not
        // algo from :: https://docs.microsoft.com/en-us/office/troubleshoot/excel/determine-a-leap-year
        if(this.year % 4 == 0){
            if(this.year % 100 == 0){
                if(this.year % 400 == 0){
                    return 366;
                }else{
                    return 365;
                }
            }else{
                return 366;
            }
        }else{
            return 365;
        }
        
    }

    public int numberOfDaysInAMonth(){
        int[] monthsWith31 = {1,3,5,7,8,10,12};
        int[] monthsWith30 = {4,6,9,11};
        int monthWith29 = 2;
        int totalDays = 0;

        if(check(monthsWith31, this.month)){
            totalDays = 31;
        }else if(this.month == monthWith29){
            totalDays = 29;
        }else{
            totalDays = 30;
        }
       
        return totalDays;
    }

    private static boolean check(int[] arr, int toCheckValue){
        // src: https://www.geeksforgeeks.org/check-if-a-value-is-present-in-an-array-in-java/
        // sort given array
        Arrays.sort(arr);
 
        // check if the specified element
        // is present in the array or not
        // using Binary Search method
        int res = Arrays.binarySearch(arr, toCheckValue);
 
        boolean test = res > 0 ? true : false;
        return test;
    }

}


