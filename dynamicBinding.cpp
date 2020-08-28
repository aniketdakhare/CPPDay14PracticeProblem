#include <iostream>

using namespace std;

class Vehicle
{
    public:
        virtual void vehicleType() = 0;
};

class Car : public Vehicle
{
    void vehicleType()
    {
        cout << "Vehicle type is Car" << endl;
    }
};

class Bike : public Vehicle
{
    void vehicleType()
    {
        cout << "Vehicle type is Bike" << endl;
    }    
};

int main()
{
    Vehicle* vehicle = new Car;
    vehicle->vehicleType();
    vehicle = new Bike;
    vehicle->vehicleType();
}