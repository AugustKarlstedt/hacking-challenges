#include <iostream>
#include <string>
#include <ctime>

const std::string tab = "                   azertyuiopqsdfghjklmwxcvbnAZERTYUIOPQSDFGHJKLMWXCVBN0123456789_$&#@";
const std::string CHARS = " azertyuiopqsdfghjklmwxcvbnAZERTYUIOPQSDFGHJKLMWXCVBN0123456789_$&#@";


bool test(std::string str)
{
	int n = str.length();
	long sum = 1;
	for (int i = 0; i < n; ++i)
	{
		int index = tab.find(str.substr(i, 1));
		sum = sum + (index*n*i) * (index*i*i);
	}

	if (sum == 88692589)
	{
		std::cout << "Found the answer: " << str << "\n";
		return true;
	}

	//if (sum > 88000000 && sum < 89000000)
	//{
	//	std::cout << "Close! Tried " << str << " with sum " << sum << "\n";
	//}

	return false;
}

std::string selectRandom(int num)
{
	std::string random;

	for (int i = 0; i < num; i++)
	{
		random += CHARS[rand() % CHARS.length()];
	}

	return random;
}

int main()
{
	const int LENGTH = 12;

	srand(time(0));

	bool done = false;

	std::string current = selectRandom(LENGTH);

	while (!done)
	{
		done = test(current);
		current = selectRandom(LENGTH);
	}

	std::cout << "Done? " << std::to_string(done) << "\n";


	std::cin.get();

	return 0;
}