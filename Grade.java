import java.util.Scanner;
public class Grade {
    public static void main(String[]args){
    Scanner input=new Scanner(System.in);
    System.out.print("Enter a letter grade:");
    String grade=input.nextLine();
    char ch=grade.charAt(0);
    if(ch!='A'&&ch!='B'&&ch!='C'&&ch!='D'&&ch!='F'){
        System.out.print(ch+" is an invalid grade");
    }
    else{
    switch(ch){
        case 'A':
            System.out.print("The numeric value for grade "+ch+" is 4");
            break;
        case 'B':
            System.out.print("The numeric value for grade "+ch+" is 3");
            break;
        case 'C':
            System.out.print("The numeric value for grade "+ch+" is 2");
            break;
        case 'D':
            System.out.print("The numeric value for grade "+ch+" is 1");
            break;
        case 'F':
            System.out.print("The numeric value for grade "+ch+" 0");
            break;
    }
    }  
    } 
}
