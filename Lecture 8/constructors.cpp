#include <bits/stdc++.h>
using namespace std;

class Student
{
	string passcode;
	
	public:
		string name;
		int id;
		
		Student()
		{
			//Default Constructor
		}
		
		Student(string pss, string n, int i)
		{
			name = n;
			id = i;
			passcode = pss;
		}
		
		void into()
		{
			cout<<"My name is "<<name<<", id is "<<id<<", passcode is "<<passcode<<endl;
		}
		
};

int main()
{
	Student s1, s2("001", "Manisha", 1);
	s2.into();
	return 0;
}
