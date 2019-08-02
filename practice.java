//冒泡排序
import java.util.Arrays;


public class Test{	
	public static int[] bubbleSort(int[]a){
		int temp=0;
		boolean sorted=true;
		for(int i=0;i<a.length-1;i++){
			for(int j=1;j<a.length-i;j++)
			{if(a[j-1]>a[j])
				{
					temp=a[j-1];
					a[j-1]=a[j];
					a[j]=temp;
					sorted=false
			}}
			if(sorted==true)
		   return;
		}
		return a;
	}
	public static void main(String[]args){
		int []a={4,2,5,7,8};
		bubbleSort(a);
		System.out.println(Arrays.toString(bubbleSort(
			new int[] { 8,7,6,3,5,1,4,2}
		)));
		
}}
/*
//去掉一个最大值和最小值的平均值
public class Test{
	public static void main(String[]args){
		int a[]={1,2,3,4,5};
		int sum=0;
		int max=Integer.MIN_VALUE;
		int min=Integer.MAX_VALUE;
		for(int i=0;i<a.length;i++)
		{sum=sum+a[i];
	      if(a[i]>max)
	          {max=a[i];}
          if(a[i]<min)
		      { min=a[i];}}
		sum=sum-max-min;
System.out.println((double)(sum/(a.length-2)));}}
		
//旋转字符串（右旋）
	public class Test{
		public static int[] rotate(int[] nums, int k) {
		k = k % nums.length;
		int[] rightPart = Arrays.copyOfRange(nums, nums.length - k, nums.length);
		System.arraycopy(nums, 0, nums, k, nums.length - k);
		System.arraycopy(rightPart, 0, nums, 0, k);
		return nums;
	}
	    public static void main(String[]args){
			int[]a={1,2,3,4,5,6,7};
			System.out.println(Arrays.toString(rotate(new int[] { 1, 2, 3, 4, 5, 6, 7 },8)));
			}}
			
				
	
//实现把数组中的偶数放左边，奇数放右边*public class Test{
	public static int[] partition2(int[]a){
		int j=0;
		int temp=0;
	    for(int i=0;i<a.length;i++)
		 if(a[i]%2==0)
			 {temp=a[i];
		      a[i]=a[j];
			  a[j]=temp;
			 j++;}
		return a;}
	public static void main(String[]args){
		int[] a={1,2,3,4,5,6};
		partition2(a);
		System.out.println(Arrays.toString(partition2(
			new int[] { 1, 2, 3, 4, 5, 6, 7, 8, 9}
		)));
}}
*/