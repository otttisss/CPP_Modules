#include <iostream>
#include <exception>

void bar()
{
	throw(std::out_of_range("message"));
}

void	foo()
{
	try
	{
		bar();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}

int main()
{
	foo();
}