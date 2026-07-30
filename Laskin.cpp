#include <iostream>
#include <cmath>
#include <windows.h>
#include "Operations.h"

using namespace std;
void show_calculator()
{
    cout << R"(
   ____      _            _       _             
  / ___|__ _| | ___ _   _| | __ _| |_ ___  _ __ 
 | |   / _` | |/ __| | | | |/ _` | __/ _ \| '__|
 | |__| (_| | | (__| |_| | | (_| | || (_) | |   
  \____\__,_|_|\___|\__,_|_|\__,_|\__\___/|_|   
)" << endl;
}

void printMenu()
{
    cout << "\n=========================\n";
    cout << "   C++ TERMINAL CALCULATOR\n";
    cout << "=========================\n";
    cout << " 1. Add\n";
    cout << " 2. Subtract\n";
    cout << " 3. Multiply\n";
    cout << " 4. Divide\n";
    cout << " 5. Modulo\n";
    cout << " 6. Square\n";
    cout << " 7. Cube\n";
    cout << " 8. Power\n";
    cout << " 9. Square Root\n";
    cout << "10. Log\n";
    cout << "11. Sin\n";
    cout << "12. Cos\n";
    cout << "13. Tan\n";
    cout << "14. Clear\n";
    cout << " 0. Exit\n";
    cout << "=========================\n";
}
double readNumber(const string &prompt)
{
    double value;
    while (true)
    {
        cout << prompt;
        cin >> value;

        if (cin.fail())
        {
            cin.clear(); // reset error flag
            cin.ignore(10000, '\n');
            cout << "That's not a valid number, try again.\n";
            continue;
        }

        cin.ignore(10000, '\n');
        return value;
    }
}
int main()
{
    Operations calc;
    int choice;
    double input;

    cout << "Enter starting value: ";
    input = readNumber("");
    calc.setValue(input);

    while (true)
    {
        cout << "\nCurrent value: " << calc.getValue() << "\n";
        printMenu();
        choice = static_cast<int>(readNumber("Choose an operation: "));

        try
        {
            switch (choice)
            {
            case 1:
                input = readNumber("");
                calc.add_lask(input);
                break;
            case 2:
                input = readNumber("");
                calc.minus_lask(input);
                break;
            case 3:
                input = readNumber("");
                calc.multiply_lask(input);
                break;
            case 4:
                input = readNumber("");
                calc.divide_lask(input);
                break;
            case 5:
                input = readNumber("");
                calc.mod_lask(input);
                break;
            case 6:
                calc.square_lask();
                break;
            case 7:
                calc.cube_lask();
                break;
            case 8:
                input = readNumber("");
                calc.power_lask(input);
                break;
            case 9:
                calc.sq_root();
                break;
            case 10:
                calc.log_lask();
                break;
            case 11:
                calc.sin_lask();
                break;
            case 12:
                calc.cos_lask();
                break;
            case 13:
                calc.tan_lask();
                break;
            case 14:
                calc.clear_lask();
                break;
            case 0:
                cout << "Goodbye!\n";
                return 0;
            default:
                cout << "Invalid choice, try again.\n";
            }
        }
        catch (const std::exception &e)
        {
            cout << "Error: " << e.what() << "\n";
        }
    }

    return 0;
}
