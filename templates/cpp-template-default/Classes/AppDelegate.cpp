#include <iostream>
#include <iomanip>
#include <math.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string>
using namespace std;
int sum(int input)
{
	int sumanswer=0;
	while (input>0)
	{
		sumanswer=sumanswer + input%10;
		input=input
		/10;
	}
	return sumanswer;
}
int main()
{
	int input;
	cout<<"Enter number\n";
	cin>>input;
	cout<<sum(input);
	system ("pause");
	return 0;
}
