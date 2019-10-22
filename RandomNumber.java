/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author asus
 */
import java.util.Random;
public class RandomNumber {
    public static void main(String[] args){
    Random random1=new Random(1000);
    for(int i=0;i<50;i++){
        System.out.print(random1.nextInt(50)+" ");
    }
}
}
