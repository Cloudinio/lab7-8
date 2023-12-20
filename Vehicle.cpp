#include "Vehicle.h"
#include <iostream>
#include <cstring>
//Constructors, destructor
Vehicle::Vehicle()  {
    brand = "unknown";
    model = "unknown";
    status = "NotRented";
}
Vehicle& Vehicle::operator=(const Vehicle& other)  {
    brand = other.brand;
    model = other.model;
    status = other.status;
    return *this;
}
//Input, output
std::istream& operator>>(std::istream& in, Vehicle& v) {
    std::string brand, model, status;
    in >> brand >> model >>  status;
    v.SetAll(brand, model, status);
    return in;
}
std::ostream& operator<<(std::ostream& out, const Vehicle& v) {
    if (v.GetBrand() == "unknown")
        out << "Unknown vehicle";
    else {
        out << "Brand: " << v.GetBrand() << std::endl;
        out << "Model: " << v.GetModel() << std::endl;
        out << "Status: " << v.GetStatus() << std::endl;
        if (v.GetStatus() == "NotRented")
            out << "Rent price: " << v.GetRentPrice() << std::endl;
    }
    return out;
}