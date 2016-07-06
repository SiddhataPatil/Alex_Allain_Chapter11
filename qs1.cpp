/*
 ==============================================================================================================================
 Name        : qs1.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright (c) Siddhata Patil. Sourcecode rights reserved.
 Copyright   : Copyright (c) Alex_Allain_Jumping_into_Cpp_Book. Question rights reserved.
 Question    : Write a program that lets the user fill in a single structure with the name, address, and phone
               number of a single person
 ==============================================================================================================================
 */
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

struct Person
{
	string name;
	string address;
	int phone;
};

int main()
{
	clock_t begin = clock();

	Person info;
	cout<<"Enter your Name: "<<endl;
	cin>>info.name;
	cout<<" \nEnter your home address: "<<endl;
	cin>>info.address;
	cout<<"\nEnter the best number to reach you: " <<endl;
	cin>>info.phone;

	cout<<endl;
	cout<<info.name<<" lives in "<<info.address<<" with phone no: "<<info.phone<<endl;

	clock_t end = clock();
	double elapsed_secs = double(end-begin)/CLOCKS_PER_SEC;
	cout<<elapsed_secs<<" sec"<<endl;
	system ("pause");
	return 0;
}
