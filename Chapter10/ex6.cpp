#include <iostream>

class Move{
private:
    double x;
    double y;
public:
    Move(double a = 0, double b = 0);
    void showmove() const;
    Move add(const Move & m);
    void reset(double a = 0, double b = 0);
};

Move::Move(double a, double b) {
    x = a;
    y = b;
}

void Move::showmove() const {
    std::cout << "x: " << x << ", y: " << y << std::endl;
}

Move Move::add(const Move &m) {
    x += m.x;
    y += m.y;
    return *this;
}

void Move::reset(double a, double b) {
    x = a;
    y = b;
}

int main(){
    Move m1, m2(3, 4);
    m1.showmove();
    m1.add(m2);
    m1.showmove();
    m1.reset();
    m1.showmove();
    
}