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
		
		Student(string passcode, string name, int id)
		{
			this->name = name;
			this->id = id;
			this->passcode = passcode;
		}
		
		void into()
		{
			cout<<"My name is "<<name<<", id is "<<id<<", passcode is "<<passcode<<endl;
		}
		
};

int main()
{
	Student s1, s2("001", "Manisha", 1);
	//s2.into();
	
	Student *ptr = &s2;
	
	// Method I
	cout<<(*ptr).name<<endl;
	
	// Method II
	cout<<ptr->name<<endl;
	
	return 0;
}
