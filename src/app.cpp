#include <iostream>
#include "functions.cpp"
using namespace std;
class App {
public:
    void run() {
       cout << "Running the application!"<<endl;
        showMainMenu();
    }
   
    void processChoice(int userChoice) {
        Functions func;
        switch (userChoice) {
            case 1:
                func.generateDice();
                break;
            case 2:
                func.generateNymber();
                break;

            case 3:
               func.calculatePower();
                break;
            case 0:
                close();
                break;
            default:
               cout << "Invalid choice. Please enter a valid option." <<endl;
        }
       showMainMenu();
    }

    void showMainMenu() {
        
       cout << "Choose an option:" <<endl;
       cout << "1- Generate Dice" <<endl;
       cout << "2- Generate Numbers (20-50)" <<endl;
       cout << "3- calcate power" <<endl;
       cout << "0- Exit program" <<endl;

        int userChoice;
        cout << "Enter your choice: ";
        cin >> userChoice;
        processChoice(userChoice);
    }

    void close() {
        cout<< "Closing the application!" <<endl;
    }
};

