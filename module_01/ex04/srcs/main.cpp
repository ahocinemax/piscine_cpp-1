#include "sed_is_for_losers.hpp"

int main(int ac, char **av)
{	
	std::ifstream infile;
	std::ofstream outfile;
	std::string line;


	if(ac == 2)
	{
		infile.open(av[1]);
		if(!infile)
		{
			std::cout << "Error : cannot open the file" << std::endl;
			return (-1);
		}
		else
		{
			std::cout << "Successfully openned the file" << std::endl;
			while (infile.good())
			{
				getline(infile, line);
				std::cout << line << std::endl;
			}
			std::cout << "Reading finished" << std::endl;
		}
		infile.close();
	}
	return (0);
}