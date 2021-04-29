public class Exercise3 {
    public static void main(String[] args) {
        
        boolean expr1 = 23 >= 12, expr2 = 53 <= 45;
        int grade = 80, score = 49;
        double celsius = 32.22;

        boolean answers[] = {
            expr1 && expr2 || expr1 && expr2,
            (!expr2 != expr2) && expr2 || false,
            9 != -9 && (7 < 9 -2) || (!expr1 || expr2),
            !expr1 && !expr2 || false,
            (expr1 || 34 <= 12 * 3) && (26 > 2 * 12.5),
            !(expr1 || !true) || (expr2 && !false),
            (celsius >= 26) && (celsius <= 37) && true,
            (score > 50) && (score < 100) || !(true),
            (grade >= 75) && (expr1 || grade < 75),
            false || expr2 && (12 > 13)
        };

        boolean answers2[] = {
            expr1 && expr2 || expr1 && expr2,
            (!expr2 != expr2) && expr2 || 15 != 3 * 5,
            9 != -9 && 7 < 9 - 2 && (!expr1 || expr2),
            !expr1 && !expr2 || !true && 23 > 3 * 2,
            (expr1 || 34 <= 12 * 3) && (26 > 2 * 12.5),
            !(expr1 && !true) || (expr2 && !false),
            (celsius >= 26) && (celsius <= 37) && true,
            (score > 50) && (score < 100) || !(true),
            (grade >= 75) && (expr1 || grade < 75),
            14 * 2 > 28 && expr1 || expr2 && (12 > 13)
        };

        for (var i : answers) {
            System.out.println(i);
        }
        System.out.println("\n");
        for (var i : answers2) {
            System.out.println(i);
        }

        System.out.println("\n");
        System.out.println(expr1 && expr2 || expr1 ^ expr2);
        System.out.println((!expr2 != expr2) && expr2 || 15 != 3 * 5);
        System.out.println(9 != -9 ^ 7 < 9 - 2 && (!expr1 || expr2));
        System.out.println(!expr1 ^ !expr2 || !true && 23 > 3 * 2);
        System.out.println((expr1 || 34 <= 12 * 3) && (26 > 2 * 12.5));
        System.out.println(!(expr1 ^ !true) || (expr2 && !false));
        System.out.println((celsius >= 26) && (celsius <= 37) ^ true);
        System.out.println((score > 50) && (score < 100) || !(true));
        System.out.println((grade >= 75) && (expr1 || grade < 75));
        System.out.println(14 * 2 > 28 && expr1 || expr2 ^ (12 > 13));
    }
}
