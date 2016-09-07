#include <iostream>
#include <vector> //for vector usage


using namespace std;
vector<int> findMode(int array[],int);

int main()
{
  
       
   //initial array with N elements
   int array[]={0,1,0,3,1}; 

   //call function to get unique elements vector
   vector<int> v=findMode(array,5);
  
   //print each element of vector
   for(vector<int>::iterator i=v.begin();i!=v.end();)

   cout << *i++ <<endl;
   return 0;
}
