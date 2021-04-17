#include<cstdio>
#include<iostream>
#include<string>
using namespace std;
class Student{
public:
    string name;
    float marks1, marks2;
    Student(string a, float b, float c){  //konstruktor
        name=a; marks1=b; marks2=c;
    }
    float calc_media(){               //fungsi mencari rata-rata
        return (marks1+marks2)/2;
    }
    void disp(){                      //fungsi output
        cout<<"Nama Siswa : "<<name<<endl;
        cout<<"Nilai rata-rata : ";printf("%.3f\n", calc_media());
    }
};
int main(){
    string nama; float nilai1,nilai2;
    cout<<"Masukkan nama anda : ";getline(cin,nama);
    cout<<"Nilai 1 = "; cin>>nilai1;
    cout<<"Nilai 2 = "; cin>>nilai2;
    Student siswa1(nama,nilai1,nilai2); //input otomatis ke classs
    siswa1.disp();
return 0;
}
