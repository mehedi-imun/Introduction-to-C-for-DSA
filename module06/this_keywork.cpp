#include <bits/stdc++.h>
using namespace std;
class Person
{
    public:
        string name;
      int age;
      int marks1;
      int marks2;
      Person(string name,int age, int marks1, int marks2)
      {
        this->name=name;
        this->age=age;
        this->marks1=marks1;
        this->marks2=marks2;
      }
      int mult ()
      {
        return marks1+marks2;
      }

};

int main()
{

    Person rakib("abc", 12, 10, 10);
    cout<<rakib.mult();

    return 0;
}