/*Tyler Allen
CS111
3-17-2015
Program 4
This program will calculate the approximate value of e*/
#include <iostream>
using namespace std;
int main(){
  int num;
  int factorial=1;
  float total=0.0;
  cout<<"Enter n: ";
  cin>>num;

      for(int i=0;i<=num;i++)
	{
	  if(i==0)
	    factorial=1;

	  else
	      factorial=factorial*i;

         total+=1.0/factorial;
	}

   cout<<total;

  return 0;
}
