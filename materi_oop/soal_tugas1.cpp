#include<cstdio>
#include<iostream>
using namespace std;
class Ukuran_bidang
{
protected:
	float p,l;
public:
	void set_bidang (float a, float b)
	{
		p=a;
		l=b;
	}
};

class Segitiga: public Ukuran_bidang
{
public:
	float luas()
	{
		return (p*l)/2;
	}
	void disp(){
        cout<<"Luas Segitiga = "<<luas()<<endl;
    }
};

class Persegi: public Ukuran_bidang
{
public:
	float luas()
	{
		return p*l;
	}
	void disp(){
        cout<<"Luas Segiempat = "<<luas()<<endl;
    }
};

int main(){
    int p,l;
    Segitiga segi3;
    Persegi segi4;
    cout<<"Masukkan ukuran panjang dan lebar/tinggi bidang : "; cin>>p>>l;
    segi3.set_bidang(p,l);
    segi4.set_bidang(p,l);
    segi3.disp();
    segi4.disp();
}
