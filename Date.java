public class Date {
	private int year;
	private int month;
	private int day;
	
	// final 不可变
	private static final int[] DAYS_OF_MONTH = {
		31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
	};
	
	public Date(int year, int month, int day) {
	}
	
	public Date after(int days) {
		return this;
	}
	
	public Date before(int days) {
		return this;
	}
	
	public Date immutableAfter(int days) {
		Date other = new Date(year, month, day);
		
		// 修改的是 other 的属性
		return other;
	}
	
	public String toString() {
		return "";
	}
	
	// TODO: 实现 a - b 相差多少天
	public static int diff(Date a, Date b) {
		return 0;
	}
	
	// 判断是否是闰年
	private static boolean isLeapYear(int year) {
		return true;
	}
	
	private static int calcDaysOfMonth(int year, int month) {
		return 0;
	}
}