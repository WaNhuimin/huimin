import java.util.Scanner;
public class Handle {
    public static void main(String[]args){
    Scanner input=new Scanner(System.in);
    System.out.print("Please enter a string:");
    String line=input.nextLine();
    int len=line.length();
    System.out.printf("len=%s,first=%s",len,line.charAt(0));
    }   
}
