#include <iostream>

int main() {
  double mac;
  int planet;
  std::cout << "weight on earth: ";
  std::cin >> mac;
  std::cout << "Number of the planet: ";
  std::cin >> planet;
  

  switch(planet) {
  	case 1 :
  	mac = mac * 0.78;
  	break;
  	case 2 :
  	mac = mac * 0.39;
  	break;
  	case 3 :
  	mac = mac * 2.65;
  	break;
  	case 4 :
  	mac = mac * 1.17;
  	break;
  	case 5 :
  	mac = mac * 1.05;
  	break;
  	case 6 :
  	mac = mac * 1.23;
  	break;

  }
  

  std::cout << "\nYour weight is :" << mac << "\n";
  
  
  
  
  
  
  
  
}