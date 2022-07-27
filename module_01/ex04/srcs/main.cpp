#include "sed_is_for_losers.hpp"

int	is_equal(std::string s1, std::string s2)
{
	int nbchartocompare = 0;
	int i = 0;

	if(s1.length() > s2.length())
		nbchartocompare = s2.length();
	else
		nbchartocompare = s1.length();
	while(i < nbchartocompare)
	{
		if (s1.c_str()[i] == s2.c_str()[i])
			i++;
		else
			break;
	}
	if (i == nbchartocompare)
		return (1);
	else
		return (0);
}

std::string replace(std::string line, std::string s1, std::string s2)
{
	std::string replaced;
	int i = 0;

	while (line.c_str()[i])
	{
		if (line.c_str()[i] == s1.c_str()[0] && is_equal(&line.c_str()[i], s1))
		{	
			replaced += s2;
			i += s1.length();
		}
		else
		{
			replaced.push_back(line.c_str()[i]);
			i++;
		}
	}
	return (replaced);
}

int main(int ac, char **av)
{
	std::string line;

	if(ac != 4)
		return (std::cout << "Error: 3 arguments required" << std::endl, -1);
	std::string file(av[1]);
	std::ifstream infile(file.c_str());
	if(!infile)
	{
		std::cout << "Error : cannot open the file" << std::endl;
		return (-1);
	}
	else
	{
		std::string s1(av[2]);
		std::string s2(av[3]);
		file += ".replace";
		std::ofstream outfile(file.c_str());
		while (infile.good())
		{
			getline(infile, line);
			outfile << replace(line, s1, s2);
			if (infile.peek() != EOF)
				outfile << std::endl;
			//Need to check if the file contain a nl on the last line
		}
	}
	infile.close();
	return (0);
}