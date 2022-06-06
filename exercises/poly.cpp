#include <iostream>
#include <string>
using namespace std;


class Animal {
  public:
    void animalSound() {
      cout << "The animal makes a sound " <<endl;
    }
};

class lion : public Animal {
  public:
    void animalSound() {
      cout << "The lion says: roar "<<endl ;
    }
};

class lizerd : public Animal {
  public:
    void animalSound() {
      cout << "The lizerd says: chrip chrip "<<endl ;
    }
};

int main() {
  Animal a1;
  lion l1;
  lizerd z1;

  a1.animalSound();
  l1.animalSound();
  z1.animalSound();
  
}
