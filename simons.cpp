#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main(int argc, char const *argv[]) {
	int count = 0;
	char  input[100];
	char compare[] = "Simon says";

	std::cin>> count;

	while (count--)
	{

		getline(input, sizeof(input));
		for (int i = 0; i < 10; i++)
		{
			for(int j = 0; j < strlen(compare); j++)
			if(input[i] == compare[j])
			{
				for(i = 11; i < strlen(input); i++)
					std::cout <<input[i] ;
			}
		}
		//std::cout << '\n';
		//count--;
	}
	return 0;
};
