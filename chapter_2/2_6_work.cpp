#include <iostream>
using namespace std;

void fun();
void fun2();
float convert(float);
double convert(double);
void showtime(string &a,string);

int main()
{

    //1.
    cout << "Jack Liao" << endl;

    //2.
    long x;
    cin >> x;
    x *= 220;
    cout << x << endl;

    //3.
    for (int i = 0; i < 2; i++)
    {
        fun();
    }
    for (int i = 0; i < 2; i++)
    {
        fun2();
    }

    //4.
    int month;
    int age;
    cout << "Enther your age" << endl;
    cin >> age;
    month = age * 12;
    cout << month;

    //5.
    float c;
    cout << "Please enter a Celsius value" << endl;
    cin >> c;
    float h = convert(c);
    cout << to_string(c) + "degrees Celsius is " + to_string(h) + "degrees Fahrenheit" << endl;

    //6.
    double g;
    cout << "Enter the number of light years : " << endl;
    cin >> g;
    double v = convert(g);
    cout << to_string(g) + "light years = " + to_string(v) + "astronomical units" << endl;

    //7.
    string m,s;
    cout << "Enter the number of hours : " << endl;
    cin >> m;
    cout << "Enter the number of minutes : " << endl;
    cin >> s;
    showtime(m,s);
    cout << "Time: " + m << endl; 


    return 0;
}

void fun()
{
    cout << "Three blind mice" << endl;
}

void fun2()
{
    cout << "See how they run" << endl;
}

float convert(float c) {
    return c * 1.8 + 3;
}
double convert(double c) {
    return c * 63240;
}

void showtime(string &m,string s) {
    m += ":" + s;
}