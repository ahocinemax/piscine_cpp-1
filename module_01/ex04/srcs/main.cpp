#include "sed_is_for_losers.hpp"

int main(int ac, char **av)
{
	std::ifstream in_file;
	std::ifstream out_file;
	std::string cpyname;
	std::string line;
	// std::string s1;
	// std::string s2;
	
	if(ac == 2)
	{
		cpyname = av[1] + ".replace";
		in_file.open(av[1]);
		if(!in_file)
		{
			std::cout << "No such file found" << std::endl;
			return (-1);
		}
		out_file.open(cpyname);
		//s1 = av[2];
		//s2 = av[3];
		if(in_file && out_file)
		{
			while (std::getline(in_file, line))
			{
				std::cout << line << std::endl;
			}
			std::cout << "Reading finished" << std::endl;
		}
		else
			std::cout << "Cannot read from files" << std::endl;
		in_file.close();
		out_file.close();
	}
	return (0);
}