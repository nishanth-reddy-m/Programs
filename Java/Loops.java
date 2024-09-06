public class Loops {
    public static void main(String[] args) {
        int num = 10,i;

        for (i = num; i>0; i--)
        {
            System.out.print(i+" ");
        }
        System.out.println();
        
        i = num;
        while (i>0) {
            System.out.print(i+" ");
            i--;
        }
        System.out.println();

        i = num;
        do
        {
            System.out.print(i+" ");
            i--;
        }while(i>0);
    }
}
