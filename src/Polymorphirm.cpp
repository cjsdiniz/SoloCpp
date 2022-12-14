#include <iostream>
using namespace std;

class Enemy {
 protected: 
  int attackPower;

 public:
  void setAttackPower(int a){
   attackPower = a;
  }
  virtual void attack() {
    cout << "Enemy!"<<endl;
   }
};

class Ninja: public Enemy {
 public:
  void attack() {
   cout << "Ninja! - "<<attackPower<<endl;
  }
};

class Monster: public Enemy {
 public:
  void attack() {
   cout << "Monster! - "<<attackPower<<endl;
  }
};

int main() {   
 Ninja n;
 Monster m;
 Enemy e;

 Enemy *e1 = &n;
 Enemy *e2 = &m;
 Enemy *e3 = &e;


e1->setAttackPower(20);
e2->setAttackPower(80);

/*
n.attack();
m.attack();
*/

e1->attack();
e2->attack();
e3->attack();

}

