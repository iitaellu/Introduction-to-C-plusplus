#include <iostream>

//aritmetics Operators
/*int main() {
    // + - * / %
    int age = 28;
    //int newAge = age + 1;
    double incrementer = 1.0;
    //age = age +1;

    age = age + incrementer;

    std::cout << age <<std::endl;
    //std::cout << newAge <<std::endl;

    int modulusAge = age % 5;
    std::cout << modulusAge <<std::endl;

    modulusAge = (age + 1) % 5;
    std::cout << modulusAge <<std::endl;

    std::string name = "Hestia";
    std::cout << name + " Cat" <<std::endl;
}*/

//Assignment operator
/*int main() {
    // =
    // += -= *= /= %=

    int age = 28;
    int newAge = 29;
    newAge = age;
    newAge = 29;

    std::cout << age << std::endl;
    std::cout << newAge << std::endl;

    age = age + 1;
    age += 1;
    std::cout << age << std::endl;

    std::string name = "Hestia";
    name += " Cat";
    std::cout << name << std::endl;
}*/

//increment and decrement operators
/*int main() {
    //++, --
    int age = 28;
    age = age + 1;
    age += 1;
    age++;

    std::cout << age << std::endl;

    age--;
    std::cout << age << std::endl;

    age = 28;
    int newAge1 = age++;
    age = 28;
    int newAge2 = ++age;
    std::cout << newAge1 << std::endl;
    std::cout << newAge2 << std::endl;

    //challenges
    // 1. What is the end result?
    int a = 0;
    int result = a - 5 * 2 + 20 / 2;
    std::cout << result << std::endl;

    // 0

    // 2. Can we change the quation to get a positive value?
    // add ()
    int result = (a - 5 * 2 + 20) / 2;
    std::cout << result << std::endl;

    // 3. What is the end result?
    int b = 10;
    b += 2 * 7;
    std::cout << b << std::endl;

    // 24

    // 4. I want to spell my full name. What is wrong with this equation? 
    std::string firstName = "Nimish";
    std::string lastName = "Narang";
    std::string fullName = firstName + lastName;
    std::cout << fullName << std::endl;

    //the name is now NimishNarang

    // 5. What are the values of c and d??

    int c = 1;
    int d = c--;

    std::cout << c << std::endl;
    std::cout << d << std::endl;

    // d = 1 and c = 0
}*/

// comparison operators
/*int main() {
    // == != > >= < <=

    int age = 28;
    int minAge = 18;

    bool isAdult = age >= minAge;
    //std::cout << isAdult << std::endl;
    std::cout << (isAdult == true) << std::endl;

    std::string a = "a";
    std::string b = "b";

    // bool results = a == b;
    bool results = a < b;
    std::cout << results << std::endl;

    std::cout << (isAdult == true) << std::endl;
    std::cout << isAdult << std::endl;
}*/

// Logical operators
/*int main() {
    //! && ||

    bool isGameOver = false;
    bool isNotGameOver = !isGameOver;
    std::cout <<isGameOver <<std::endl;
    std::cout <<isNotGameOver <<std::endl;

    int health = 0;
    int lives = 0;
    isGameOver = (health <= 0) && (lives <= 0);
    std::cout <<isGameOver << std::endl;

    //Challenges
    bool result;

    // 1. What is the result?
    int a = 1;
    result = a - 1 != 0;
    std::cout << result << std::endl;

    // False 0

    // 2. What is the result?
    std::string y = "y";
    std::string x = "x";
    result = !(x > y);
    std::cout << result << std::endl;

    // true 1

    // 3. What is the result?
    bool hasKey = true;
    bool isDoorLocked = true;
    int movementPoints = 1;
    result = (hasKey || !isDoorLocked) && movementPoints > 0;
    std::cout << result << std::endl;

    // true 1
}*/

// Ternary operator
int main() {
    // ? :

    bool isBirthday = true;

    int age = isBirthday ? 26 : 28; // IF isBirhtday == true then age == 29 otherwise it age = 28

    std::cout <<age << std::endl;
}