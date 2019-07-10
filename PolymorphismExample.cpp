//I wanted to provide another example of Polymorphism with the inlcusion of Virtual Functions
// I showed that in the Base class of Enemy that you can over-write the attack function  in the 
//Derived classes EVEN though that the Base class has the same function with the 'virtual' Prefix

#include "pch.h"
#include <iostream>
using namespace std;

//Base Class
class Enemy {
public:
	virtual void attack() {

	}
};

//Derived Class
class Mage : public Enemy{
public:
	void attack() {
		cout << "The Mage attack\n";
	}
};

//Derived Class
class Warlock : public Enemy {
public:
	void attack() {
		cout << "The Warlock attack\n";
	}
};


int main()
{
	//Creating objects of the classes
	Mage m;
	Warlock w;

	Enemy *enemyOne = &m;
	Enemy *enemyTwo = &w;

	//Now we are able to use the m, w to call the attack functions
	m.attack();
	w.attack();

}

