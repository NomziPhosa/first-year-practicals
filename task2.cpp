#include <iostream>
#include <string>

int main()
{
    int coffeeBeansAdded;
    int milkAdded;
    std::cout << "###" << std::endl;
    std::cout << "How many beans have you added? ";
    std::cin >> coffeeBeansAdded;
    std::cout << "How much milk have you added? ";
    std::cin >> milkAdded;
    std::cout << std::endl<< "###" << std::endl;
    
    //DO NOT CHANGE ANY CODE ABOVE THIS CODE
    std::string bestSellingItem = "Double Nitro Mocha";
    int beansNeeded = 10;
    double milkNeeded = 0.5;
    bool moreBeans = coffeeBeansAdded > beansNeeded;
    bool lessBeans = coffeeBeansAdded < beansNeeded;
    bool equalMilk = milkAdded == milkNeeded;
    double totalCost = (0.375*beansNeeded) + (2.45*milkNeeded*10);
    
    
    // DO NOT CHANGE THE COUT STATEMENTS
    std::cout << "Best-selling item: " << bestSellingItem << std::endl;
    std::cout << "Number of coffee beans an order takes: " << beansNeeded << std::endl;
    std::cout << "Amount of milk, in litres, an order takes: " << milkNeeded <<"l" << std::endl;
    std::cout << "More beans: " << moreBeans << std::endl;
    std::cout << "Less beans: " << lessBeans << std::endl;
    std::cout << "Equal milk: " << equalMilk << std::endl;
    std::cout << "Cost of one order: R" << totalCost << std::endl;
    std::cout << "###"<< std::endl;

}
