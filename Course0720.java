class Student {
	// 没有明确的定义过构造方法
	// 编译器自动给你补一个构造方法
	/*
	public Student() {
	}
	*/
	
	// 一旦你定义过构造方法了，无论是什么样的构造方法，默认这个无参
	// 构造方法就不再给你添加了
}

class Person {
	public String name = null;
	public int gender = 0;	// 0 女 1 男 2 不方便说
	public int age = 0;
	
	public String toString() {
		return String.format("Person(%s, %d, %d)", 
				name, gender, age);
	}
	
	// 构造方法是允许重载的
	public Person() {
	}
	
	public Person(String n, int g, int a) {
		name = n;
		gender = g;
		age = a;
	}
}

public class Course0720 {
	public static void main(String[] args) {
		Person p = new Person("小比特", 2, 4);
		Person p = new Person("java11版", 2, 14);
		System.out.println(p.toString());
	}
}