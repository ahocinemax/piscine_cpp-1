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
	std::ifstream infile;
	std::ofstream outfile;
	std::string line;
	std::string s1;
	std::string s2;

	if(ac == 4)
	{
		infile.open(av[1]);
		if(!infile)
		{
			std::cout << "Error : cannot open the file" << std::endl;
			return (-1);
		}
		else
		{	
			s1 = av[2];
			s2 = av[3];
			outfile.open("output");
			std::cout << "Successfully openned the file" << std::endl;
			while (infile.good())
			{
				getline(infile, line);
				outfile << replace(line, s1, s2);
				if (infile.peek() != EOF)
					outfile << std::endl;
				//Need to check if the file contain a nl on the last line
			}
			std::cout << "Reading finished" << std::endl;
		}
		infile.close();
	}
	return (0);
}