#include <iostream>

// if Statement
/*int main(){

    char trafficLight = 'y';
    int speed = 30;

    if (trafficLight == 'g') {
        std::cout << "Go!\n";
    }
    else if (trafficLight == 'r') {
        std::cout << "Stop!\n";
    }
    else if (trafficLight == 'y' && speed >= 30) {
        std::cout << "Speed UP!\n";
    }
    else if (trafficLight == 'y' && speed < 30) {
        std::cout << "Slow down!\n";
    }

    //OR
    // else if (trafficLight == 'y') {
    //     if (speed >= 30) {
    //     std::cout << "Speed UP!\n";
    //     }
    //     if (speed < 30) {
    //     std::cout << "Slow down!\n";
    //     }
    //}

    else {
        std::cout << "Unknown state!\n";
    }
}*/

// Switch statement
/*int main() {

    //char trafficLight = 'g';
    //int speed = 30;

    char trafficLight;
    std::cout << "Give character: ";
    std::cin >> trafficLight;

    int speed;
    std::cout << "give speed value: ";
    std::cin >> speed;

    switch (trafficLight) {
        case 'g':
            std::cout << "Go!\n";
            break;
        case 'r':
            std::cout << "Stop!\n";
            break;
        case 'y':
            if (speed >= 30) {
                std::cout << "Speed up!\n";
            } 
            else if (speed < 30) {
                std::cout << "Slow down!\n";
            }
            break;
            
        default:
            std::cout << "Unknown state!\n";
    }
}*/

// While loops
/*int main() {
    int pos = 0;
    int endPos = 5;
    bool isGameOver = false;

    //while (pos < endPos) {
    //    pos++;
    //    std::cout << "Current position is " << pos << std::endl;
    //}
    //std::cout << "You have reached the end! " << std::endl;

    while (!isGameOver) {
        pos++;
        std::cout << "Current position is " << pos << std::endl;
        if (pos >= 5){
            isGameOver = true;
        }
    }
    std::cout << "You have reached the end! " << std::endl;
    
}*/

// For loops
/*int main() {
    //for (int i = 0; i < 5; i++) {
    //    std::cout << "Hello!\n";
    //}

    int pos = 0;
    int endPos = 5;

    for (pos = 1; pos <= endPos; pos++) {
        std::cout << "Current position is " << pos << std::endl;
    }
    std::cout << "You have reached the end! " << std::endl;
}*/

// Control statement
int main() {
   int pos = 0;
   int endPos = 10;
   int itemPos = 2;
   int enemyPos = 6;
   
   while (pos < endPos) {
    pos++;
    
    if (pos == itemPos){
        std::cout << "ITem Found!" << pos << std::endl;
        continue;
    } else if (pos == enemyPos){
        std::cout << "Enemy Collision!" << pos << std::endl;
        break;
    }
   std::cout << "Empty space!" << std::endl;
   }
}