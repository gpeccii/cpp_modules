#include <iostream>
#include <string>
#include <cctype>

int	main(int argc, char **argv)
{
	std::string temp;
	if(argc == 1)
		std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
	{
		for(int i = 1; i < argc; i++)
		{
			temp = argv[i];
			for(int j = 0; j < (int)temp.length(); j++)
				std::cout<<(char)std::toupper(temp[j]);
		}
		std::cout<<std::endl;
	}
}
