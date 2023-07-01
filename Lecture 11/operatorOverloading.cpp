#include<bits/stdc++.h>
using namespace std;

class ComplexNumber
{
	public:
	int real;
	int img;
	
	ComplexNumber(int real, int img)
	{
		this->real = real;
		this-> img = img;
	}	
	
	void display()
	{
		cout<<real<<" +i "<<img<<endl;
	}
	
	ComplexNumber plus(ComplexNumber c)
	{
		int r = this->real + c.real;
		int i = this->img + c.img;
		
		// return ComplexNumber(r,i);
		ComplexNumber result(r,i);
		return result;
	}
	
	ComplexNumber multiply(ComplexNumber c)
	{
		// (a+ib)*(c+id) = a*c + id*a + ib*c - b*d
		
		int x = this->real * c.real;
		int y = this->real * c.img;
		int z = this->img * c.real;
		int a = this->img * c.img;
		
		return ComplexNumber(x-a, y+z);
	}
	
	ComplexNumber operator +(ComplexNumber c)
	{
		int r = this->real += c.real;
		int i = this->img += c.img;
		
		return ComplexNumber(r,i);
		
	}
};

int main()
{
	ComplexNumber c1(5,5);
	ComplexNumber c2(1,1);
	ComplexNumber c4(2,2);
	ComplexNumber c3 = c1.plus(c2.plus(c4));
	
	/*c1 + c2; --> It will not work as these are user defined data-type. We have to use the
	concept of operator overloading.*/
	
	ComplexNumber c5 = c1 + c2;
	c5.display();
	
	
	return 0;
}
