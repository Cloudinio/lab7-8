#ifndef Vehicle_h
#define Vehicle_h

#include <iostream>
#include <cstring>
#include "Customer.h"
class Vehicle {
protected:
    std::string brand;
    std::string model;
    std::string status; 
    static unsigned int rent_price;
public:
    //Constructors, destructor
    Vehicle(); 
    Vehicle& operator=(const Vehicle& other);
    //Getters
    inline std::string GetBrand() const {
        return brand;
    }
    inline std::string GetModel() {
        return model;
    }
    inline std::string GetStatus() const {
        return status;
    }
    //Setters
    inline void SetBrand(std::string brand) {
        this->brand = brand;
    }
    inline void SetModel(std::string model) {
        this->model = model;
    }
    inline void SetStatus(std::string status) {
        this->status = status;
    }
    void SetAll(std::string brand, std::string model, std::string status) {
        this->set_brand(brand);
        this->set_model(model);
        this->set_status(status);
    }
    //Rent
    virtual double GetRentPrice() const {};
    virtual void ToRent(const Customer& cust) {};
};
//Input, output
std::istream& operator>>(std::istream& in, Vehicle& v);
std::ostream& operator<<(std::ostream& o, const Vehicle& v);
#endif