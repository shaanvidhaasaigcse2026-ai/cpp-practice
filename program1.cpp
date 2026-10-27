#include <iostream>
using namespace std;
class student
{
private:
    int Rollno;
    string name;

public:
    student(int r, string n)
    {
        Rollno = r;
        name = n;
        cout << "student object created" << endl;
    }
    void display()
    {
        cout << "Roll number:" << Rollno << endl;
        cout << "name:" << name << endl;
    }
    ~student()
    {
        cout << "student object destroyed" << endl;
    }
};
int main()
{
    student s1(101, "Arun");
    s1.display();
    return 0;
}
