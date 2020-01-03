#include <iostream>
using namespace std;

const double IN_2_FT = 0.0833333;  // 英寸 转 英尺
const int FT_2_IN = 12;            //   英尺 转 英寸
const double IN_2_M = 0.0254;      // 英寸 转 米
const double LBS_2_KG = 0.4535924; // 磅 转 千克

void test1();
double convertIn2Ft(double);

void test2();

int main()
{
    test2();
}

void test1()
{
    cout << "Enter your height:________\b\b\b\b\b\b\b\b";
    float height;
    cin >> height;
    height = convertIn2Ft(height);
    cout << height << endl;
}

double convertIn2Ft(double in)
{
    return in * IN_2_FT;
}

void test2()
{

    int ft, in, weight;
    cin >> ft >> in >> weight;
    in += ft * FT_2_IN;

    double m = in * IN_2_M;
    double kg = weight * LBS_2_KG;

    cout << (m / kg) * (m / kg) << endl;
    //cout << ft << "  " << in << "  " << weight;
}