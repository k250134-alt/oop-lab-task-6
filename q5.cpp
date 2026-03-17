#include <iostream>
using namespace std;

class Vehicle {
protected:
    string make, model;
    int year;

public:
    Vehicle(string mk, string md, int y) : make(mk), model(md), year(y) {}

    void showVehicle() {
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

class Car : public Vehicle {
protected:
    int doors;
    double fuelEfficiency;

public:
    Car(string mk, string md, int y, int d, double fe)
        : Vehicle(mk, md, y), doors(d), fuelEfficiency(fe) {}

    void showCar() {
        showVehicle();
        cout << "Doors: " << doors << endl;
        cout << "Fuel Efficiency: " << fuelEfficiency << endl;
    }
};

class ElectricCar : public Car {
private:
    int batteryLife;

public:
    ElectricCar(string mk, string md, int y, int d, double fe, int bl)
        : Car(mk, md, y, d, fe), batteryLife(bl) {}

    void display() {
        cout << "Electric Car Details:\n";
        showCar();
        cout << "Battery Life: " << batteryLife << endl;
    }
};

int main() {
    ElectricCar e("Tesla", "Model 3", 2023, 4, 0, 85);
    e.display();
    return 0;
}
