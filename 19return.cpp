#include <iostream>

// Function to combine first and last names into a full name
std::string identity(std::string firstName, std::string lastName);

int main() {
    // Initialize first and last names
    std::string firstName = "kunal";
    std::string lastName = "madoliya";
    
    // Get the full name by combining first and last names
    std::string fullName = identity(firstName, lastName);
    
    // Print the full name
    std::cout << "Full Name: " << fullName << std::endl;
    
    return 0;
}

// Function definition: concatenates first and last names
std::string identity(std::string firstName, std::string lastName) {
    return firstName + " " + lastName;
}
