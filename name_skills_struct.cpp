/*
 ==============================================================================================================================
 Name        : name_skills_struct.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 Copyright   : Copyright ©  Alex_Allain_Jumping_into_Cpp_Book. Question rights reserved.
 Question    : Simple struct skeleton
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
	int skills;
};
int addskills(Info pl[], int si)
{
int sum=0;
for (int i=0;i<3;i++)
{
	sum+=pl[i].skills;
}
	return sum;
}
void disp (Info players[], int size)
{
	for (int i=0; i<3 ; i++)
	{cout << players[i].name<<" has " << players[i].skills<< " skills."<<endl;
	}
}

int main()
{
	clock_t begin = clock();

Info players[3];
for (int i =0; i<3; i++)
{
	cout<<"Please enter your name"<<endl;
	cin>>players[i].name;
	cout<<"Enter no. of skills" << endl;
	cin>> players[i].skills;
}
disp(players, 3);
int total = addskills(players,3);
cout<< total <<endl;

	clock_t end = clock();
	double elapsed_secs = double(end-begin)/CLOCKS_PER_SEC;
	cout<<elapsed_secs<<" sec"<<endl;
	system ("pause");
	return 0;
}
