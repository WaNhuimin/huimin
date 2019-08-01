//递归实现10！
public class Test5{
	public static void main(String[]args){
	System.out.println(mul(10));}
	public static int mul(int num){
		if(num==1)
			return 1;
		else
           return num*mul(num-1);}}