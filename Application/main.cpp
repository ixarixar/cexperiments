

#include <iostream>

#include <algorithm>

int main(int, char*[])
{

    if (__cplusplus == 201703L) std::cout << "C++17\n";
        else if (__cplusplus == 201402L) std::cout << "C++14\n";
        else if (__cplusplus == 201103L) std::cout << "C++11\n";
        else if (__cplusplus == 199711L) std::cout << "C++98\n";
        else std::cout << "pre-standard C++\n";


    std::string data="1 + 2+3+ 4";

    //remove spaces
    data.erase( std::remove_if(data.begin(), data.end(), isspace), data.end() );

    std::cout<<data<<std::endl;






















    return 0;

}
