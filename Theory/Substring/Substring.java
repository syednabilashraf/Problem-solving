import java.util.Scanner;

public class Substring {
    public static void main(String[] args) {
        String firstString;
        String secondString;

        Scanner input = new Scanner(System.in);

        firstString = input.next();
        secondString = input.next();

        // Contains returns either true or false.
        // If you need the index, you should use indexOf().

        if (firstString.contains(secondString)) {
            System.out.println("Found");
        } else {
            System.out.println("Not found");
        }

        input.close(); // Once closed, you cannot take anymore inputs.
    }
}