#include <iostream>

using namespace std;

class Vehicle
{
protected:
    int fuel;
    int value;
    int cost;
    int passenger;
    int lifting;
public:
    Vehicle(int fuel,int value, int cost, int passenger, int lifting)
    {
        this->fuel = fuel;
        this->value = value;
        this->cost = cost;
        this->passenger = passenger;
        this->lifting = lifting;
    }
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
    Airplane(int fuel, int value, int cost, int passenger, int lifting) : Vehicle(fuel,value,cost,passenger,lifting) {}
 
    virtual void vehicle()
    {
        cout << "Airplane " << endl;
    }
    virtual void FuelConsumption()
    {
        cout << "Fuel consumption = " << fuel << endl;
    }
    virtual void GettingValue()
    {
        cout << "Getting value = " << value << endl;
    }
    virtual void CostSetting()
    {
        cout << "Cost = " << cost << endl;
    }
    virtual void Passengers()
    {
        cout << "Passengers = " << passenger << endl;
    }
    virtual void LiftingCapacity()
    {
        cout << "LiftingCapacity = " << lifting << endl;
    }
};

class Ship : public Vehicle
{
public:
    Ship(int fuel, int value, int cost, int passenger, int lifting) : Vehicle(fuel, value, cost, passenger, lifting) {}

    virtual void vehicle()
    {
        cout << "Ship " << endl;
    }
    virtual void FuelConsumption()
    {
        cout << "Fuel consumption = " << fuel << endl;
    }
    virtual void GettingValue()
    {
        cout << "Getting value = " << value << endl;
    }
    virtual void CostSetting()
    {
        cout << "Cost = " << cost << endl;
    }
    virtual void Passengers()
    {
        cout << "Passengers = " << passenger << endl;
    }
    virtual void LiftingCapacity()
    {
        cout << "LiftingCapacity = " << lifting << endl;
    }
};

class Truck : public Vehicle
{
public:
    Truck(int fuel, int value, int cost, int passenger, int lifting) : Vehicle(fuel, value, cost, passenger, lifting) {}

    virtual void vehicle()
    {
        cout << "Truck " << endl;
    }
    virtual void FuelConsumption()
    {
        cout << "Fuel consumption = " << fuel << endl;
    }
    virtual void GettingValue()
    {
        cout << "Getting value = " << value << endl;
    }
    virtual void CostSetting()
    {
        cout << "Cost = " << cost << endl;
    }
    virtual void Passengers()
    {
        cout << "Passengers = " << passenger << endl;
    }
    virtual void LiftingCapacity()
    {
        cout << "LiftingCapacity = " << lifting << endl;
    }
};

class Bike : public Vehicle
{
public:
    Bike(int fuel, int value, int cost, int passenger, int lifting) : Vehicle(fuel, value, cost, passenger, lifting) {}

    virtual void vehicle()
    {
        cout << "Bike " << endl;
    }
    virtual void FuelConsumption()
    {
        cout << "Fuel consumption = " << fuel << endl;
    }
    virtual void GettingValue()
    {
        cout << "Getting value = " << value << endl;
    }
    virtual void CostSetting()
    {
        cout << "Cost = " << cost << endl;
    }
    virtual void Passengers()
    {
        cout << "Passengers = " << passenger << endl;
    }
    virtual void LiftingCapacity()
    {
        cout << "LiftingCapacity = " << lifting << endl;
    }
};

class Car : public Truck
{
public:
    Car(int fuel, int value, int cost, int passenger, int lifting) : Truck(fuel, value, cost, passenger, lifting) {}

    virtual void vehicle()
    {
        cout << "Car " << endl;
    }
    virtual void FuelConsumption()
    {
        cout << "Fuel consumption = " << fuel << endl;
    }
    virtual void GettingValue()
    {
        cout << "Getting value = " << value << endl;
    }
    virtual void CostSetting()
    {
        cout << "Cost = " << cost << endl;
    }
    virtual void Passengers()
    {
        cout << "Passengers = " << passenger << endl;
    }
    virtual void LiftingCapacity()
    {
        cout << "LiftingCapacity = " << lifting << endl;
    }
};

int main()
{
    Airplane* obj = new Airplane(1, 1, 1, 1, 1);
    Ship* obj1 = new Ship(1, 1, 1, 1, 1);
    Truck* obj2 = new Truck(1, 1, 1, 1, 1);
    Bike* obj3 = new Bike(1,1,1,1,1);
    Car* obj4 = new Car(1,1,1,1,1);

    obj->vehicle();
    obj->FuelConsumption();
    obj->GettingValue();
    obj->CostSetting();
    obj->LiftingCapacity();
    obj->Passengers();
    delete obj;
    cout << endl;

    obj1->vehicle();
    obj1->FuelConsumption();
    obj1->GettingValue();
    obj1->CostSetting();
    obj1->LiftingCapacity();
    obj1->Passengers();
    delete obj1;
    cout << endl;
    
    obj2->vehicle();
    obj2->FuelConsumption();
    obj2->GettingValue();
    obj2->CostSetting();
    obj2->LiftingCapacity();
    obj2->Passengers();
    delete obj2;
    cout << endl;

    obj3->vehicle();
    obj3->FuelConsumption();
    obj3->GettingValue();
    obj3->CostSetting();
    obj3->LiftingCapacity();
    obj3->Passengers();
    delete obj3;
    cout << endl;

    obj4->vehicle();
    obj4->FuelConsumption();
    obj4->GettingValue();
    obj4->CostSetting();
    obj4->LiftingCapacity();
    obj4->Passengers();
    delete obj4;

   
}


