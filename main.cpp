#include <iostream>
#include <unistd.h>
using namespace std;

class Car {
  public:
    string brand;   
    string model;
    string year;
    string color;
    string price;
    string seats;
    string fuel;
    string type;
};

int main(){
    
    while(1){
        Car carObj1;
        carObj1.brand = "BMW";
        carObj1.model = "X5";
        carObj1.year = "2022";
        carObj1.color = "Blue";
        carObj1.price = "£55,000";
        carObj1.seats = "5";
        carObj1.fuel = "Hybrid Unleaded";
        carObj1.type = "SUV All-terrain Vehicle";

        Car carObj2;
        carObj2.brand = "Nissan";
        carObj2.model = "Skyline GTR";
        carObj2.year = "1972";
        carObj2.color = "Blue";
        carObj2.price = "£113,540";
        carObj2.seats = "4";
        carObj2.fuel = "Diesel";
        carObj2.type = "Sports Car/Grand Tourer";

        Car carObj3;
        carObj3.brand = "Toyota";
        carObj3.model = "Corolla";
        carObj3.year = "2020";
        carObj3.color = "Blue";
        carObj3.price = "£20,500";
        carObj3.seats = "5";
        carObj3.fuel = "Hybrid Unleaded";
        carObj3.type = "Hatchback";

        Car carObj4;
        carObj4.brand = "Honda";
        carObj4.model = "Accord 2L Turbo";
        carObj4.year = "2020";
        carObj4.color = "Blue";
        carObj4.price = "£31000";
        carObj4.seats = "5";
        carObj4.fuel = "hybrid";
        carObj4.type = "Mid Size Car";

        int choice = 0;
        cout << "Wlecome to the Vehicle Catalogue. Please enter a number to see more information about the selected vehicle." << "\n" << "1. BMW X5" << "\n" 
        << "2. Nissan Skyline GTR" << "\n" << "3. Toyota Corolla" << "\n " << "4. Honda Accord 2L Turbo" << "\n " << "5. Exit" << "\n\n" << "Enter your choice: ";
        cin >> choice;
        sleep(2);

        if (choice == 1) {
            cout << carObj1.brand << "\n" << carObj1.model << "\n" << carObj1.year << "\n" << carObj1.color << "\n" << carObj1.price << "\n" << carObj1.seats << "\n" << carObj1.fuel <<
            "\n" << carObj1.type << "\n\n";
        }

        else if (choice == 2) {
            cout << carObj2.brand << "\n" << carObj2.model << "\n" << carObj2.year << "\n" << carObj2.color << "\n" << carObj2.price << "\n" << carObj2.seats << "\n" << carObj2.fuel <<
            "\n" << carObj2.type << "\n\n";
        }
        
        else if (choice == 3) {
            cout << carObj3.brand << "\n" << carObj3.model << "\n" << carObj3.year << "\n" << carObj3.color << "\n" << carObj3.price << "\n" << carObj3.seats << "\n" << carObj3.fuel <<
            "\n" << carObj3.type << "\n\n";
        }

        else if (choice == 4) {
            cout << carObj4.brand << "\n" << carObj4.model << "\n" << carObj4.year << "\n" << carObj4.color << "\n" << carObj4.price << "\n" << carObj4.seats << "\n" << carObj4.fuel <<
            "\n" << carObj4.type << "\n\n";
        }


        else if (choice == 5){
            exit(0);
        }

        else if (choice > 5 ){
            cout << "Please enter a correct number" << "\n";
            sleep(0.5);
        };
    };
};