#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"

int main(void)
{
    PhoneBook Phone;
    std::string choice;
    std::string info[5];

    Phone.PhoneBookIntro();
    while (1)
    {
        std::getline(std::cin, choice);
        std::cout<<std::endl;
        if (choice == "ADD")
        {
            std::cout<<"First Name : ";
            std::getline(std::cin, info[0]);
            std::cout<<"Last Name : ";
            std::getline(std::cin, info[1]);
            std::cout<<"Nickname : ";
            std::getline(std::cin, info[2]);
            while (1)
            {
                std::cout<<"Number : ";
                std::getline(std::cin, info[3]);
                if (Phone.PhoneBookCheckIsNumber(info[3]) == 1)
                    break;
                std::cout<<"Invalid Number, please retry ! 🤬"<<std::endl;
            }
            std::cout<<"Dakest Secret : ";
            std::getline(std::cin, info[4]);
            Phone.PhoneBookAdd(info);
            std::cout<<"\033[1;32mContact Was Successfuly Added !\033[0;0m\n"<<std::endl;
        }
        else if (choice == "SEARCH")
        {
            Phone.PhoneBookSearchIntro();
            continue;
        }
        else if (choice == "EXIT")
        {
            break;
        }
        else
        {
            std::cout<<"Invalide input, please retry ! 🤬"<<std::endl;
        }
        std::cout<<"Please choose an option, ADD / SEARCH / EXIT"<<std::endl;
        std::cout<<"I want : ";
    }
    return (0);
}