#include<iostream.h>
#include"conio.h"

int main()
{
	clrscr();
	int i=1,sum=0,x=0,y=0;
	while(i<=10)
	{
		cout<<i<<endl;
		sum+=i;
		if (i%2==0)
		{
			y+=i;
		}

		else
		{
			x+=i;
		}

		i++;
	}

	cout<<"The sum of the first 10 natural numbers are "<<sum<<endl;
	cout<<"The sum of first 5 odd numbers are "<<x<<endl;
	cout<<"The sum of first 5 even numbers are "<<y<<endl;

	getch();
	return 0;
}