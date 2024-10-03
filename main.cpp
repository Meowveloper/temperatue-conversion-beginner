#include <iostream>

int main () {
    
    double temp;
    char unit;

    std::cout << "********** Temperature Conversion **********" << '\n';

    std::cout << "F = Fahrenheit" << '\n';

    std::cout << "C = Celsius" << '\n';    

    std::cout << "What unit would you like to convert to? : ";
    std::cin >> unit;


    if ( unit == 'F' || unit == 'f' ) 
    {
        std::cout << "Enter the temperature in Celsius : ";
        std::cin >> temp;
        temp = (1.8 * temp) + 32; // formula
        std::cout << "Temperature is => " << temp << " Fahrenheit." << std::endl;
    }
    else if ( unit == 'C' || unit == 'c') 
    {
        std::cout << "Enter the temperature in Fahrenheit : ";
        std::cin >> temp;
        temp = (temp - 32) / 1.8; // formula
        std::cout << "Temperature is => " << temp << " Celsius." << std::endl;
    }
    else 
    {
        std::cout << "Enter a valid value" << '\n'; 
    }


    std::cout << "********************************************" << '\n';

    return 0;
}