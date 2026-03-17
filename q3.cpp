#include <iostream>
using namespace std;

class Position {
protected:
    int x, y, z;

public:
    Position(int x1 = 0, int y1 = 0, int z1 = 0) {
        x = x1;
        y = y1;
        z = z1;
    }

    void setPosition(int x1, int y1, int z1) {
        x = x1;
        y = y1;
        z = z1;
    }

    void showPosition() {
        cout << "Position: (" << x << ", " << y << ", " << z << ")\n";
    }
};

class Health {
protected:
    int health;

public:
    Health(int h = 100) {
        health = h;
    }

    void setHealth(int h) {
        health = h;
    }

    void showHealth() {
        cout << "Health: " << health << endl;
    }
};

class Character : public Position, public Health {
public:
    Character(int x, int y, int z, int h)
        : Position(x, y, z), Health(h) {}

    void display() {
        cout << "Character Stats:\n";
        showPosition();
        showHealth();
    }
};

int main() {
    Character c(10, 20, 30, 80);
    c.display();
    return 0;
}
