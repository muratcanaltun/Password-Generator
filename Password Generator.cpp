#include <ctime>
#include <iostream>

int main()
{
	char characters[] = "0123456789!@#$%^&*abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	srand(time(0));
	std::cout << "How many characters will your password have?" << std::endl;
	
	int letters;
	std::cin >> letters;

	std::cout << "How many different choices do you want?" << std::endl;

	int choices;
	std::cin >> choices;

	for (int i = 1; i <= choices; i++)
	{
		for (int j = 0; j < letters; j++)
		{
			std::cout << characters[rand() % (sizeof(characters) - 1)];
		}
		std::cout << "" << std::endl;
	}

	return 0;
}
