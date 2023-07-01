#include <bits/stdc++.h>
using namespace std;

class Student
{
	string passcode;
	
	protected:
		int age;
	
	public:
		string name;
		int id;
		
	Student(string pass, int a, string n, int i)
	{
		passcode = pass;
		age = a;
		name = n;
		id = i;
	}
	
	void getter()
	{
		cout<<passcode<<endl<<age<<endl<<name<<endl<<id<<endl;
	}
};

int main()
{
	Student s1("001", 20, "Manisha", 1);
	s1.getter();
	return 0;
}
