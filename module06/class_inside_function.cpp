#include <bits/stdc++.h>
using namespace std;
class Person
{
    public:
        string name;
      int age;
      int marks1;
      int marks2;
      Person(string nm, int a, int n1, int n2)
      {
        name=nm;
        age=a;
        marks1=n1;
        marks2=n2;
      }
      int mult ()
      {
        return marks1+marks2;
      }

};

int main()
{

    Person rakib("abc", 12, 35, 35);
    cout<<rakib.mult();

    return 0;
}