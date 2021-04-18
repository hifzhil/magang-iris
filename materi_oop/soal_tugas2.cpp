#include<cstdio>
#include<iostream>
#include<string>
using namespace std;

class Ibu{
protected:
    string ibu, anak;
public:
    void set_info(string a, string b){
        ibu=a;
        anak=b;
    }    
	void disp()
	{
		cout<<"nama ibu : "<<ibu<<endl;
	}
};

class Anak:public Ibu{
public:
	void disp()
	{
		cout<<"Nama anak : "<<anak<<endl;
	}
};

int main ()
{
    string nama1,nama2;
    cout<<"Masukkan nama ibu : "; getline(cin,nama1);
    cout<<"Masukkan nama anak : "; getline(cin,nama2);
    Ibu ibu1;Anak anak1;
    ibu1.set_info(nama1,nama2);
	anak1.set_info(nama1,nama2);
    ibu1.disp();
    anak1.disp();
	return 0;
}
