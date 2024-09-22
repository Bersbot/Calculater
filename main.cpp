#include <iostream>
#include <cmath>

using namespace std;

int main(){
    setlocale(LC_ALL, "Russian");
    float a, b;
    char c;
    cout << "Ввидите математический пример." << endl;
    cin >> a >> c >> b;
    switch(c){
        case '+': cout << a + b; break;
        case '-': cout << a - b; break;
        case '*': cout << a * b; break;
        case '^': cout << pow(a, b); break;
        case '%': cout << pow(a, 1/b); break;
    }
    cout << "\nВвидите что-то чтобы выйти: ";
    cin >> c;
    return 0;
}
