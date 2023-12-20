#ifndef CPP_LAB_7_8_MOTORCYCLE_H
#define CPP_LAB_7_8_MOTORCYCLE_H
#include "Vehicle.h"
#include "Customer.h"
class Motorcycle : public Vehicle
{
private:
    static const int rent_price = 1500;
public:
    //Constructors, destructor
    Motorcycle(); 
    Motorcycle(std::string brand, std::string model, std::string status);
    Motorcycle(const Motorcycle&); 
    ~Motorcycle() 
    {};
    Motorcycle& operator=(const Motorcycle& other);
    //Renting
    double GetRentPrice() const;
    void ToRent(Customer& cust);
};
#endif 