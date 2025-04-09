#include <iostream>
#include <math.h>
#include <iomanip> 
int main()
{
	unsigned int x;
	std::cin>>x;
	int i;
	std::cin>>i;

	std::cout << (x | (1 << i)) << std::endl;


	return 0;
}