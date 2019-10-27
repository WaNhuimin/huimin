/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author asus
 */
public class TestRectangle {
    public static void main(String[] args){
        Rectangle rectangle1=new Rectangle(4,40);
        System.out.println("rectangle1:");
	System.out.println("width: " + rectangle1.width + "\theight: " + rectangle1.height + 
		"\tarea: " + rectangle1.getArea() + "\tperimeter: " + rectangle1.getPerimeter());
        Rectangle rectangle2=new Rectangle(3.5,35.9);
        System.out.println("rectangle2:");
	System.out.println("width: " + rectangle2.width + "\theight: " + rectangle2.height + 
                "\tarea: " + rectangle2.getArea() + "\tperimeter: " + rectangle2.getPerimeter());		
    }  
}
class Rectangle{
    double width=1;
    double height=1;
    Rectangle(){
    }
    Rectangle(double newWidth,double newHeight){
        width=newWidth;
        height=newHeight;
    }
    double getArea(){
      return width*height;  
    }
    double getPerimeter(){
        return 2*(width+height);
    }
    void set(double newWidth,double newHeight){
        width=newWidth;
        height=newHeight;
    }
}
