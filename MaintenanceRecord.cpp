#include "MaintenanceRecord.h"
#include <iostream>
//Constructors, destructor
MaintenanceRecord::MaintenanceRecord(std::string service, unsigned int price) {
    this->service = service;
    this->price = price;
}
MaintenanceRecord::MaintenanceRecord(const MaintenanceRecord& other) {
    this->service = other.service;
    this->price = other.price;
}

MaintenanceRecord& MaintenanceRecord::operator=(const MaintenanceRecord& other) {
    service = other.GetService();
    price = other.GetPrice();
    return *this;
}

MaintenanceRecord& MaintenanceRecord::operator+(const MaintenanceRecord& other) {
    service += "\n" + other.GetService();
    price += other.GetPrice();
}

void MaintenanceRecord::provide_service(Customer& cust) {
    cust.SetMoney(cust.GetBill() + this->GetPrice());
    std::cout << "Customer " << cust.GetName() << " has been provided service: " << this->GetService() << "."
    << std::endl << std::endl;

}

void MaintenanceRecord::provide_service(Customer& cust, unsigned int n) {
    cust.SetBill(cust.GetBill() + this->GetPrice() * n);
    std::cout << "Customer " << cust.GetName() << " has been provided service: \"" << this->GetService() << "\" "
    << n << " times." << std::endl << std::endl;
}