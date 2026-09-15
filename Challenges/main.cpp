//g++ -o main main.cpp
//.\main.exe


//Bottle dispencer
#include <iostream>

float addSaldo(float saldo){
    float add = 0;
    std::cout << "how much you want to add: ";
    std::cin >> add;

    if (std::cin.fail() || add >= 0){

    }

    if (add >= 0) {
        std::cout << "Invalid amount" << std::endl;
        std::cin.clear();
        std::cin.ignore(100, '\n');
    }
    else {
         saldo += add;
    }
    return saldo;
}

float withdrawSaldo(float saldo) {
    saldo = 0;
    std::cout << "You have no more saldo" << std::endl;
    return saldo;
}

void listOfBottles(){
    std::cout << "Drinks available" << std::endl;
    std::cout << "\n 1. Coca-Cola 2,50e \n 2. Coca-Cola Zero 2,00e \n 3. Sprite Zero 1,00e \n 4. Fanta Zero 1,50e\n 5. Cancel" << std::endl;
}

float BuyBottle(float saldo){
    int choose = 0;
    bool isOn = true;
    float newSaldo = 0;
    
    while (isOn){
    listOfBottles();
    std::cout << "What do you want to do?: ";
    std::cin >> choose;

    
         switch (choose){
            case 1:
                if ((saldo - 2.50) >= 0){
                    newSaldo = saldo - 2.50;
                } else {
                    std::cout << "Saldo is not enough" << std::endl;
                    newSaldo = saldo;
                }
                isOn = false;
                break;
            case 2:
                if ((saldo - 2.00) >= 0){
                    newSaldo = saldo - 2.00;
                } else {
                    std::cout << "Saldo is not enough" << std::endl;
                    newSaldo = saldo;
                }
                isOn = false;
                break;

            case 3:
                if ((saldo - 1.00) >= 0){
                    newSaldo = saldo - 1.00;
                } else {
                    std::cout << "Saldo is not enough" << std::endl;
                    newSaldo = saldo;
                }
                isOn = false;
                break;

            case 4:
                if ((saldo - 1.50) >= 0){
                    newSaldo = saldo - 1.50;
                } else {
                    std::cout << "Saldo is not enough" << std::endl;
                    newSaldo = saldo;
                }
                isOn = false;
                break;

            case 5:
                std::cout << "returning to main screen" << std::endl;
                newSaldo = saldo;
                isOn = false;
                break;

            default:
                std::cout << "Unknown state!\n";
                break;

        }
    }
   
    return newSaldo;
}

bool checkSaldo(float saldo){
    bool isSaldo = false;
    if (saldo > 0) {
        isSaldo = true;
    } 
    return isSaldo;
}
    
int main() {
    float saldo = 0;
    bool machineOn = true;
    while (machineOn){
        int choose = 0;
        std::cout << "\nThis is bottle dispencer." << std::endl;
        std::cout << "Your current saldo: " << saldo << std::endl;
        std::cout << "Operators: \n 1. Add Saldo \n 2. Withdraw saldo \n 3. Buy soda \n 4. Exit" << std::endl;
        std::cout << "What do you want to do?: ";
        std::cin >> choose;

        if (choose == 1) {
            saldo = addSaldo(saldo);
        }
        else if (choose == 2){
            saldo = withdrawSaldo(saldo);

        }
        else if (choose == 3){
           saldo = BuyBottle(saldo);

        }
        else if(choose == 4){
            if (checkSaldo(saldo) == false){
                machineOn = false;
            } else {
                std::cout << "pleace, withdraw the money first" << std::endl;                
            }
        }
        else {
            std::cout << "Invalid input. Press number between 1 to 4" << std::endl;
        }

    }
    std::cout << "Thanks for using the program!" << std::endl;
}