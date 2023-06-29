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
	
	friend class Bestfriend;
};

class Bestfriend
{
	public:
	void sharingSecret(Student s)
	{
		cout<<s.passcode<<" "<<s.age<<endl;
	}
};

int main()
{
	Student s1;
	s1.id=1;
	s1.name = "Manisha";
	s1.setPass("001",20);
	//s1.into();
	
	Bestfriend s2;
	s2.sharingSecret(s1);
	return 0;
}
