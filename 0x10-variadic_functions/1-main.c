#include "variadic_functions.h"
int main(void)
{
	print_numbers(", ", 4, 0, 98, -1024, 402);
	print_numbers("", 3, 5, -2, 65);
	print_numbers(", ", 0, 2);
	return (0);
}
