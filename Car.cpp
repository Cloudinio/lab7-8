#include "Car.h"
#include "Customer.h"
Car::Car() {
    brand = "unknown";
    model = "unknown";
    status = "NotRented";
}
Car::Car(std::string brand, std::string model, std::string status) {
    this->brand = brand;
    this->model = model;
    this->status = status;
}
Car::Car(Car const& other) {
    brand = other.brand;
    model = other.model;
    status = other.status;
}
Car& Car::operator=(const Car& other) {
    this->brand = other.brand;
    this->model = other.model;
    this->status = other.status;
    return *this;
}
//Renting
void Car::ToRent(Customer& cust) {
    if (this->GetStatus() != "Rented")
    {
        cust.SetMoney(cust.GetMoney() + this->GetRentPrice());
        std::string car = this->GetBrand() + " " + this->GetModel();
        cust.SetVehicle(car);
        this->SetStatus("Rented");
        std::cout << cust.GetName() << " rented Car \"" << car <<
            "\" for " << this->GetRentPrice() << " per day." << std::endl;
    }
    else
        std::cout << "Car can't be rented." << std::endl;
}