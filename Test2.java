//利用公式1+1/1！+1/2!+1/3!+1/4!+....
//计算自然对数的底e
//n一共计算多少项
public class Test2{
	public static void main(String[]args){
		double e=1.0;
		double mul=1.0;
		for(double n=1;n<=100;n++)
		{
			mul=n*mul;
			e=e+1.0/mul;
			System.out.println(e);}}
		}
	 

