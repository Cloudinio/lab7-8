#include "Motorcycle.h"
#include "Customer.h"
Motorcycle::Motorcycle() {
    brand = "unknown";
    model = "unknown";
    status = "NotRented";
}
Motorcycle::Motorcycle(std::string brand, std::string model, std::string status) {
    this->brand = brand;
    this->model = model;
    this->status = status;
}
Motorcycle::Motorcycle(Motorcycle const& other) {
    brand = other.brand;
    model = other.model;
    status = other.status;
}
Motorcycle& Motorcycle::operator=(const Motorcycle& other) {
    this->brand = other.brand;
    this->model = other.model;
    this->status = other.status;
    return *this;
}
//Renting
void Motorcycle::to_rent(Customer& cust) {
    if (this->GetStatus() != "Rented")
    {
        cust.SetMoney(cust.GetMoney() + this->GetRentPrice());
        std::string moto = this->GetBrand() + " " + this->GetModel();
        cust.SetVehicle(moto);
        this->SetStatus("Rented");
        std::cout << cust.GetName() << " rented Motorcycle \"" << moto <<
            "\" for " << this->GetRentprice() << " per day." << std::endl;
    }
    else
        std::cout << "Motorcycle can't be rented." << std::endl;
}