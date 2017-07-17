#include <iostream>
#include <string>

class Moebel{
protected:

public:
Moebel()=default;
Moebel(int stuhl);
virtual int printName();
Moebel(const Moebel &obj) = delete;
};

class Schrank:public Moebel
{
protected:
    
public:
int printName() override;
};
