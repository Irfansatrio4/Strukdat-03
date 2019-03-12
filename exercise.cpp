/*
Nama : irfan satrio nugroho
NPM : 140810180003
kelas : A
tanggal buat : 12/03/2019
*/

#include <iostream>
#include <math.h>
using namespace std;

typedef struct 
{
	float panjang;
	float lebar;
} segiempat;

void input(segiempat *s)
{
	cout<<"Masukan Panjang 	: ";cin>>s->panjang;
	cout<<"Masukan Lebar 		: ";cin>>s->lebar;
}
float keliling (segiempat *s)
{
	return 2*(s->panjang+s->lebar);
}
float luas (segiempat *s)
{
	return (s->panjang*s->lebar);
}
float diagonal (segiempat *s)
{
	return sqrt (s->panjang*s->panjang+s->lebar*s->lebar);
}
void print (segiempat *s)
{
	cout<<"keliling		: "<<keliling(s)<<endl;
	cout<<"Luas   			: "<<luas(s)<<endl;
	cout<<"Diagonal		: "<<diagonal(s)<<endl;
}

int main ()
{
	segiempat* sg;
	sg = new segiempat;
	input (sg);
	print (sg);
}
