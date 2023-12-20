#include "Truck.h"
#include "Customer.h"
Truck::Truck()  {
    brand = "unknown";
    model = "unknown";
    status = "NotRented";
}
Truck::Truck(std::string brand, std::string model, std::string status) {
    this->brand = brand;
    this->model = model;
    this->status = status;
}
Truck::Truck(Truck const& other) {
    brand = other.brand;
    model = other.model;
    status = other.status;
}
Truck& Truck::operator=(const Truck& other) {
    this->brand = other.brand;
    this->model = other.model;
    this->status = other.status;
    return *this;
}
//Renting
void Truck::ToRent(Customer& cust) {
    if (this->get_status() != "Rented")
    {
        cust.SetBill(cust.GetMoney() + this->GetRentPrice());
        std::string truck = this->GetBrand() + " " + this->GetModel();
        cust.SetVehicle(truck);
        this->SetStatus("Rented");
        std::cout << cust.GetName() << " rented Truck \"" << truck <<
            "\" for " << this->GetRentPrice() << " per day." << std::endl;
    }
    else
        std::cout << "Truck can't be rented." << std::endl;
}