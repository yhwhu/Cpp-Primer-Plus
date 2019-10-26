#include <iostream>
#include <cstring>

class Plorg{
private:
    char name_[19]{};
    int CI_;

public:
    Plorg(const char *name = "Plorga", int CI = 50);
    void revise(int c);
    void show() const ;
};

Plorg::Plorg(const char *name, int CI) {
    strcpy(name_, name);
    CI_ = CI;
}

void Plorg::revise(int c) {
    CI_ = c;
}
void Plorg::show() const {
    std::cout << "name: " << name_ << ", CI: " << CI_ << std::endl;
}

int main(){
    Plorg p("apple");
    p.show();
    p.revise(100);
    p.show();
}