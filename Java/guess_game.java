import java.util.Scanner;

public class guess_game {
    public static void main(String[] args) {
        int number = (int)(Math.random()*100);
        System.out.println("Guess the number generated between 0-100");
        try(Scanner sc = new Scanner(System.in)) {
            while(true)
            {
                System.out.print("Enter the number: ");
                int guess = sc.nextInt();
                if(guess >= 1 && guess <= 100)
                    if (guess < number)
                    {
                        System.out.println("You entered a smaller number");
                    }
                    else if (guess > number)
                    {
                        System.out.println("You entered a larger number");
                    }
                    else
                    {
                        System.out.println("You found it!");
                        break;
                    }
                else
                {
                    System.out.println("Invalid input!");
                }
            }
        }
    }
}