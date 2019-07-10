//This is a simple program designed to show how Polymorphism works under the hood.
//I chose to create three classes, One base class and Two derived classes that both extend from the base class
//This example provides that both the derived classes use the SetAttackPower function for each of them, but 
//Use the attack power with different variables in their own distinct ways

#include "pch.h"
#include <iostream>
using namespace std;

//Base Class
class Enemy {
protected:
	int attackPower;
public:
	void setAttackPower(int a) {
		attackPower = a;
	}
};

//Derived Class
class Mage : public Enemy{
public:
	void attack() {
		cout << "I am the Mage and I cast Greater Pyroblast! -" << attackPower << " health gone!\n";
	}
};

//Derived Class
class Warlock : public Enemy {
public:
	void attack() {
		cout << "I am the Warlock and I cast Choas Bolt! -" << attackPower << " health gone!\n";
	}
};


int main()
{
	//Creating objects of the derived classes
	Mage jaina;
	Warlock kiljaeden;

	Enemy *enemyOne = &jaina;
	Enemy *enemyTwo = &kiljaeden;
	
	enemyOne->setAttackPower(90);
	enemyTwo->setAttackPower(70);

	jaina.attack();
	kiljaeden.attack();
 
}

