#include <iostream>

int main() {
  // Declare variables for currency amounts and conversion rates
  double pesos, reais, soles;
  double dollars;
  const double conversion_rate_1 = 0.2649; // Colombian Pesos to USD
  const double conversion_rate_2 = 0.20;   // Brazilian Reais to USD
  const double conversion_rate_3 = 0.26;   // Peruvian Soles to USD

  // Prompt for and read the amount of currencies
  std::cout << "Enter number of Colombian Pesos: ";
  std::cin >> pesos;

  std::cout << "Enter number of Brazilian Reais: ";
  std::cin >> reais;

  std::cout << "Enter number of Peruvian Soles: ";
  std::cin >> soles;

  // Calculate the total amount in US Dollars
  dollars = conversion_rate_1 * pesos + conversion_rate_2 * reais + conversion_rate_3 * soles;
  // Output the total amount in US Dollars
  std::cout << "USD = $" << dollars << "\n";
  
  return 0; 
}
