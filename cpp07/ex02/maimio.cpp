#include <iostream>
#include <Array.hpp>

#define MAX_VAL 750
int	main(void)
{
	Array<int>	ints(5);
	Array<char>	chars(4);
	Array<int*>	int_ptrs(3);
	Array<void*> voids;

	ints[0] = 1;
	ints[1] = 2;
	ints[2] = 3;
	ints[3] = 4;
	ints[4] = 5;

	chars[0] = 'c';
	chars[1] = 'h';
	chars[2] = 'a';
	chars[3] = 'r';

	int_ptrs[0] = new int(42);
	int_ptrs[1] = new int(21);
	int_ptrs[2] = new int(48);

	std::cout << "Size ints: " << ints.Size() << std::endl;
	std::cout << "INTS[3]: " << ints[2] << std::endl;

	for (int i = 0; i < 4; i++)
		std::cout << chars[i];
	std::cout << "\n";

	std::cout << "PTR 1: " << int_ptrs[0] << std::endl;
	std::cout << "VALUE 1: " << *int_ptrs[0] << std::endl;

	try
	{
		ints[45] = 2;
		std::cout << ints[45] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

	return 0;
}
