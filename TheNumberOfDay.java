/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author asus
 */
import java.util.Date;
public class TheNumberOfDay {
    public static void main(String[] args){
        Date date=new Date();
        System.out.print(date);
        long passTime=10000;//用于记录最初流逝的时间
        for(int i=0;i<7;i++){
         passTime*=10;
         date.setTime(passTime);
         System.out.println(passTime+date.toString());
        }
    }
}
