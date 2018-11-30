#include <iostream>

using namespace std;
void tukar(int &a, int &b){
    a=30;
    b=60;
}
int main()
{
    int a,b;
    a=60;
    b=30;
    cout << "Angka a = " <<a<< endl;
    cout << "Angka b = " <<b<< endl;
    cout << "Setelah Ditukar"<< endl;
    tukar(a,b);
    cout << "Angka a = " <<a<< endl;
    cout << "Angka b = " <<b<< endl;
    return 0;
}
