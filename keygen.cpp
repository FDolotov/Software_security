#include <iostream>
#include <string.h>

int main() 
{
	std::string name;

	std::cout << "Enter your name: \n";
	std::cin >> name;

	int passwd = 0;
	int l = name.size();

	for(int i = 0; i < l; i++)
	{
		passwd += (int)name[i];
	}

	std::cout << "Password is: " << passwd + 2020 << '\n';

	return 0;
}
