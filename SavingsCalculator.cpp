//Surmeet Bhullar
//Savings Calculator

#include <iostream>
using namespace std; 

void menu();
void getinfo(); 

int main()
{
    cout << "Welcome to Savings Calculator" << endl << endl;
    int run = 0;
    string input;  
    while (run == 0) {
        menu();
        cin >> input;
        if (input == "S")
        {
            getinfo();
        }
        else if (input == "Q")
        {
            run = 1; 
        }
    }
    return 0;
}
void menu() 
{
    cout << "<S>tart"  << endl << "<Q>uit" << endl; 
}
void getinfo()
{
    double totsaving = 0;
    double totspend = 0;
    double spend = 0;
    double check = 0;
    double numcheck = 0;
    double percent = 0;
    cout << "Please enter the total dollar amount in your savings account:" << endl;
    cin >> totsaving;
    cout << "Please enter the total dollar amount in your last check:" << endl;
    cin >> check;
    cout << "Please enter the total number of times you receive a check in a single month:" << endl;
    cin >> numcheck;
    cout << "Please enter the percentage of the check that you would like to put towards your saving account:" << endl;
    cin >> percent;
    percent = percent / 100;
    totspend = (check * numcheck) * percent; 
    cout << "As your total savings is $" << totsaving << " and your check amount is $" << check <<
        " that comes " << numcheck << " time(s) in a single month, it would be smart to set your maximum monthly unneccsary spending to $"
        << totspend << "." << endl; 
}