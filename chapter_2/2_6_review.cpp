#include <iostream>




int main() {

    using namespace std;
    
    std::cout << "Hello World" << endl;

    int cheeses;
    cheeses = 32;
    //cin >> cheeses;

    string s = "123";
    // to_string() int to string
    // s.c_str() 
    // atoi(s.c_str()) string to int
    cout << atoi(s.c_str()) + 1 << endl;
    std::cout << "We have " + to_string(cheeses) + " ovarieties of cheese" << endl;
}