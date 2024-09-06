import java.util.*;
public class Week {
    public static void main(String[] args) {
        String week = new String();
        try (Scanner sc = new Scanner(System.in)) {
            System.out.print("Enter the week day: ");
            int day = sc.nextInt();
            switch (day) {
                case 1:
                    week = "Monday";
                    break;
                case 2:
                    week = "Tuesday";
                    break;
                case 3:
                    week = "Wednesday";
                    break;
                case 4:
                    week = "Thursday";
                    break;
                case 5:
                    week = "Friday";
                    break;
                case 6:
                    week = "Satday";
                    break;
                case 7:
                    week = "Sunday";
                    break;
                default:
                    week = "Invalid Input";
            }
        }
        System.out.println(week);
    }
}
