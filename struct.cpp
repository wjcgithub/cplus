#include <iostream>

int main(int argc, char const *argv[])
{
    struct Date{
        int year;
        int mon;
        int day;
    };

    Date d = {2018, 06, 07};

    std::cin>>d.mon;

    std::cout<<d.year<<std::endl;

    return 0;
}
