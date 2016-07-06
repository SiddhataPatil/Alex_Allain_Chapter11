/*
 ==============================================================================================================================
 Name        : enemyship_example.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 Copyright   : Copyright ©  Alex_Allain_Jumping_into_Cpp_Book. Question rights reserved.
 Question    : Upgrade ship Power
 ==============================================================================================================================
 */
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

struct Enemyspaceship
{
int x;
int y;
int power;
};

Enemyspaceship getNewEnemy()
{
Enemyspaceship enemy;
enemy.x=0;
enemy.y=0;
enemy.power=40;
return enemy;
}

Enemyspaceship upgradeWeapons(Enemyspaceship weapon)
{
	weapon.power +=30;
	return weapon;
}

int main()
{
	clock_t begin = clock();

Enemyspaceship fd1;
Enemyspaceship fd2;
fd1 = getNewEnemy();
fd2 = upgradeWeapons(fd1);
cout<< "Power = "<<fd1.power<<endl;
cout<<"Power = " << fd2.power<<endl;

	clock_t end = clock();
	double elapsed_secs = double(end-begin)/CLOCKS_PER_SEC;
	cout<<elapsed_secs<<" sec"<<endl;
	system ("pause");
	return 0;
}
