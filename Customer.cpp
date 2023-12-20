#include "Customer.h"
//constructors and distuctors
Customer::Customer() {
    name = "unknown";
    vehicle = "None";
    money = 0;
}
Customer::Customer(std::string name, std::string vehicle, double money) {
    this->name = name;
    this->vehicle = vehicle;
    this->money = money;
}
Customer::Customer(const Customer& other) {
    name = other.name;
    vehicle = other.vehicle;
    money = other.money;
}
Customer& Customer::operator=(const Customer& other) {
    name = other.name;
    vehicle = other.vehicle;
    money = other.money;
    return *this;
}
//Input, output
std::istream& operator>>(std::istream& in, Customer& c)
{
    std::string name;
    std::string vehicle;
    double money;
    in >> name >> vehicle >> money;
    c.SetName(name);
    c.SetVehicle(vehicle);
    c.SetMoney(money);
    return in;
}
std::ostream& operator<<(std::ostream& out, const Customer& c)
{
    if (c.GetName() == "unknown")
        out << "Unknown customer" << std::endl;
    else
    {
        out << "Customer's name: " << c.GetName() << std::endl;
        out << "Customer's vehicle: " << c.GetVehicle() << std::endl;
        out << "Customer's bill: " << c.GetMoney() << std::endl;
    }
    return out;
}