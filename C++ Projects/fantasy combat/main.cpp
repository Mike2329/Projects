/*********************************************************************

** Author: Mike Peters

** Date: 11/18/2015

** Description: Main function, runs "combat"

*********************************************************************/

#include <iostream>
#include "character.hpp"
using namespace std;
#include <cstdlib>
#include <ctime>

int main()
{
	//Random generator seed and time function to get seed
	int seed = time(0);
	srand(seed);

	int player1, player2;//character choice
	creature *Player1;
	creature *Player2;



	//ask user which character they want
	cout << "Characters:" << endl;
	cout << "1. Goblin" << endl << "2. Barbarian" << endl << "3. Reptile";
	cout << endl << "4. Blue Man" << endl << "5. The Shadow" << endl;
	cout << "Choose player1 character: ";
	cin >> player1;
	cout << "Choose player2 character: ";
	cin >> player2;
	cout << endl;
	
	//Create player 1 character
	if (player1 == 1)
	{
		Player1 = new goblin;
	}
	else if (player1 == 2)
	{
		Player1 = new barbarian;
	}
	else if (player1 == 3)
	{
		Player1 = new reptile;
	}
	else if (player1 == 4)
	{
		Player1 = new blue;
	}
	else if (player1 == 5)
	{
		Player1 = new shadow;
	}

	//Create player 2 character
	if (player2 == 1)
	{
		Player2 = new goblin;
	}
	else if (player2 == 2)
	{
		Player2 = new barbarian;
	}
	else if (player2 == 3)
	{
		Player2 = new reptile;
	}
	else if (player2 == 4)
	{
		Player2 = new blue;
	}
	else if (player2 == 5)
	{
		Player2 = new shadow;
	}


	//while both creatures are alive, alternate attacking and defending
	//adjust strength after each attack
	while (Player1->getStrength() > 0 && Player2->getStrength() > 0)
	{
		int damage = 0;
		damage = Player1->Attack() - Player2->Defense();
		if (damage < 1)
			cout << "no damage done by Player 1" << endl << endl;
		else
		{
			int newStrength = Player2->getStrength() - damage;
			Player2->setStrength(newStrength);
			cout << "Player 1 did " << damage << " damage" << endl;
			cout << "Player 2 strength is now " << 
				Player2->getStrength() << endl << endl;
		}
		if (Player2->getStrength() > 0)
		{

			int damage2 = 0;
			damage2 = Player2->Attack() - Player1->Defense();
			if (damage2 < 1)
				cout << "no damage done by Player 2" << 
					endl << endl;
			else
			{
				int newStrength = Player1->getStrength() 
					- damage2;
				Player1->setStrength(newStrength);
				cout << "Player 2 did " << damage2 << " damage" 					<< endl;
				cout << "Player 1 strength is now " << 
					Player1->getStrength() << endl <<endl;
			}
		}
	}

	//display winner
	if (Player1->getStrength() > Player2->getStrength())
		cout << "Player 1 wins!" << endl;
	else
		cout << "Player 2 wins!" << endl;

	
	return 0;

}
