

// profile.hpp
#ifndef PROFILE_HPP
#define PROFILE_HPP

#include <iostream>
#include <string>
#include <vector>

class Profile {
private:
    std::string name;
    int age;
    std::string city;
    std::string country;
    std::string pronouns;
    std::vector<std::string> hobbies;

public:
    // Constructor
    Profile(std::string new_name, int new_age, std::string new_city, std::string new_country, std::string new_pronouns = "they/them");

    // Method to add a hobby
    void add_hobby(std::string new_hobby);

    // Method to view profile information
    std::string view_profile();
};

#endif

