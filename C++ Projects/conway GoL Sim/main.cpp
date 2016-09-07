/*********************************************************************

** Author: Mike Peters

** Date: 10/04/2015

** Description: Conway Game of Life simulation with 3 patterns
(blinker, glider, and gilder gun)

*********************************************************************/

#include <iostream>
#include <cstdlib>
#include <unistd.h>

using namespace std;



//Copy function, copies one function to another
void copy(int array1[28][48], int array2[28][48])
{
  for(int j = 0; j < 28; j++)
  {
		for(int i = 0; i < 48; i++) 			
			array2[j][i] = array1[j][i]; 
	}
}

//Life function, contains algorythim for determining if cell dies, stays the same, or is born.
//Initial array is copied so changes can be made with altering it. 
void life(int array[28][48])
{

  int temp[28][48];
  copy(array, temp);
	for(int j = 1; j < 28; j++)
 	{
 		for(int i = 1; i < 48; i++) 			
		{	
				int count = 0;
				count = array[j-1][i] + 
					array[j-1][i-1] +
					array[j][i-1] +
					array[j+1][i-1] +
					array[j+1][i] +
					array[j+1][i+1] +
					array[j][i+1] +
					array[j-1][i+1];
				//If fewer than 2 or more than 3 live cells surround 
				//it, then it dies 
        			if(count < 2 || count > 3)
					temp[j][i] = 0;
				//If exactly 2 live neighbors, then cell stays the same
        			if(count == 2)
					temp[j][i] = array[j][i];
				//If exactly 3 live neighbors, then cell stays alive or
				//dead cell becomes born/alive
        			if(count == 3)
					temp[j][i] = 1;
		}
	}	
	copy(temp, array);
}

//The print function dispays only the 40 x 20 grid we want. Having larger arrays than
//display size helps deal with edges
void print(int array[28][48])
{
	for(int j = 1; j < 21; j++)
 	{
 		for(int i = 1; i < 41; i++) 			
		{	
			if(array[j][i] == 1)
				cout << '*';
			else
				cout << ' ';
		}
		cout << endl;
 	}
}

int x, y, answer, generations;
int array[28][48];
int main()
{
	//User selects pattern and number of generations to print
	cout << "enter 1 for blinker oscillator" << endl;
	cout << "enter 2 for glider" << endl;
	cout << "enter 3 for glider gun" << endl;
	cin >> answer;
	cout << "how many generations should be shown (1-200)?" << endl;
	cin >> generations;

	//User selects starting point (x,y coordinates) for blinker
	if(answer == 1)
	{
		cout << "choose x value for start of blinker (5-35)" << endl;
		cin >> x;
		cout << "choose y value for start of blinker (5-15)" << endl;
		cin >> y;
		
		//Build the blinker pattern
		for(int i = 0; i < 3; i++)
		{
			array[y][x] = 1;
			x++;
		}
	
		//Print the blinker and run for given # of generations
		for(int i = 0; i < generations; i++)
		{
			system("clear");
			life(array);
			print(array);
			usleep(250000);
		}
	}

	//User selects starting point (x,y coordinates) of glider
	else if(answer == 2)
	{
		cout << "choose x value for start of glider (1-30)" << endl;
		cin >> x;
		cout << "choose y value for start of glider (1-10)" << endl;
		cin >> y;

		//Build glider pattern
		array[y][x] = 1;
		array[y+1][x+1] = 1;
		array[y][x+2] = 1;
		array[y+1][x+2] = 1;
		array[y+2][x+1] = 1;
	
		//Print the glider and run for given # of generations
		for(int i = 0; i < generations; i++)
		{
			system("clear");
			life(array);
			print(array);
			usleep(250000);
		}
	}
		//User selects starting point (x,y coordinates) of glider gun
		//limit choices so full pattern can be seen
		else if(answer == 3)
		{
			cout << "choose x value for start of glider gun (1-3)" << endl;
			cin >> x;
			cout << "choose y value for start of glider gun (10-16)" << endl;
			cin >> y;

			//Build glider gun pattern 
			array[y][x] = 1;
			array[y][x+1] = 1;
			array[y-1][x] = 1;
			array[y-1][x+1] = 1;

			array[y][x+10] = 1;
			array[y-1][x+10] = 1;
			array[y-2][x+10] = 1;
			array[y-3][x+11] = 1;
			array[y-4][x+12] = 1;
			array[y-4][x+13] = 1;
			array[y-3][x+15] = 1;
			array[y-2][x+16] = 1;
			array[y-1][x+16] = 1;
			array[y-1][x+17] = 1;
			array[y-1][x+14] = 1;
			array[y][x+16] = 1;
			array[y+1][x+15] = 1;
			array[y+2][x+13] = 1;
			array[y+2][x+12] = 1;
			array[y+1][x+11] = 1;
	
			array[y-2][x+20] = 1;
			array[y-2][x+21] = 1;
			array[y-3][x+20] = 1;
			array[y-3][x+21] = 1;
			array[y-4][x+20] = 1;
			array[y-4][x+21] = 1;
			array[y-5][x+22] = 1;
			array[y-1][x+22] = 1;
			array[y-1][x+24] = 1;
			array[y][x+24] = 1;
			array[y-5][x+24] = 1;
			array[y-6][x+24] = 1;

			array[y-3][x+34] = 1;
			array[y-3][x+35] = 1;
			array[y-2][x+34] = 1;
			array[y-2][x+35] = 1;


		//Print the glider gun and run for given # of generations
		for(int i = 0; i < generations; i++)
		{
			system("clear");
			life(array);
			print(array);
			usleep(250000);
		}
	}

    return 0;
}
