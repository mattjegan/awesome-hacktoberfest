class student
{
	int roll;
	String n;
	student(int r, String name)
	{
		roll=r;
		n=name;
	}
}
class marks extends student
{
	int marks1, marks2;
	marks(int r, String name, int m1, int m2)
	{
		super(r, name);
		marks1=m1;
		marks2=m2;
	}
}
class total extends marks
{
	int t;
	total(int r, String name, int m1, int m2)
	{
		super(r,name,m1,m2);
		t=m1+m2;
	}
	void display()
	{
		System.out.println("Name:"+n+"\nRoll No:"+roll+"\nMarks:"+marks1+","+marks2+"\nTotal marks:"+t);
	}
}
class inherit
{
	public static void main(String[] args) 
	{
			total t1 = new total(63,"Siddhant",80,80);
			t1.display();
	}
}