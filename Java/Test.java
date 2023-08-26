import java.util.Scanner;

public class Test{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        System.out.print("What is your name:");
        String name = scan.nextLine();
        
        System.out.print("What is your age:");
        int age = scan.nextInt();


        //
        System.out.println("NAME: "+name);
        System.out.println("AGE: "+age);
        scan.close();
    }
}












/*
 * 
 *  String x = "water";
        String y = "fire";
        String temp;

        System.out.println("Before");
        System.out.println("x:"+x+"\ny:"+y);
        temp = x;
        x = y ;
        y = temp;
        System.out.println("\nAfter");
        System.out.println("x:"+x+"\ny:"+y);
 */
