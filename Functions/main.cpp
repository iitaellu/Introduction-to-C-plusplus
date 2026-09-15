#include <iostream>

//Functions and function parameters
/*void printName(std::string name) {
    std::cout << name << std::endl;
}

void fullName(std::string firstName, std::string lastName){
    std::string fullName = firstName + " " + lastName;
    std::cout << "Hello " << fullName << std::endl;
}

int main() {
    printName("Hestia");
    printName("The Cat");
    printName("sshbgkjefbiujsg");

    fullName("Hesta", "The Cat");
}*/

//retunr statements
/*std::string getFullName(std::string firstName, std::string lastName){
    std::string fullName = firstName + " " + lastName;
    return fullName;
}

int main() {
    std::string fullName = getFullName("Hesta", "The Cat");
    std::cout << fullName << std::endl;
}*/

//String functions
int main() {

    //size, empty, substr, append, insert, ease
    std::string name = "Hestia";
    std::cout << name.size() << std::endl;
    std::cout << name.empty() << std::endl;     //Check if string is empty or not (returns true or false)
    std::cout << name.substr(0, 3) << std::endl; 

    name.append(" the Cat");
    std::cout << name << std::endl; 

    name = "Hestua";
    std::cout << name << std::endl;
    name.insert(4, "i");
    std::cout << name << std::endl;
    name.erase(5, 1);
    std::cout << name << std::endl;
}