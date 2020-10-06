import java.util.*;

public class p1 {
    public static void main(String[] args) {
        String nani = "omae wa mou shindeiru";
        myReverse(nani);
    }

    public static void myReverse(String theString) {
        // There is no string reverser in Java String primitives.
        // This is because string are immmutable.
        
        StringBuilder newString = new StringBuilder();
        newString = new StringBuilder(theString);

        // This permanently reverses the string.
        newString.reverse();

        System.out.println(newString);

        Scanner input = new Scanner(System.in);
        System.out.println("Enter the string.");
        String inputString = input.nextLine();
        input.close();
        algoReverse(inputString);

    }

    public static void algoReverse(String theString)
    {
        StringBuilder newString = new StringBuilder();
        for (int i = theString.length() - 1; i >= 0; i--)
        {
            newString.append(theString.charAt(i));
        }
        System.out.println(newString);
    }
}