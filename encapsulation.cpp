#include<iostream>
using namespace std;

class stu{
   private:
   string name;
   int Age=20;
   int Health;

   public:
   int getAge(){
    return this->Age;
   }

};

int main(){
   stu h;

   cout<<h.getAge();
   return 0;
}