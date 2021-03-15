#include <iostream>
using namespace std;

int main()
{
    // https://onlinegdb.com/rJU1Z_TKw
    // Declare variables of type "int" for prices of menu items.
    int rateOfPizza = 999;
    int rateOfBurger = 250;
    int rateOfSandwich = 150;
    int rateOfParathaRoll = 200;

    // Declare variables of type "int" for the total price of items demanded
    
        
    int quantityOfPizzas = 0;        
    int quantityOfBurgers = 0;
    int quantityOfSandwitchs = 0;
    int quantityOfParathaRolls = 0;
    
    // Display availabe food items to customers
    
    cout << "          Availabe Food Items"    <<endl;
    
    cout<< "    -----------------------------" <<endl;
    cout<< "       Item               Price  " <<endl;
    cout<< "    -----------------------------" <<endl;

    cout<< "    (a) Pizza           (Rs. 999)" <<endl;
    cout<< "    (b) Burger          (Rs. 250)" <<endl;
    cout<< "    (c) Sandwitch       (Rs. 150)" <<endl;
    cout<< "    (d) Paratha Roll    (Rs. 200)" <<endl<<endl;
    
    
    cout<< "    How many Pizza(s) do you need?"<<"  "; cin>> quantityOfPizzas; 
    cout<< "    Price of "<<quantityOfPizzas <<" Pizzas is = " <<quantityOfPizzas * rateOfPizza <<endl<<endl;
    int totalRateOfPizzaz = quantityOfPizzas * rateOfPizza;
    
    cout<< "    How many Burgar(s) do you need?"<<"  "; cin>> quantityOfBurgers; 
    cout<< "    Price of "<<quantityOfBurgers <<" Burgars is = " <<quantityOfBurgers * rateOfBurger <<endl<<endl;
    int totalRateOfBurgers = quantityOfBurgers * rateOfBurger;

    cout<< "    How many Sandwitches(s) do you need?"<<"  "; cin>> quantityOfSandwitchs; 
    cout<< "    Price of "<<quantityOfSandwitchs <<" Sandwitches is = " <<quantityOfSandwitchs * rateOfSandwich <<endl<<endl;
    int totalRateOfSadqwitches = quantityOfSandwitchs * rateOfSandwich;

    cout<< "    How many Paratha Rolls(s) do you need?"<<"  "; cin>> quantityOfParathaRolls; 
    cout<< "    Price of "<<quantityOfParathaRolls <<" Paratha Rolls is = " <<quantityOfParathaRolls * rateOfParathaRoll <<endl<<endl;
    int totalRateOfParathaRolls = quantityOfParathaRolls * rateOfParathaRoll;
    
    int totalPrice = totalRateOfPizzaz + totalRateOfBurgers + totalRateOfSadqwitches + totalRateOfParathaRolls;
    float discount = 0;
    if(totalPrice>1000){
        discount = totalPrice * 5/100;
    }
    
    float gst = totalPrice * 19/100;
    
    int grandTotal = totalPrice + gst - discount; 

    cout << "                           Details of Your Order"<<endl;
    
    cout<< "    ----------------------------------------------------------------------" <<endl;
    cout<< "    Item          |     Quantity      |     Item Price     |     Total Price"<<endl;
    cout<< "    ----------------------------------------------------------------------" <<endl;
    cout<< "    Pizzas        |     "<<quantityOfPizzas<<"             |  "<<"   "<<rateOfPizza<<"            |"<<"      "<<totalRateOfPizzaz<<endl;

    cout<< "    ----------------------------------------------------------------------" <<endl;
    cout<< "    Burger        |     "<<quantityOfBurgers<<"             |  "<<"   "<<rateOfBurger<<"            |"<<"      "<<totalRateOfBurgers<<endl;

    cout<< "    ----------------------------------------------------------------------" <<endl;
    cout<< "    Sandwitches   |     "<<quantityOfSandwitchs<<"             |  "<<"   "<<rateOfSandwich<<"            |"<<"      "<<totalRateOfSadqwitches<<endl;

    cout<< "    ----------------------------------------------------------------------" <<endl;
    cout<< "    Paratha Rolls |     "<<quantityOfParathaRolls<<"             |  "<<"   "<<rateOfParathaRoll<<"            |"<<"      "<<totalRateOfParathaRolls<<endl;

    cout<< "    ----------------------------------------------------------------------" <<endl;
    cout<< "    Total Price                                            |      "<<totalPrice<<endl;
    cout<< "    Discount                                               |      "<<discount<<endl;
    cout<< "    General  Sales Tax @ 19%                               |      "<<gst<<endl;
    cout<< "    Grand Total                                            |      "<<grandTotal<<endl;

    cout<<discount<<" "<<gst;
    
    return 0;
}

