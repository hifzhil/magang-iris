#include<cstdio>
#include<iostream>
#include<string>
using namespace std;

class Mother{
//protected:
public:
    string ibu, anak;
    void set_info(string a, string b){
        ibu=a;
        anak=b;
    }    
	void disp()
	{
		cout<<"nama ibu : "<<ibu<<endl;
	}
};

class Daughter : public Mother{
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
    Mother ibu;Daughter anak;
    ibu.set_info(nama1,nama2);
	anak.set_info(nama1,nama2);
    ibu.disp();
    anak.disp();
	return 0;
}
