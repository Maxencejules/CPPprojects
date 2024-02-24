#include "profile.hpp"

Profile::Profile(std::string new_name, int new_age, std::string new_city, std::string new_country, std::string new_pronouns)
    : name(new_name), age(new_age), city(new_city), country(new_country), pronouns(new_pronouns) {}

void Profile::add_hobby(std::string new_hobby) {
    hobbies.push_back(new_hobby);
}

std::string Profile::view_profile() {
    std::string bio = "Name: " + name + "\n";
    bio += "Age: " + std::to_string(age) + "\n";
    bio += "City: " + city + "\n";
    bio += "Country: " + country + "\n";
    bio += "Pronouns: " + pronouns + "\n";
    bio += "Hobbies:\n";
    for (const std::string& hobby : hobbies) {
        bio += " - " + hobby + "\n";
    }
    return bio;
}

