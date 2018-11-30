#include <iostream>

using namespace std;
void hitung(){
    int total =2;
    total *=3;
    cout<< "total pada lain() ="<<total<<endl;
}
int main()
{
    int total =2;
    total++;
    hitung();
    cout << "total pada main()=" <<total<< endl;
    return 0;
}
