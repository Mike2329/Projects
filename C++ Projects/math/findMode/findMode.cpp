/*********************************************************************

** Author: Mike Peters

** Date: 08/01/2015

** Description: Calulate mode when given an array of ints

*********************************************************************/

#include <iostream>
#include <vector> //for vector usage
#include <algorithm> //for sort() function

using namespace std;

vector<int> findMode(int array[], int size) //findMode finction
{
	sort(array, array + size); //sort the array smallest to largest

/****used to test is array sorts correctly******
    cout << "Sorted array " << endl;
    for ( int i = 0; i < size; i++ ) 
    {
    	cout << array[i] << ' ';
    }
    cout << endl;
*************************************************/

	vector<int> modeVector; //creating vector
    

	int temp = 1;
	int max = 1;
	int result = array[0];



//Loops to find what the max frequency is
	for (int i = 0; i < size; i++)
	{
	
		if ( array[i] == array[i+1] ) 
		{
		temp++;
			if ( temp > max ) 
			{
			max = temp;
			}
		} 
		else
		temp = 1; // reset temp.
	}


//Loop again to push all occurences to vector that have max frequency, as long as max frequency is > 1 
	for (int p = 0; p < size; p++)
	{
		if ( array[p] == array[p+1] ) 
		{
		temp++;
		
			if ( temp == max ) 
			{
			result = array[p];
			modeVector.push_back(result); //add result to vector
			}
		}
		else
		temp = 1; //reset temp
	}


//Loop for case when all numbers in array apear only once. Pushes to vector	
	for (int p = 0; p < size; p++)
	{
		if ( temp == max ) 
		{
		result = array[p];
		modeVector.push_back(result); //add result to vector
		}
		else
		temp = 1; //reset temp
	}

/*****************used to check if max frequency and mode(s) were correct********
cout << "max frequency is " << max << endl;
cout << "mode(s):"; 
for (int count = 0; count < modeVector.size(); count++)
	cout << modeVector[count] << " ";
********************************************************************************/
return modeVector;
}
