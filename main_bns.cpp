
#include <iostream>
# include "tester/tester.hpp"
# include "set/set.hpp"

bool printBoolResult(std::fstream& fs, bool stl_bool, bool ft_bool)
{
    fs << "\nBool result : \n";
    fs << " - STL : " << (stl_bool ? "true" : "false") << std::endl;
    fs << " - FT  : " << (ft_bool ? "true" : "false") << std::endl;

    return (stl_bool == ft_bool);
}


int main()
{
    test_set();
    system("ft_container");
}
