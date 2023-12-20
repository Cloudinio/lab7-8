#ifndef CPP_LAB_7_8_CAR_H
#define CPP_LAB_7_8_CAR_H
#include "Vehicle.h"
#include "Customer.h"
class Car : public Vehicle
{
private:
    static const unsigned int rent_price = 2000;
public:
    //Constructors, destructor
    Car(); 
    Car(std::string brand, std::string model, std::string status);
    Car(const Car&); 
    ~Car() 
    {};
    Car& operator=(const Car& other); 
    //Renting
    double get_rent_price() const;
    void to_rent(Customer& cust);
};
#endif 