import java.util.*;
public class stationary {
 public static void main(String[] args) {
    int pen = 10,pencil = 5;
    try (Scanner sc = new Scanner(System.in)) {
        System.out.print("Enter the amount: ");
        int amount = sc.nextInt();
        if (amount >= pencil)
        {
            if (amount < pen)
            {
                System.out.println("You can buy a pencil");
            }
            else
            {
                System.out.println("You can buy both pen and pencil");
            }
        }
        else
        {
            System.out.println("Amount insufficient");
        }
    }   
 }
}