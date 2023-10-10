#include <iostream>
using namespace std;

class Base
{
public:
    void Ouput() {
        Display();  // 1、非静态成员函数调用静态成员函数
    }
    
    static void Show() {
        Display();  // 2、静态成员函数调用静态成员函数
    }

public:
    static int m_x;

    static void Display() {
        cout << "m_x = " << m_x << endl;
    }
};

int Base::m_x = 200;
int main()
{
    Base obj;

    obj.Show();

	return 0;
}

