// 5. Write a program to ask user about the cost price and selling 
// price banana per dozen. Calculate the profit or loss earned 
// upon selling 25 bananas.

#include <iostream>
using namespace std;

int main() {
    float costPricePerDozen, sellingPricePerDozen;
    float costPrice, sellingPrice, profitOrLoss;

    // Input from user
    cout << "Enter cost price of bananas per dozen: ";
    cin >> costPricePerDozen;
    cout << "Enter selling price of bananas per dozen: ";
    cin >> sellingPricePerDozen;

    // Calculate cost price and selling price for 25 bananas
    costPrice = (costPricePerDozen / 12) * 25;
    sellingPrice = (sellingPricePerDozen / 12) * 25;

    // Calculate profit or loss
    profitOrLoss = sellingPrice - costPrice;

    // Display result
    if(profitOrLoss > 0)
        cout << "Profit earned = " << profitOrLoss << endl;
    else if(profitOrLoss < 0)
        cout << "Loss incurred = " << -profitOrLoss << endl;
    else
        cout << "No profit, no loss." << endl;

    return 0;
}
