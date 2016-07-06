/*
 ==============================================================================================================================
 Name        : qs3.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 Copyright   : Copyright ©  Alex_Allain_Jumping_into_Cpp_Book. Question rights reserved.
 Question    : Create an address book program that builds on problem #1—this time, the user should be able
               to not just fill out a single structure, but should be able to add new entries, each with a separate
               name and phone number. Let the user add as many entries as he or she wants—is this easy to
               do? It is even possible? Add the ability to display all, or some of the entries, letting the user
               browse the list of entries.
 ==============================================================================================================================
 */
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

struct Info
{
	string name;
	string address;
	int phone;
};

void disp (Info players[], int size)
{
	for (int i=0; i<size ; i++)
	{cout <<i+1<<") "<< players[i].name<<endl;
	}
}

int main()
{
	clock_t begin = clock();
int size;
cout<<" No of enteries u wanna add to the address book" << endl;
cin>>size;
Info person[25];
for (int i =0; i<size; i++)
{
	cout<<"Enter name"<<endl;
	cin>>person[i].name;
	cout<<"Enter address" << endl;
	cin>> person[i].address;
	cout<<"Enter number" << endl;
	cin>> person[i].phone;
}
while(1)
{
	disp(person, size);
	int select;
	cout<<"Enter the number to get the detailed information: "<<endl;
	cin>>select;
	switch (select)
	{
		case 1: cout << person[0].name<<" lives in " << person[0].address<< " and has no: "<<person[0].phone<< endl;
		break;
		case 2: cout << person[1].name<<" lives in " << person[1].address<< " and has no: "<<person[1].phone<< endl;
		break;
		case 3: cout << person[2].name<<" lives in " << person[2].address<< " and has no: "<<person[2].phone<< endl;
		break;
	}
}
	clock_t end = clock();
	double elapsed_secs = double(end-begin)/CLOCKS_PER_SEC;
	cout<<elapsed_secs<<" sec"<<endl;
	system ("pause");
	return 0;
}
