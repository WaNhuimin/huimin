
import java.util.Scanner;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author asus
 */
public class AccountValue {
    public static void main(String[]args){
    Scanner input=new Scanner(System.in);
    System.out.print("Enter the monthly saving amount:");
    double savingAmount=input.nextDouble();
    int month=1;
    double afterFirst=savingAmount*(1+0.00417);
    for(month=2;month<=6;month++){
        savingAmount=(afterFirst+savingAmount*(1+0.00417));
    }
     System.out.println("After the sixth month,the acccount value is $ "+savingAmount);
    }  
}
