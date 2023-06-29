#include<bits/stdc++.h>
using namespace std;

class Student
{
	string passcode;
	
	protected:
	int age;
	
	public:
	int id;
	string name;
	
	void into()
	{
		cout<<"My name is "<<name<<", my id is "<<id<<", Passcode is "<<passcode<<endl;
	}	
	
	void setPass(string s, int a)
	{
		passcode = s;
		age = a;
	}
	
	friend void hacker(Student s);
};

void hacker(Student s)
{
	cout<<s.passcode<<" "<<s.age<<endl;
}

int main()
{
	Student s1;
	s1.setPass("001",20);
	hacker(s1);
	return 0;
}
