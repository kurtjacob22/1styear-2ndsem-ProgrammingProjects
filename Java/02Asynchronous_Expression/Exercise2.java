/**
 * Exercise2
 */
public class Exercise2 {

    public static void main(String[] args) {
        int w = 3, x = 25, y = 10, z = 2;
        double a = 2, b = 43, c = 11, d = 12;

        double answers[] = {
            x / a * w % z,
            z * a + b / y,
            b % a * (b / z * w),
            a * z + x / z,
            (b / x + c ) / z,
            (x * y / w) / a,
            (b / z + z) * (x / w - z),
            (w * x / z + y) % (c * d % b + a),
            ((x + y) / a) * ((w + x) % w),
            (w * x / y * z) % c * (b % c)
        };

        for (var i : answers) {
            System.out.println(i);
        }
    }
}