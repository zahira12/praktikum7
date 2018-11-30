#include <iostream>

using namespace std;
int total;
void hitung (){
total*= 6;
}
int main()
{
    total=3;
    total++;
    hitung();
    cout << total << endl;
    return 0;
}
