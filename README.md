# praktikum7
# latihan1 # Menukar Angka Dari 2 Variabel
	~Alur Algoritmanya
	-Membuat fungsi tukar
	-Mendeklarasikan Variabel a & b sebagai integer
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
	-Membuat fungsi kali
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


# Soal Variabel Global

	~Alur Algoritmanya
	-Mendeklarasikan variabel global
	-Masukan Angka total 6,3
		int total;
		void hitung (){
		total*= 6;
	}
	int main()
	{
		total=3;
		total++;
		hitung();
	-Cetak hasilnya cout << total << endl;
		return 0;
	}

~ Berikut Kode Lengkapnya

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

~ Berikut Hasil Screenshotnya

![img](https://github.com/zahira12/praktikum7/blob/master/SoalVariabelGlobal/Screenshot1.png)

# Soal Variabel Local

	~Alur Algoritmanya
	-Mendeklarasikan variabel local
	-Masukan variabel yang akan di inputkan
		int total =2;
		total *=3;
	-Cetak total lain 	cout<< "total pada lain() ="<<total<<endl;
	}
	int main()
	{
		int total =2;
		total++;
		hitung();
	-Cetak total main 	cout << "total pada main()=" <<total<< endl;
				return 0;
			}

~ Berikut Kode Lengkapnya

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

~ Berikut Hasil Screenshotnya

![img](https://github.com/zahira12/praktikum7/blob/master/SoalVariabelLocal/Screenshot%201.png)

# Soal Variabel Static
	~Alur Algoritmanya
	-Mendeklarasikan variabel static
		int total = 0;
		total++;
	-Cetak nilai	cout<< "Nilai Total = "<< total<<endl;
		}
	-Masukan Variabel yang akan di inputkan 
	}
	int main()
	{
		hitung();
		hitung();
		hitung();
		hitung();
	return 0;
	}

~ Berikut Kode Lengkapnya

	#include <iostream>

	using namespace std;
	void hitung()
	{
		static int total = 0;
		total++;
		cout<< "Nilai Total = "<< total<<endl;
	}
	int main()
	{
		hitung();
		hitung();
		hitung();
		hitung();
	return 0;
	}

~ Berikut Hasil Screenshotnya

![img](https://github.com/zahira12/praktikum7/blob/master/SoalVariabelStatic/Screenshot%201.png)