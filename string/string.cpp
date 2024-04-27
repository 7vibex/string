// string.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>


int main()
{
    //char c = 'c';
    //std::cout << c << std::endl;
    //std::string nume;
    //nume = "Marius  ";
    //std::cout << nume << std::endl;
    //std::string prenume = "Macarenco";
    //std::cout << prenume << std::endl;
    //std::string nume_complet = nume + "" + prenume; //concatenare
    //std::cout << "Numele meu este " << nume_complet << std::endl;
    //std::string nume_utilizator, prenume_utilizator;
    //std::cout << "Cum te cheama ? " << std::endl;
    //std::cin >> prenume_utilizator;
    //std::cout << "Care este nume de familie \n";
    //std::cin >> nume_utilizator;
    //std::cout << "Salutare" << nume_utilizator + ' ' + prenume_utilizator << std::end;
    std::cout << "Care este numele tau complet?" << std::endl;
    std::string nume_user_complet;
    std::getline(std::cin, nume_user_complet);
    std::cout << nume_user_complet << std::endl;
        double celsius;
         
        std::cout << "Introduceti temperatura in grade Celsius: ";
        std::cin >> celsius;

        double fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

        std::cout << "Temperatura in grade Fahrenheit: " << fahrenheit << std::endl;



        int numarPesti;
        std::cout << "Introduceti numarul de pesti: ";
        std::cin >> numarPesti;
        int ciorbeTrio = numarPesti / 3;
        std::cout << "Se pot preg?ti " << ciorbeTrio << " ciorbe trio." << std::endl;






        std::string nume, prenume, nume_complet;

        std::cout << "Numele dvs : "; std::cin >> nume; std::cout <<  std::endl;
            std::cout << "Prenumele dvs: "; std::cin >> prenume; std::cout << std::endl; 
       // nume_complet = prenume +" " + nume;
        std::cout << "Introdu numele complet" << std::endl;
        std::cin.ignore();
             std::getline(std::cin, nume_complet); 
             std::cout << nume_complet<< std::endl;

             void printHello(std::string nume)
             {
                 std::cout << "Hello World" << nume << std::endl;
             }
             int main()
                 {
                 


                 }
             

        return 0;
    
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
