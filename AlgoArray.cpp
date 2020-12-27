#include <iostream>
using namespace std;
main(){
	int i, a, angka[100], max, min, s[999] = {0}, max2 = 0, i_k, j = 1;
	float m, r;
	
	cout<< "Masukkan Banyak Angka : "; cin>> a;
	for(i=0;i<a;i++){
		cout<< "Angka ke-" << i + 1 << " : "; cin>> angka[i];
		m += angka[i];
	}
	cout<< "" <<endl;
	cout<< "=======Hasil=======" <<endl;
	cout<< "Deret       : ";
	for(i=0;i<a;i++){
		cout<< angka[i]<<" ";
	}
	cout<<""<<endl;
	max = angka[0];
	for(i=0;i<a;i++){
    if(angka[i] > max){
      max = angka[i];
		}
	}
	cout<< "Maksimum    : "<< max <<endl;
	min = angka[0];
	for(i=0;i<a;i++){
    if(angka[i] < min){
      min = angka[i];
		}
	}
	cout<< "Minimum     : "<< min <<endl;
	r = m/a;
	cout<< "Rata-rata   : "<< r <<endl;
	cout<< "Selisih Max : ";
	for(i=1;i<=j;i++){
		if(i<j)i_k=i+1;
		s[i] = angka[i] - angka[i_k];
		if(s[i]<0) s[i] = s[i] * (-1);
		max2 = s[1];
		for(i=1;i<=j;i++){
			if(s[i]>max2){
				max2=s[i];
			}
		}
	}
	cout<< max2; 
}
