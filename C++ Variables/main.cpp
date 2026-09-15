//C++ Variables

#include <iostream>

/*int main() {
   std::cout << "Hello, World!\n"; //Standard print out method
}*/

//Booleans
int main() {
   //type name = value;
   bool isOn = true;
   bool isGameOver = false;

   std::cout << isOn << "\n"; //newline
   std::cout << isOn << std::endl; //Endline
   std::cout << isGameOver << std::endl;

   isGameOver = true;
   std::cout << isGameOver << std::endl;
}

//integers
/*int main() {
   //int age = 28;

   int health;
   std::cout << health << std::endl; //gives memory location, no 0
   health = 50;
   std::cout << health << std::endl;
   health = -50;
   std::cout << health << std::endl;

   //uint age = 28;  //unsigned integer, only positive value. Might not always work since it was not always available for c++

   // types can vary according to the range of numbers you want to consider
    short shortInt = 1;
    std::cout << shortInt << std::endl;
    
    long longInt = -45000;
    std::cout << longInt << std::endl;

    long long longLongInt = 497283412736817239;
    std::cout << longLongInt << std::endl;
}*/

//doubles
/*int main() {
   double price = 19.99;

   double balance;
   std::cout << balance << std::endl;

   balance = 100;
   std::cout << balance << std::endl;

   balance = -5.95;
   std::cout << balance << std::endl;

   // float type has half the precision of a double type
    float bankBalance;

    // long double type is used for higher precision
    long double largeBalance;
}*/

//characters
/*int main() {
   char comma = ',';
   std::cout << comma <<std::endl;
   char a = 'a';
   std::cout << a <<std::endl;
   char one = '1';
   std::cout << one <<std::endl;
}*/

//strings
/*int main() {
   std::string name = "Zenva";

   std::string mixedString = "1n. ";

   std::cout <<mixedString << std::endl;
}*/

//constants
/*int main() {
   const std::string email = "email@email.com"; // For variables which are not supposed to change later

   std::cout <<email << std::endl;

}*/