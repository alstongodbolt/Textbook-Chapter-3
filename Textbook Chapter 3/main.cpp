//
//  main.cpp
//  Textbook Chapter 3
//
//  Created by Alston Godbolt on 9/2/15.
//  Copyright (c) 2015 Alston Godbolt. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
    //cout << "Hello, World!\n";
    
    //Miles per gallon
    /*
    double gallons_of_gas;
    double miles_driven;
    
    cout << "How many gallons of gas does your car hold? ";
    cin >> gallons_of_gas;
    
    cout << "How many miles can be driven on a full tank of gas? ";
    cin >> miles_driven;
    
    double miles_per_gallon = miles_driven / gallons_of_gas;
    cout << "Your car's miles per gallon is: " << miles_per_gallon;
    
    
    //Stadium seating
    
    double class_A;
    double class_B;
    double class_C;
    double total_sold;
    
    cout << "\nHow many Class A seats were sold? ";
    cin >> class_A;
    
    cout << "\nHow many Class B seats were sold? ";
    cin >> class_B;
    
    cout << "\nHow many Class C seats were sold? ";
    cin >> class_C;
    
    class_A = class_A * 15;
    class_B = class_B * 12;
    class_C = class_C * 9;
    total_sold = class_A + class_B + class_C;
    
    cout << fixed << setprecision(2);
    
    cout << "\nThe total income generated from Class A seats was $" << class_A << endl;
    cout << "\nThe total income generated from Class B seats was $" << class_B << endl;
    cout << "\nThe total income generated from Class C seats was $" << class_C << endl;
    cout << "\nThe total income generated from all Class seats was $" << total_sold << endl;
    
    
    //Housing costs
    
    double rent, utilities, phones, cable, total_bill;
    cout << "\nPlease enter the following information" << endl;
    
    cout << "\nWhat is your monthly rent/ mortgage bill? $";
    cin >> rent;
    
    cout << "\nWhat is your monthly utility bill? $";
    cin >> utilities;
    
    cout << "\nWhat is your monthly phone bill (please include both home and mobile phone)? $";
    cin >> phones;
    
    cout << "\nWhat is your monthly cable bill? $";
    cin >> cable;
    
    double annual_rent = rent * 12, annual_utilities = utilities * 12, annual_phones = phones *12,
    annual_cable = cable * 12;
    
    cout << fixed << setprecision(2);
    
    cout << "\nIf your monthly rent/ mortgage bill is: $" << rent << ", then your annual payment is: $" << annual_rent << endl;
    cout << "\nIf your monthly utilities bill is: $" << utilities << ", then your annual payment is: $" << annual_utilities << endl;
    cout << "\nIf your monthly phone(s) payment is: $" << phones << ", then your annual payment is: $" << annual_phones << endl;
    cout << "\nIf your monthly cable payment is: $" << cable << ", then your annual payment is: $" << annual_cable << endl;
    
    total_bill = rent + utilities + phones + cable;
    double annual_total_bills = annual_cable + annual_phones + annual_rent + annual_utilities;
    cout << "\nYour total monthly bill is: $" <<total_bill << " and your annual bills total $" << annual_total_bills;
    
    
    //How much insurance do I need?
    
    double insurance = .80;
    double replacement_cost;
    
    cout << "\nWhat is the replancement cost of the building? $";
    cin >> replacement_cost;
    
    replacement_cost = replacement_cost * insurance;
    
    cout<< fixed << setprecision(2);
    
    cout << "The minimum amount of insurance needed is: $" << replacement_cost;
    
    
    //Batting Average
    
    double at_bats;
    double hits;
    
    cout << "\nHow many at bats did the player have? ";
    cin >> at_bats;
    
    cout << "How many hits did the player have? ";
    cin >> hits;
    
    double average = hits / at_bats;
    
    cout << fixed << setprecision(3);
    
    cout << "The players batting average is: " << average;
    
    
    //Test average
    
    double test1, test2, test3, test4, test5;
    
    cout << "\nPlease enter five test scores" << endl;
    cin >> test1 >> test2 >> test3 >> test4 >> test5;
    
    double average1 = (test1 + test2 + test3 + test4 + test5) / 5;
    
    cout << fixed << setprecision(1);
    
    cout << "The students test score average is: " << average1;
    */
    
    //Average rainfall
    /*
    string month1;
    string month2;
    string month3;
    double rain1;
    double rain2;
    double rain3;
    
    cout << "Please enter the three months to calculate average rainfall ";
    cin >> month1 >> month2 >> month3;
    
    cout << "Please enter the rainfall (in inches) of the three months entered ";
    cin >> rain1 >> rain2 >> rain3;
    
    double average_rain = (rain1 + rain2 + rain3) / 3;
    cout << "The average monthly rain for " << month1 << ", " << month2 << ", and " <<month3 << " was " << average_rain;
    */
    
    //Box Office
    /*
    string movie_name;
    double adult_ticket_price;
    double child_ticket_price;
    
    cout << "Please enter the title of the movie. ";
    getline(cin, movie_name);
    
    cout << "Please enter the price per adult ticket. ";
    cin >> adult_ticket_price;
    
    cout << "Please enter the price per child ticket. ";
    cin >> child_ticket_price;
    
    double adult_ticket_sold;
    cout << "Please enter the number of adult tickets sold. ";
    cin >> adult_ticket_sold;
    
    double child_ticket_sold;
    cout << "Please enter the number of child tickets sold. ";
    cin >> child_ticket_sold;
    
    adult_ticket_price = adult_ticket_price * adult_ticket_sold;
    child_ticket_price = child_ticket_sold * child_ticket_price;
    
    double gross_profit = adult_ticket_price + child_ticket_price;
    double distributor;
    
    cout << "How much does the distributor take 'off the top' (please enter as a decimal)? ";
    cin >> distributor;
    
    double net_profit = gross_profit * distributor;
    
    cout << "Movie Name: " << setw(15) <<movie_name << endl;
    cout << "Adult tickets sold: " << setw(22) <<adult_ticket_sold << endl;
    cout << "child tickets sold: " << setw(22) <<child_ticket_sold << endl;
    
    cout << fixed << setprecision(2);
    
    cout << "Gross box office profit:" << setw(12) << "$" << gross_profit << endl;
    cout << "Amount paid to the distributor:" << setw(5) << "-$" << net_profit << endl;
    
    net_profit = gross_profit - net_profit;
    cout << "Net box office profit:" << setw(14) << "$" << net_profit << endl;
     */
    
    //How many widgets
    /*
    double pallet_weight;
    double pallet_weight_widget;
    double widget_weight = 9.2;
    double total_weight;
    
    cout << "What is the weight of an empty pallet (in pounds)? ";
    cin >> pallet_weight;
    
    cout << "What is the weight of the pallet with widgets (in pounds)? ";
    cin>> pallet_weight_widget;
    
    total_weight = pallet_weight_widget - pallet_weight;
    total_weight = total_weight / widget_weight;
    
    cout << "There are " << total_weight << " widgets on the pallet";
    */
    
    //How many calories?
    /*
    double bag = 40;
    double serving = 10;
    double calories_serving = 300;
    
    serving = bag / serving;
    calories_serving = calories_serving / serving;
    double cookies;
    
    cout << "How many cookies have you eaten? ";
    cin >> cookies;
    
    double total_calories = cookies * calories_serving;
    
    cout << "If you ate " << cookies << " cookies, then the total calories consumed is " << total_calories;
     */
    
    //Celsius to Fahrenheit
    /*
    double celsius;
    
    cout << "Please enter the temperature in Celsius. ";
    cin >> celsius;
    
    double fahrenheit;
    fahrenheit = (1.8 * celsius) + 32;
    
    cout << "If the temperature is " << celsius << " degree(s) Celsuis, it is " << fahrenheit << " degrees Fahrenheit";
     */
    
    //Curreny
    /*
    double yen_per_dollar = .952;
    double euros_per_dollar = .7175;
    double dollar;
    
    cout << "Please enter the number of US dollars to convert $";
    cin >> dollar;
    
    yen_per_dollar = yen_per_dollar * dollar;
    euros_per_dollar = euros_per_dollar * dollar;
    
    cout << fixed << setprecision(2);
    
    cout << dollar << " US dollar(s) equals " << yen_per_dollar << " Yen, or " << euros_per_dollar << " Euros.";
     */
    
    //Monthly sales tax
    /*
    string month;
    double total_collected;

    
    cout << "Please enter the month and year tax needs to be calculated. ";
    getline(cin, month);
    
    cout << "Please enter the total collected for: " << month << "\n";
    cin >> total_collected;
    
    cout << "\n" << month << endl;
    cout << "---------------------" << endl ;
    
    double county_tax = .0188679 * total_collected;
    double state_tax = .0377358 * total_collected;
    double sales = total_collected - (county_tax + state_tax);
    double total_tax = county_tax + state_tax;
    
    cout << fixed << setprecision(2);
    
    cout << "Total collected:" << setw(5) << "$" << total_collected << endl;
    cout << "Sales:" << setw(15) << "$" << sales << endl;
    cout << "County sales tax:" << setw(6) << "$" << county_tax << endl;
    cout << "State sales tax:" << setw(6) << "$" << state_tax << endl;
    cout << "Total sales tax:" << setw(6) << "$" << total_tax << endl;
    */
    
    //Property tax
    /*
    double property_value;
    cout << fixed << setprecision(2);
    
    cout << "Please enter your property value ";
    cin >> property_value;
    
    double assessed_property_value = property_value * .60;
    
    double tax_rate = assessed_property_value / 100;
    tax_rate = tax_rate * 2.64;
    
    cout << "Your assessed property value is: $" << assessed_property_value << endl;
    
    cout << "At a tax rate of $2.64, your property tax for this year is: $" << tax_rate << endl;
     */
    
    //Senior citizen property tax
    /*
    double property_value;
    cout << "Please enter your property value ";
    cin >> property_value;
    
    double assessed_property_value = property_value * .60;
    assessed_property_value = assessed_property_value - 5000;
    
    double tax_rate = assessed_property_value / 100;
    tax_rate = tax_rate * 2.64;
    
    cout << fixed << setprecision(2);
    
    cout << "Your assessed property value (minus the $5000 senior citizens homeowner exemption) is: $" << assessed_property_value << endl;
    cout << "At a tax rate of $2.64, your total property tax for this year is: $" << tax_rate << endl;
    
    double quarterly_payment = tax_rate / 4;
    
    cout << "Your quarterly payment is: $" << quarterly_payment << endl;
    */
    
    //Math tutor
    /*
    unsigned seed;
    seed = time(0);
    
    srand(seed);
    
    int rnumber1 = 1 + rand() % 9;
    int rnumber2 = 1 + rand() % 9;
    int equalnum = rnumber1 + rnumber2;
    
    cout << setw(2) << rnumber1 << endl;
    cout << "+" << rnumber2 << endl;
    cout << "----" << endl;
    
    int number_guessed;
    cout << "Please enter your annswer " << endl;
    cin >> number_guessed;
    cout << "The correct answer is: " << equalnum;
    */
    
    //Interest earned
    /*
    double principal;
    double interest_rate;
    
    double compound;
    
    cout << "Please enter principal ";
    cin >> principal;
    
    cout << "Please enter interest rate ";
    cin >> interest_rate;
    
    cout << "Please enter times compounded ";
    cin >> compound;
    
    cout << "Interest rate:" << setw(12) << interest_rate << "%" << endl;
    
    cout << "Times compounded:" << setw(9) << compound << endl;
    cout << fixed << setprecision(2);
    
    cout << "Principal:" << setw(9) << "$" << principal << endl;
    
    interest_rate = interest_rate / 100;
    
    double amount = principal * pow(1 + interest_rate / 12, 12);
    
    interest_rate = interest_rate * principal;
    
    cout << "Interest:" << setw(12) << "$" << interest_rate << endl;
    
    cout << "Final balance:" << setw(5) << "$" << amount << endl;
    */
    
    //Monthly Payments come back to finish later
    /*
    double loan_amount;
    double interest_rate;
    double number_of_payments;
    double monthly_payment;
    double amount_paid_back;
    double interest_paid;
    
    cout << "What is the loan amount? ";
    cin >> loan_amount;
    
    cout << "What is the interest rate? ";
    cin >> interest_rate;
    
    
    cout << "Enter number of payments. ";
    cin >> number_of_payments;
    
    interest_rate = interest_rate / 100 / 12;
    
    monthly_payment = (interest_rate * pow(1 + interest_rate, number_of_payments)) / (pow(1 + interest_rate, number_of_payments) - 1);
    monthly_payment = monthly_payment * loan_amount;
    
    interest_paid = loan_amount * pow(1 + (interest_rate / number_of_payments), number_of_payments);
    
    interest_rate = interest_rate * 100;
    
    cout << "Loan Amount:" << setw(5) << "$" << loan_amount << endl;
    cout << "Monthly Interest Rate:" << setw(5) << interest_rate << "%" << endl;
    cout << "Number of Payments:" << setw(5) << number_of_payments << endl;
    
    cout << fixed << setprecision(2);
    
    interest_rate = interest_rate * 12;
    
    cout << "Monthly Payment:" << setw(5) << "$" << monthly_payment << endl;
    
    cout << "Amount Paid Back:" << setw(5) << "$" << amount_paid_back << endl;
    cout << "Interest Paid:" << setw(5) << "$" << interest_paid << endl;
    */
    
    // Pizza slices
    /*
    double pizza_diameter;
    cout << "What is the size of the pizza (in inches)?";
    cin >> pizza_diameter;
    
    double radius = pizza_diameter / 2;
    const double PI = 3.14;
    double area = PI * pow(radius, 2);
    double slice = area / 14.125;
    
    cout << "The total number of pizza slices is: " <<
    setprecision(2) << slice << endl;
    */
    
    //How many pizzas?
    double people;
    cout << "How many people will be at the party?";
    cin >> people;
    
    double pizza_diameter;
    cout << "What is the size of the pizza (in inches)?";
    cin >> pizza_diameter;

    return 0;
}
