# praktikum7
# latihan1 # Menukar Angka Dari 2 Variabel
	~Alur Algoritmanya
	-Mendeklarasikan int a sebagai Angka input.
	-Mendeklarasikan int b sebagai Angka input.
	-Mendeklarasikan Variabel a & b sebagai angka masukan
	-Masukan Angka a & b
	-Menukar Angka a & b dengan 2 buah Variabel
			  int a,b;
			  a=60;
			  b=30;
			  cout << "Angka a = " <<a<< endl;
			  cout << "Angka b = " <<b<< endl;
			  cout << "Setelah Ditukar"<< endl;
	-Menukar 2 Angka  tukar(a,b);
	-Mencetak Angka	  cout << "Angka a = " <<a<< endl;
			  cout << "Angka b = " <<b<< endl;

~ Berikut Kode Lengkapnya

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

~ Berikut Flowchartnya

![img](https://github.com/zahira12/praktikum7/blob/master/flowchartLatihan1.png)

~ Berikut Hasil Screenshotnya

![img](https://github.com/zahira12/praktikum7/blob/master/latihan1/Screenshot1.png)


# Latihan2 # Fungsi Perkalian 2 buah Bilangan
	~Alur Algoritmanya
	-Mendeklarasikan int M , int N
		int kali (int m, int n)
	{
		int i,hasil=0;
		for(i=1;i<=n;i++)
			hasil+=m;
		if (n<0)
		{
		return(-hasil);
		}
	else
		{
		return(hasil);
		}
	}
	-Mendeklarasikan Variabel a, b sebagai nilai masukan
	-Masukan angka a,b
		int main()
	{
		int a,b;
		cout<<"Masukan Angka :";
		cin>> a;
		cout<<"Masukan Angka :";
		cin>> b;
	-Cetak angka hasil dari 2 Variabel yang di kali
		cout << "\n\nHasil dari " << a <<" X "<< b <<" = "<<kali(a,b);
		return 0;
	}

~ Berikut Kode Lengkapnya

	#include <iostream>

		using namespace std;
		int kali (int m, int n)
	{
  		int i,hasil=0;
	for(i=1;i<=n;i++)
		hasil+=m;
	if (n<0)
		{
		return(-hasil);
		}
	else
		{
		return(hasil);
		}
		}
		int main()
		{
		int a,b;
		cout<<"Masukan Angka :";
		cin>> a;
		cout<<"Masukan Angka :";
		cin>> b;
		cout << "\n\nHasil dari " << a <<" X "<< b <<" = "<<kali(a,b);
		return 0;
	}

~ Berikut Flowchartnya

![img](https://github.com/zahira12/praktikum7/blob/master/latihan2/flowchartLatihan2.png)

~ Berikut Hasil Screenshotnya

![img](https://github.com/zahira12/praktikum7/blob/master/latihan2/Screenshot2.png)


