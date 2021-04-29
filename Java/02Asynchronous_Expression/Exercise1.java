/**
 * Exercise1
 */
public class Exercise1 {

    public static void main(String[] args) {
        int w = 3, x = 25, y = 10, z = 2;
        double a = 2, b = 43, c = 11, d = 12;

        double answers[] = {
            x / z + w * z,
            w / z * y - x,
            c / a + a / a,
            (w + x) * y / z,
            (b - a) / (a * d) % (b / a),
            x = x + y * (x / z) / z,
            a + b * c / a % (d + c),
            (b - 32.0) * c / a,
            b - d * b / d,
            z * y / z % (x % z)
        };

        for (var i : answers) {
            System.out.println(i);
        }
    }
}