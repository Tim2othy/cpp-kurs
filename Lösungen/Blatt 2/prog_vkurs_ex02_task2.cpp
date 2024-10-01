/* Umwandlung Fahrenheit <-> Celsius. */

#include <iostream>

int main ()
{
	// Umwandlung Fahrenheit -> Celsius
	std::cout << "Geben Sie bitte eine Temperatur in Grad Fahrenheit ein: ";
    double grad_fahrenheit;
    std::cin >> grad_fahrenheit;
    std::cout << "Das entspricht " << (grad_fahrenheit-32)/1.8 << " Grad Celsius." << std::endl;

    // Umwandlung Celsius -> Fahrenheit
	std::cout << "Geben Sie bitte eine Temperatur in Grad Celsius ein: ";
    double grad_celsius;
    std::cin >> grad_celsius;
    std::cout << "Das entspricht " << (grad_celsius*1.8+32) << " Grad Fahrenheit." << std::endl;
	return 0;
}