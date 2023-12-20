#include <iostream>
#include <fstream>
#include "Car.h"
#include "Truck.h"
#include "Motorcycle.h"
#include "Customer.h"
#include "MaintenanceRecord.h"
int main() {
    int k;
    std::string service;
    std::cout << "Welcome to the transport rental and service system! What do you need?" << std::endl;
    Customer cust = Customer();
    std::cout << "Insert customer:" << std::endl;
    std::cin >> cust;
    std::cout << "Nice! Our customer is:" << std::endl;
    std::cout << cust << std::endl;
    std::cout << "Let's add some vehicles!" << std::endl;
    Car car = Car();
    Truck truck = Truck();
    Motorcycle moto = Motorcycle();
    std::cout << "Insert car:" << std::endl; 
    std::cin >> car;
    std::cout << car << std::endl;

    std::cout << "Insert truck:" << std::endl; 
    std::cin >> truck;
    std::cout << truck << std::endl;

    std::cout << "Insert motorcycle:" << std::endl; 
    std::cin >> moto;
    std::cout << moto << std::endl;

    std::cout << "We will try to rent all these vehicles for " << cust.GetName() << "." << std::endl;
    car.ToRent(cust);
    truck.ToRent(cust);
    moto.ToRent(cust);

    std::cout << "What service does " << cust.GetName() << " need? Insert it (in one word)." << std::endl;
    std::cin >> service;
    MaintenanceRecord rec = MaintenanceRecord(service, 500);
    std::cout << "How many times should we provide the service?" << std::endl;
    std::cin >> k;
    if (k == 1)
        rec.ProvideService(cust);
    else
        rec.ProvideService(cust, k);

    std::cout << "We are ready to give bill to the customer " << cust.GetName() << '.' << std::endl;
    std::cout << cust;
}