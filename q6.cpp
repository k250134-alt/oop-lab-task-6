#include <iostream>
using namespace std;

class Device {
protected:
    string brand, model;

public:
    Device(string b = "", string m = "") {
        brand = b;
        model = m;
    }

    void showDevice() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
    }
};

class Smartphone : virtual public Device {
protected:
    int simSlots;

public:
    Smartphone(string b, string m, int s)
        : Device(b, m) {
        simSlots = s;
    }
};

class Tablet : virtual public Device {
protected:
    bool stylus;

public:
    Tablet(string b, string m, bool st)
        : Device(b, m) {
        stylus = st;
    }
};

class HybridDevice : public Smartphone, public Tablet {
public:
    HybridDevice(string b, string m, int s, bool st)
        : Device(b, m), Smartphone(b, m, s), Tablet(b, m, st) {}

    void display() {
        showDevice();
        cout << "SIM Slots: " << simSlots << endl;
        cout << "Stylus Support: " << (stylus ? "Yes" : "No") << endl;
    }
};

int main() {
    HybridDevice h("Samsung", "HybridX", 2, true);
    h.display();
    return 0;
}
