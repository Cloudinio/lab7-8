#ifndef CPP_LAB_7_8_MAINTENANCERECORD_H
#define CPP_LAB_7_8_MAINTENANCERECORD_H
#include <iostream>
#include "Customer.h"
class MaintenanceRecord {
private:
    std::string service; 
    unsigned int price; 

public:
    //Constructors, destructor
    MaintenanceRecord(std::string service, unsigned int price);
    MaintenanceRecord(const MaintenanceRecord&); 
    ~MaintenanceRecord() {}; 
    MaintenanceRecord& operator=(const MaintenanceRecord& other); 
    MaintenanceRecord& operator+(const MaintenanceRecord& other);
    //Getters
    inline std::string GetService() const {
        return service;
    }
    inline unsigned int GetPrice() const {
        return price;
    }
    //Setters
    inline void SetService(std::string service) {
        this->service = service;
    }
    inline void SetPrice(unsigned int price) {
        this->price = price;
    }
    void ProvideService(Customer& cust);
    void ProvideService(Customer& cust, unsigned int n);
};
#endif //CPP_LAB_7_8_MAINTENANCERECORD_H