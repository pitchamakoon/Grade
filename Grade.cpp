#include<iostream>
using namespace std;
int main()
{
	float Grade;
	
	cout << "Enter Your Grade : ";
	cin >> Grade;

	if (Grade>=100)
	{
		cout << "Error \n";
	}
	else if (Grade>=90 && Grade<=100)
	{
		cout << "A \n";
	}
	else if (Grade>=80 && Grade<=89)
	{
		cout << "B \n";
	}
	else if (Grade>=70 && Grade<=79)
	{
		cout << "C \n";
	}
	else if (Grade>=60 && Grade<=69)
	{
		cout << "D \n";
	}
	else if (Grade>=0 && Grade<=59)
	{
		cout << "F \n";
	}
	else if (Grade<=0)
	{
		cout << "Error \n";
	}

	return(0);
}