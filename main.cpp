#include "ft_print_memory.hpp"
#include <string>

int main(void)
{
	std::string	str = "hello, I'm here to help you debug chunks of memory.";
	ft_print_memory(static_cast<const void *>(str.c_str()), str.size() + 1);

	return (0);
}
