
/*
Name:
					Muzammil Hussain
Department:
   					BS-Data Science
Session:
					2022 - 2026
Subject:
					Programming Foundament

Semester:
					1st
*/


#include<iostream>
using namespace std;
int main()
{
	int a[10],i;
	for(i=0;i<10;i++)
	{
		cout<<"enter the numbers:";
		cin>>a[i];
		
	}
	cout<<"\nyour number\n";
		for(i=0;i<10;i++)
	{
		cout<<a[i]<<endl;
	}
	cout<<"\nreverse \n";
		for(i=9;i>=0;i--)
	{
		cout<<a[i]<<endl;
	}
}