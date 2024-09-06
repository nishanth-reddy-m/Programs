import java.util.*;
public class User_loop {
    public static void main(String args[])
    {
        try(Scanner sc = new Scanner(System.in))
        {
            int input = sc.nextInt();
            do
            {
                input = sc.nextInt();
            }while(input > 0);
        }
    }
}
