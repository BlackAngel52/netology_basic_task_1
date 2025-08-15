
#include <iostream>


struct adress
{
    std::string city{};
    std::string street{};
    std::string index{};
    int house_number{};
    int apartment_number{};
    
};


//const для того, чтобы исключить изменение атрибутов структуры
void print(const adress &house_adress)
{
    std::cout << "City: " << house_adress.city << std::endl;
    std::cout << "Street: " << house_adress.street << std::endl;
    std::cout << "House number: " << house_adress.house_number << std::endl;
    std::cout << "Apartment number: " << house_adress.apartment_number << std::endl;
    std::cout << "Index: " << house_adress.index << std::endl;
}


int main()
{
    //для того, чтобы инициализировать атрибуты через . нужен стандарт c++ 20 и выше
    adress my_house { .city {"Moscow"}, .street {"Leninskaya"}, .index {"969176"}, .house_number{5}, .apartment_number{44} };
    adress other_house { .city {"Saransk"}, .street {"Patolicheva"}, .index {"716345"}, .house_number{19}, .apartment_number{17} };

    print(my_house);
    std::cout << std::endl;
    print(other_house);

    return 0;
}


