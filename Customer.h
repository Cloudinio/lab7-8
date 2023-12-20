#ifndef CPP_LAB_7_8_CUSTOMER_H
#define CPP_LAB_7_8_CUSTOMER_H
#include <iostream>
class Customer
{
private:
    std::string name;
    std::string vehicle;
    double money;
public:
    //Constructors, destructor
    Customer(); 
    Customer(std::string name, std::string vehicle, double money);
    Customer(const Customer&);
    ~Customer() {}; 
    Customer& operator=(const Customer& other);
    //Getters
    inline std::string GetName() const {
        return name;
    }
    inline std::string GetVehicle() const {
        return vehicle;
    }
    inline double GetMoney() const {
        return money;
    }
    //Setters
    inline void SetName(std::string name) {
        this->name = name;
    }
    inline void SetVehicle(std::string vehicle) {
        this->vehicle = vehicle;
    }
    inline void SetMoney(double money) {
        this->money = money;
    }
};
//Input, output
std::istream& operator>>(std::istream& in, Customer& c);
std::ostream& operator<<(std::ostream& o, const Customer& c);

#endif //CPP_LAB_7_8_CUSTOMER_H