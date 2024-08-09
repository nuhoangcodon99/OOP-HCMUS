#include "Fraction.h"

int main()
{
	int i=0;
	Fraction f1, f2;
	Fraction f3;
	Fraction f4;
	Fraction f5;
	Fraction f6, f7, f8;
	
	f1.input();
	f2.input();
	f3.input();
	f4.input();
	f5.input();
	f6.input();
	f7.input();
	f8.input();
	
	f6=f3;

	f7=f1+f5;
	f8=f2-f4;
	f2=f3*f4;
	f5=f6/f3;

	cout << endl;
	cout << f7;
	cout << endl;
	cout << f8;
	cout << endl;
	cout << f2;
	cout << endl;
	cout << f5;

	cout << endl;
	cout<<(f2==f3);
	cout << endl;
	cout<<(f3!=f1);
	cout << endl;
	cout<<(f2>=f5);
	cout << endl;
	cout<<(f2>f5);
	cout << endl;
	cout<<(f5<=f3);
	cout << endl;
	cout<<(f5<f3);


	f1=f2+3;
	f3=-7+f1;
	f5=7*f3;
	f6=f4-6;

	cout << endl;
	cout << f1;
	cout << endl;
	cout << f3;
	cout << endl;
	cout << f5;
	cout << endl;
	cout << f6;
	
	//cout<<f3;
	//cout<<f6;

	f1+=f5;
	f6-=f7;
	f8*=f1;
	f8/=f2;

	cout << endl;
	cout << f1;
	cout << endl;
	cout << f6;
	cout << endl;
	cout << f8;

	cout << endl;

	cout << endl;
	cout<<f8++;
	cout << endl;
	cout<<++f7;
	

	cout << endl;
	cout << endl;
	cout<<f8--;
	cout << endl;
	cout<<--f7;
	
	float f=(float)f3;				// 3/2 => 1.5

	return 0;
}