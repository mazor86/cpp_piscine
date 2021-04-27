#include <fstream>
#include <sstream>
#include <iostream>

int	main(int ar, char **av)
{
	if (ar == 4)
	{
		std::ifstream ifs(av[1]);
		if (ifs.is_open())
		{
			std::stringstream ss;
			ss << ifs.rdbuf();
			ifs.close();
			std::string str = ss.str();
			std::string str1(av[2]);
			std::string str2(av[3]);
			std::size_t found = 0;
			while ((found = str.find(str1)) != std::string::npos)
			{
				str.replace(found, str1.length(), str2);
			}
			std::string output = std::string(av[1]) + ".replace";
			std::ofstream ofs(output);
			if (ofs.is_open())
			{
				ofs << str;
				ofs.close();
			}
			else
				std::cout << "Cannot create file " << output << std::endl;
		}
		else
			std::cerr << "Cannot open file " << av[1] << std::endl;
	}
	else
		std::cerr << "Wrong number of arguments" << std::endl;
	return 0;
}