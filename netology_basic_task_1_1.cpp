
#include <iostream>

int main()
{
    enum class months
    {
            january = 1,
            february,
            march,
            april,
            may,
            june,
            july,
            august,
            september,
            october,
            november,
            december
    };


    int number_of_month{ 1 };
    while (number_of_month != 0)
    {
        std::cout << "Enter number of month or 0 if you want to exit: " << std::endl;
        std::cin >> number_of_month;

        months res = static_cast<months>(number_of_month);
        switch (res)
        {
        case months::january:
            std::cout << "January" << std::endl;
            break;
        case months::february:
            std::cout << "February" << std::endl;
            break;
        case months::march:
            std::cout << "March" << std::endl;
            break;
        case months::april:
            std::cout << "April" << std::endl;
            break;
        case months::may:
            std::cout << "May" << std::endl;
            break;
        case months::june:
            std::cout << "June" << std::endl;
            break;
        case months::july:
            std::cout << "July" << std::endl;
            break;
        case months::august:
            std::cout << "August" << std::endl;
            break;
        case months::september:
            std::cout << "September" << std::endl;
            break;
        case months::october:
            std::cout << "October" << std::endl;
            break;
        case months::november:
            std::cout << "November" << std::endl;
            break;
        case months::december:
            std::cout << "December" << std::endl;
            break;
        default:
            if (number_of_month != 0)
            {
                std::cout << "Wrong Number!" << std::endl;
            }
            else
            {
                std::cout << "Goodbye!" << std::endl;
            }
            break;
        };
    };
    

    return 0;
}
