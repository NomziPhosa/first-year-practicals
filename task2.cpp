#include <iostream>
#include <string>

int main() {
    /**
     * ***************************** *
     * Part 1: Setting up Inventory  *
     * ***************************** * 
    */

    // Declare all your variables for Part 1 here:
   std::string bestSellingItem = "Caramel Macchiato";
    char cupSize = 'L';
    int beanStock = 50;
    int milkStock = 30;
    bool cafeOpen = true;
    bool restockNeeded = false;
    const float sales = 1234.50;

    /* DO NOT CHANGE THIS CODE! */
    std::cout<<"###"<<std::endl;
    std::cout<<"Best-selling item: "<<bestSellingItem<<std::endl;
    std::cout<<"Cup size for best-seller: "<<cupSize<<std::endl;
    std::cout<<"Number of coffee bean bags in stock: "<<beanStock<<std::endl;
    std::cout<<"Number of milk cartons in stock: "<<milkStock<<std::endl;
    std::cout<<"Cafe open: "<<cafeOpen<<std::endl;
    std::cout<<"Restock needed: "<<restockNeeded<<std::endl;
    std::cout<<"Sales in rands: R"<<sales<<std::endl;
    std::cout<<"###"<<std::endl;

    /**
     * ************************************ *
     * Part 2: Daily Inventory Calculation  *
     * ************************************ * 
    */

    // Your code for Part 2 goes here:
    int espressoShots = 10;
    float espressoCost = 5.50;
    int milkCost = 3;
    const int cappuccinoShots = 2;
    const int cappuccinoMilk = 3;
    float cappuccinoShotCost = cappuccinoShots * espressoCost;
    float cappuccinoMilkCost = milkCost * cappuccinoMilk;
    float cappuccinoTotalCost = cappuccinoShotCost + cappuccinoMilkCost;
    
    espressoShots -= (cappuccinoShots *3);
    int totalSales = 100 / cappuccinoTotalCost;

    std::cout<<espressoShots<<std::endl;
    std::cout<<espressoCost<<std::endl;
    std::cout<<milkCost<<std::endl;
    std::cout<<cappuccinoShots<<std::endl;
    std::cout<<cappuccinoMilk<<std::endl;
    std::cout<<cappuccinoShotCost<<std::endl;
    std::cout<<cappuccinoMilkCost<<std::endl;
    std::cout<<cappuccinoTotalCost<<std::endl;
    std::cout<<totalSales<<std::endl;

    /*DO NOT CHANGE CODE BELOW THIS LINE*/
    std::cout<<"###"<<std::endl;


}