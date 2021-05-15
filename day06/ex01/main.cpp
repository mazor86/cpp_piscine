
#include "main.hpp"

std::string getRandomString()
{
	std::string randomStr("");
	for (int i = 0; i < rand() % MAX_STRING_LEN; i++)
	{
		randomStr += (32 + rand() % 95);
	}
	return (randomStr);
}

void*		serialize(void)
{
	char *raw;
	std::string str1;
	int i;
	std::string str2;

	str1 = getRandomString();
	i = rand() % INT_MAX;
	str2 = getRandomString();

	std::cout << RED_BOLD << "Before serialization:" << RESET << std::endl;
	std::cout << GREEN << "string 1: " << RESET;
	std::cout << str1 << std::endl;
	std::cout << GREEN << "integer : " << RESET;
	std::cout << i << std::endl;
	std::cout << GREEN << "string 2: " << RESET;
	std::cout << str2 << std::endl << std::endl;
	raw = new char[sizeof(std::string) * 2 + sizeof(int)];
	memmove(raw, reinterpret_cast<void*>(&str1), sizeof(str1));
	memmove(raw + sizeof(str1), reinterpret_cast<void*>(&i), sizeof(int));
	memmove(raw + sizeof(str1) + sizeof(int), reinterpret_cast<void*>(&str2), sizeof(str2));

	return (reinterpret_cast<void*>(raw));
}

Data *deserialize(void *raw)
{
	Data *data = new Data;
	data->str1 = *reinterpret_cast<std::string*>(raw);
	data->i = *reinterpret_cast<int*>(reinterpret_cast<char*>(raw) + sizeof(std::string));
	data->str2 = *reinterpret_cast<std::string*>(reinterpret_cast<char*>(raw) + sizeof(std::string) + sizeof(int));
	return (data);
}

int main(void)
{
	srand(time(NULL));

	void *raw = serialize();
	Data *data = deserialize(raw);

	std::cout << RED_BOLD << "After deserialization:" << RESET << std::endl;
	std::cout << GREEN << "string 1: " << RESET;
	std::cout << data->str1 << std::endl;
	std::cout << GREEN << "integer : " << RESET;
	std::cout << data->i << std::endl;
	std::cout << GREEN << "string 2: " << RESET;
	std::cout << data->str2 << std::endl;
	return (0);
}