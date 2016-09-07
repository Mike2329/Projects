/*********************************************************************

** Author: Mike Peters

** Date: 11/18/2015

** Description: Character declarations

*********************************************************************/
#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>
using namespace std;

//Base class
class creature{
	protected:
		int armor;
		int defense;
		int strength;
		int strength2;
		int achilles;
	
	
	public:
		creature();
		virtual double display();
		virtual void setArmor(int a);
		virtual void setStrength(int s);
		virtual int getArmor();
		virtual int getStrength();
		virtual int Attack() = 0;
		virtual int Defense() = 0;
};

//goblin class
class goblin : public creature
{
	public:
		double achilles;
		goblin();
		int Attack();
		int Defense();
};

//barbarian class
class barbarian : public creature
{
	public:
		barbarian();
		int Attack();
		int Defense();
};

//reptile people class
class reptile : public creature
{
	public:
		reptile();
		int Attack();
		int Defense();
};

//blue men class
class blue : public creature
{
	public:
		blue();
		int Attack();
		int Defense();
};

//the shadow class
class shadow : public creature
{
	public:
		shadow();
		int Attack();
		int Defense();
};
#endif
