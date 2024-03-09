#include <iostream>

using namespace std;

class Vehicle
{
public:
    virtual void vehicle() = 0;
    virtual void FuelConsumption() = 0;
    virtual void GettingValue() = 0;
    virtual void CostSetting() = 0;
    virtual void Passengers() = 0;
    virtual void LiftingCapacity() = 0;
};

class Airplane : public Vehicle
{
public:
    virtual void vehicle()
    {
        cout << "Airplane " << endl;
    }
    virtual void FuelConsumption()
    {
        cout << "Fuel consumption = 500L" << endl;
    }
    virtual void GettingValue()
    {
        cout << "Getting value = 5000" << endl;
    }
    virtual void CostSetting()
    {
        cout << "Cost = 6000" << endl;
    }
    virtual void Passengers()
    {
        cout << "Passengers = 100" << endl;
    }
    virtual void LiftingCapacity()
    {
        cout << "LiftingCapacity = 1000kg" << endl;
    }
};

class Ship : public Vehicle
{
public:
    virtual void vehicle()
    {
        cout << "Ship " << endl;
    }
    virtual void FuelConsumption()
    {
        cout << "Fuel consumption = 1000L" << endl;
    }
    virtual void GettingValue()
    {
        cout << "Getting value = 5000" << endl;
    }
    virtual void CostSetting()
    {
        cout << "Cost = 6000" << endl;
    }
    virtual void Passengers()
    {
        cout << "Passengers = 150" << endl;
    }
    virtual void LiftingCapacity()
    {
        cout << "LiftingCapacity = 1000kg" << endl;
    }
};

class Truck : public Vehicle
{
public:
    virtual void vehicle()
    {
        cout << "Truck " << endl;
    }
    virtual void FuelConsumption()
    {
        cout << "Fuel consumption = 200L" << endl;
    }
    virtual void GettingValue()
    {
        cout << "Getting value = 5000" << endl;
    }
    virtual void CostSetting()
    {
        cout << "Cost = 6000" << endl;
    }
    virtual void Passengers()
    {
        cout << "Passengers = 4" << endl;
    }
    virtual void LiftingCapacity()
    {
        cout << "LiftingCapacity = 1000kg" << endl;
    }
};

class Bike : public Vehicle
{
public:
    virtual void vehicle()
    {
        cout << "Bike " << endl;
    }
    virtual void FuelConsumption()
    {
        cout << "Fuel consumption = 0L" << endl;
    }
    virtual void GettingValue()
    {
        cout << "Getting value = 5000" << endl;
    }
    virtual void CostSetting()
    {
        cout << "Cost = 6000" << endl;
    }
    virtual void Passengers()
    {
        cout << "Passengers = 1" << endl;
    }
    virtual void LiftingCapacity()
    {
        cout << "LiftingCapacity = 1kg" << endl;
    }
};

class Car : public Truck
{
public:
    virtual void vehicle()
    {
        cout << "Car " << endl;
    }
    virtual void FuelConsumption()
    {
        cout << "Fuel consumption = 80L" << endl;
    }
    virtual void GettingValue()
    {
        cout << "Getting value = 5000" << endl;
    }
    virtual void CostSetting()
    {
        cout << "Cost = 6000" << endl;
    }
    virtual void Passengers()
    {
        cout << "Passengers = 4" << endl;
    }
    virtual void LiftingCapacity()
    {
        cout << "LiftingCapacity = 100kg" << endl;
    }
};

int main()
{
    Airplane obj;
    Ship obj1;
    Truck obj2;
    Bike obj3;
    Car obj4;
    Vehicle* veh = &obj;
    veh->vehicle();
    veh->FuelConsumption();
    veh->GettingValue();
    veh->CostSetting();
    veh->LiftingCapacity();
    veh->Passengers();
    veh = &obj1;
    veh->vehicle();
    veh->FuelConsumption();
    veh->GettingValue();
    veh->CostSetting();
    veh->LiftingCapacity();
    veh->Passengers();
    veh = &obj2;
    veh->vehicle();
    veh->FuelConsumption();
    veh->GettingValue();
    veh->CostSetting();
    veh->LiftingCapacity();
    veh->Passengers();
    veh = &obj3;
    veh->vehicle();
    veh->FuelConsumption();
    veh->GettingValue();
    veh->CostSetting();
    veh->LiftingCapacity();
    veh->Passengers();
    veh = &obj4;
    veh->vehicle();
    veh->FuelConsumption();
    veh->GettingValue();
    veh->CostSetting();
    veh->LiftingCapacity();
    veh->Passengers();
}


