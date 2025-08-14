
#include <iostream>


struct bank
{
    std::string name{};
    double money_left{};
    int account_number{};
};


void change_value(bank& data, double money)
{
    data.money_left = money;
}

int main()
{
    double money{};
    bank user;
    std::cout << "Enter your account number: " << std::endl;
    std::cin >> user.account_number;
    std::cout << "Enter your name: " << std::endl;
    std::cin >> user.name;
    std::cout << "Enter your money on account: " << std::endl;
    std::cin >> user.money_left;
    std::cout << "Enter your NEW money on account: " << std::endl;
    std::cin >> money;

    change_value(user, money);

    std::cout << "Your account: " << user.name << ", " << user.account_number << ", " << user.money_left << std::endl;

}