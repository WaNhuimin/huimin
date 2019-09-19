import java.util.Scanner;
public class Change {
    public static void main(String[]args){
    Scanner input =new Scanner(System.in);
    System.out.print("Enter a decimal value(0 to 15):");
    int number=input.nextInt();
    if(number>15||number<0){
      System.out.print(number+" is an invalid nput");
    }
    else if(number>=0&&number<=9){
           System.out.print("The hex value is "+number);
    }
    else
    {System.out.print("The hex value is "+(char)((number-10)+'A'));}
    } 
}
