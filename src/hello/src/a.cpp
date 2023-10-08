#include <hello/a.h>
#include <fmt/format.h>
void print_hello()
{
    std::cout << "hello" << std::endl;
}

void print_fmt()
{
    std::string str = fmt::format("{} + {} = {}", 1, 2, 3);
    std::cout << "str=" << str.c_str() << "\n\n";
}

int aaa = 347829;
