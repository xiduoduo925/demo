#include <iostream>

using namespace std;

class Base1 {
public:
    Base1() {
        cout << "Base1 construction" << endl;
    }
    ~Base1() {
        cout << "Base1 destruction" << endl;
    }
};

class Base {
public:
    Base() {
        cout << "Base construction" << endl;
    }
    ~Base() {
        cout << "Base destruction" << endl;
    }

private:
    // 添加成员变量
    Base1 b1;
};

class Drive1 {
public:
    Drive1() {
        cout << "Drive1 construction" << endl;
    }
    ~Drive1() {
        cout << "Drive1 destruction" << endl;
    }
};

class Drive : public Base{
public:
    Drive() {
        cout << "Drive construction" << endl;
    }
    ~Drive() {
        cout << "Drive destruction" << endl;
    }
private:
    Drive1 d1;
};


// ==================================
class MBase1 {
public:
    MBase1() {
        cout << "MBase1 construction" << endl;
    }
    ~MBase1() {
    
        cout << "MBase1 destruction" << endl;
    }
};

class MBase2 {
public:
    MBase2() {
        cout << "MBase2 construction" << endl;
    }
    ~MBase2() {
            cout << "MBase2 destruction" << endl;
    }
};

class MDrive1 {
public:
    MDrive1() {
        cout << "MDrive1 construction" << endl;
    }
    ~MDrive1() {
    
        cout << "MDrive1 destruction" << endl;
        
    }
};

class MDrive : public MBase1, public MBase2{    // MDrive依赖于MBase1和MBase2
public:
    MDrive() {
        cout << "MDrive construction" << endl;
     }
    ~MDrive() {
    
        cout << "MDrive destruction" << endl;
    }
};

int main(){
    Drive d;
    return 0;
}