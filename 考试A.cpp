#define _CRT_SECURE_NO_WARNINGS 1 
//#include <iostream>
//using namespace std;
//class A
//{
//private:
//	int *a;
//public:
//	A(int aa = 0)
//	{
//		a = new int(aa);
//	}
//	~A()
//	{
//		delete [] a;
//	}
//	void display()
//	{
//		cout << *a << endl;
//	}
//};
//int main()
//{
//	A a1;
//	A a2(20);
//	a1.display();
//	a2.display();
//	system("pause");
//	return 0;
//}
//#include <iostream>
//using namespace std;
//class A
//{
//private:
//	int a;
//public:
//	A()	{ a = 0; }
//	A(int aa)	{ a = aa; }
//	void print()
//	{
//		cout << a << ",";
//	}
//	int geta()
//	{
//		return a;
//	}
//};
//class B :public A
//{
//private:
//	int b, c;
//public:
//	B(int, int, int);
//	void print()
//	{
//		A::print();
//		cout << b << "," << c << ",";
//	}
//	int getb()	{ return b; }
//	int getc()	{ return c; }
//};
//B::B(int i, int j, int k) :A(i)
//{ b = j; c = k; }
//int main() {
//	A a1;
//	A a2(20);
//	a1.print();
//	cout << a2.geta() << endl;
//	B b2(5, 3, 4);
//	b2.print();
//	cout << b2.getb() << b2.getc() << endl;
//	system("pause");
//	return 0;
//}
//#include <iostream>
//using namespace std;
//class Date
//{
//private:
//	int year, month, day;
//public:
//	Date(int, int, int);
//	void show()
//	{
//		cout << year << "-" << month << "-" << day << endl;
//	}
//	friend	int age(Date &, Date &);
//};
//Date::Date(int y = 0 , int m =0 ,int d = 0)
//{	year = y; month = m; day = d; }
//int age(Date &a, Date& b)
//{
//	return (a.year - b.year);
//}
//int main() {
//	Date d1, birth(1997, 8, 23), now(2017, 1, 8);
//	d1.show();
//	cout << "出生日期：";
//	birth.show();
//	cout << "现在日期：";
//	now.show();
//	cout << "年龄是：" << age(now, birth) << endl;
//	system("pause");
//	return 0;
//}
//#include <iostream>
//using namespace std; 
//class  Fraction
//{	private:
//		int tor;
//		int demon;
//	public:
//		Fraction(int tor=0,int demon=1)
//		{	if(demon!=0)
//			{	this->tor=tor; this->demon=demon;		}
//			else
//		cout<<"This is an invalid number!"<<endl;;
//		}
//		void show()
//		{	cout << tor <<"/" << demon << endl;		}
//	    Fraction operator+(Fraction &f)
//		{
//			return  Fraction(tor*f.demon + f.tor*demon, f.demon*demon);
//		}
// } ;
//int main() {
//	Fraction f1(3, 5), f2(2, 7), f3;
//	cout << "f1=";
//	f1.show();
//	cout << "f2=";
//	f2.show();
//	f3 = f1 + f2;
//	cout << "f1+f2=";
//	f3.show();
//	system("pause");
//	return 0;
//}
//#include <iostream>
//#include <string>
//using namespace std;
//class Set
//{
//private:
//	int n;
//	string str;
//public:
//	Set()
//	{
//		n = 0; str = "";
//	}
//	Set( string s)
//	{ n = s.length();
//	if (n != 0)
//	{
//		str = s;
//	}
//	}
//	void showSet()const
//	{
//		if (n>0)
//		{
//			cout << "{";
//			for (int i = 0; i < n - 1; i++)
//				cout << str[i] << ",";
//			cout << str[n - 1] << "}" << endl;
//		}
//	}
//};
//int main(int argc, char** argv) {
//	Set s1("abcdefg");
//	cout << "s1:";
//	s1.showSet();
//	system("pause");
//	return 0;
//}
//#include <iostream>
//#include <string.h>
//using namespace std;
//class String
//{
//private:
//	char * str;
//	int length;
//public:
//	//添加无参构造函数、深拷贝构造函数
//	//添加字符串输出showString()函数
//	String()
//	{
//		length = 0;
//		str = NULL;
//	}
//	String(String& p)
//	{
//		length = p.length;
//		if (length != 0)
//		{
//			str = new char[length + 1];
//			strcpy(str, p.str);
//		}
//		}
//	String(const char *p)
//	{
//		length = strlen(p);
//		str = new char[length + 1];
//		strcpy(str, p);
//	}
//	~String()
//	{
//		if (str != NULL)
//		{
//			delete[]str;
//			str = NULL; length = 0;
//		}
//	}
//	void showString()
//	{
//		cout << str << endl;
//	}
//};
//int main(int argc, char** argv)
//{
//	String s1("abcdefg"), s2("def"), s3;
//	cout << "s1=";	s1.showString();
//	cout << "s2=";	s2.showString();
//	s3 = s1;
//	cout << "s3=";	s3.showString();
//	String s4(s2);
//	cout << "s4=";	s4.showString();
//	system("pause");
//	return 0;
//}