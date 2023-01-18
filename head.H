/*
  Pembuat    : Fira Claudia Berlianna
  Nis	       : 222310549
  Email      : fclaudiaberlianna@gmail.com
  Kontak     : 085861821086
  Pembimbing : Devi Rodiana
  Diajukan   : Tugas Akhir Dasar Pemrograman PPLG
  user,password (firaa,claudia)
*/
#include <conio.h>
#include <iostream.h>

head(char jud[50]=""){
	cout<<"***************************************************************"<<endl;
   cout<<".....................::PEGADAIAN SYARIAH::....................."<<endl;
	cout<<"                       "<<jud<<endl;
  	cout<<"***************************************************************"<<endl;
   if(strcmp(jud,"LOGIN APLIKASI")==0){
    	cout<<"JUDUL     : APP PEGADAIAN SYARIAH"<<endl;
   	cout<<"PEMBUAT   : Fira Claudia Berlianna"<<endl;
   	cout<<"NIs       : 222310549"<<endl;
   	cout<<"KELAS     : X PPLG"<<endl;
   	cout<<"VERSI APP : 1.1 (BUILD FULL WITH BORLAND C++)"<<endl;
      cout<<"NOTE      : Gunakan (Username:firaa) dan (Password:claudia)"<<endl;
   	cout<<"***************************************************************"<<endl;
   }
}