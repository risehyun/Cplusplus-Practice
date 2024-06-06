#include <iostream>

int main()
{
	char adminID[10] = "qlqlaqkq";
	char adminPW[10] = "tkaruqtkf";

	char userID[10] = "";
	char userPW[10] = "";

	std::cin >> userID >> userPW;

	if (0 == strcmp(adminID, userID) && 0 == strcmp(adminPW, userPW))
	{
		std::cout << "LOGIN";
	}
	else
	{
		std::cout << "INVALID"; 
	}

	return 0;
}