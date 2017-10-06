//
//  main.cpp
//  PRG-3-10-How-Much-Insurance
//
//  Created by Keith Smith on 10/6/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//  Many financial experts advise that property owners should insure their homes of buildings
//  for at least 80 percent of the amount it would cost to replace the structure. Write
//  a program that asks the user to enter the replacement cost of a building, then displays
//  the minimum amount of insurance he or she should buy for the property.

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Declare constant
    const float  FLT_MINIMUM_PERCENTAGE_INSURED = 0.80f;
    
    // Declare variables
    float fltBuildingReplacementCost,
          fltBuildingMinimumInsuredAmount;
    
    cout << "Please enter the total cost to replace the building: " << endl << "$";
    cin >> fltBuildingReplacementCost;
    
    // Calculate minimum insurance amount from given data
    fltBuildingMinimumInsuredAmount = fltBuildingReplacementCost * FLT_MINIMUM_PERCENTAGE_INSURED;
    
    // Set precision for dollar amount, two points of precision
    cout << setprecision(2) << fixed << showpoint;
    
    // Output calculated amount to console
    cout << "You will need to purchase this much insurance to cover your costs: " << endl
         << "$" << fltBuildingMinimumInsuredAmount;
    
    return 0;
}


