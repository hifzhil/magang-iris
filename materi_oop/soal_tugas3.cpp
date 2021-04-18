#include<cstdio>
#include<iostream>
#include<string>
using namespace std;
class Animal{
protected:
    string name1, name2;
    string tinggal1, tinggal2;    
    int age1, age2;
public:
    void set_info(string nama1, int umur1, string tgl1, string nama2, int umur2, string tgl2){
        name1=nama1; name2=nama2;
        age1=umur1; age2=umur2;
        tinggal1=tgl2;tinggal2=tgl1;
    }
};
class Zebra: public Animal{
public:
    void zeb(){
        cout<<"Nama zebra ini adalah "<<name1<<" dia berumur "<<age1<<" tahun dia hidup di "<<tinggal1<<endl;
    }
};

class Dolphin: public Animal{
public:
    void dol(){
        cout<<"Nama dolpin ini adalah "<<name2<<" dia berumur "<<age2<<" tahun dia hidup di "<<tinggal2<<endl;
    }
};

int main(){
    string name1;
    string name2;
    string hdp1;
    string hdp2;
    int age1,age2;
    cout<<"Masukkan nama zebra : ";
    getline(cin,name1);
    cout<<"Masukkan tempat tinggal zebra : "; 
    getline(cin,hdp1);
    cout<<"Masukkan umur zebra : ";scanf("%d", &age1);getchar();
    cout<<"Masukkan nama dolpin : ";
    getline(cin,name2);
    cout<<"Masukkan umur dolpin : ";scanf("%d", &age2);getchar();
    cout<<"Masukkan tempat tinggal dolpin : "; getline(cin,hdp2);
    //cout<<"Masukkan umur zebra : ";scanf("%d", &age1);
    //cout<<"Masukkan umur dolpin : ";scanf("%d", &age2);
    
    Zebra zebra;Dolphin dolpin;
    zebra.set_info(name1,age1,hdp1,name2,age2,hdp2);
    dolpin.set_info(name1,age1,hdp1,name2,age2,hdp2);
    zebra.zeb();
    dolpin.dol();
return 0;
}
