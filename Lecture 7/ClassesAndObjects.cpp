#include<bits/stdc++.h>
using namespace std;

class Student
{
	string passcode;
	public:
	int id;
	string name;
	
	void into()
	{
		cout<<"My name is "<<name<<", my id is "<<id<<", Passcode is "<<passcode<<endl;
	}	
	
	void setPass(string s)
	{
		passcode = s;
	}
};

int main()
{
	Student s1;
	s1.id=1;
	s1.name = "Manisha";
	s1.setPass("001");
	s1.into();
	return 0;
}
