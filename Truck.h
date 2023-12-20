#ifndef CPP_LAB_7_8_TRUCK_H
#define CPP_LAB_7_8_TRUCK_H
#include "Vehicle.h"
#include "Customer.h"
class Truck : public Vehicle 
{
private:
    static const unsigned int rent_price = 2500;
public:
    //Constructors, destructor
    Truck(); 
    Truck(std::string brand, std::string model, std::string status);
    Truck(const Truck&); 
    ~Truck() 
    {};
    Truck& operator=(const Truck& other);
    //Renting
    double GetRentPrice() const;
    void ToRent(Customer& cust);
};
#endif //CPP_LAB_7_8_TRUCK_H