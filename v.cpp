#include <iostream>
#include <string.h>
using namespace std;

class perpustakaan{
public:
	//atribute
	string judulBuku;
	string Pengarang;
	//method
	string getjudulBuku(){
	return judulBuku;
	}
	string getPengarang(){
	return Pengarang;
	}
};

void teknologi(){
	//kategoriTeknologi
	perpustakaan tek1;
	perpustakaan tek2;
	perpustakaan tek3;
	perpustakaan tek4;
	perpustakaan tek5;
	perpustakaan tek6;
	perpustakaan tek7;

	
	//pengisian kategori Teknologi
	tek1.judulBuku="Basis Data";
	tek1.Pengarang="Fathansyah";
	
	tek2.judulBuku="Jaringan Komputer";
	tek2.Pengarang="Kholili \n	      Fatimah";

	tek3.judulBuku="Arsitektur dan Organisasi Komputer";
	tek3.Pengarang="Akbar";

	tek4.judulBuku="Teknologi Masa Depan";
	tek4.Pengarang="Ikhwan \n	      Akhwan";

	tek5.judulBuku="Design Web";
	tek5.Pengarang="Syafii";

	tek6.judulBuku="HTML";
	tek6.Pengarang="Imam";

	tek7.judulBuku="Mahir Microsoft";
	tek7.Pengarang="Fitrah \n	      Ilalang";

cout<<"1.Judul Buku: "<<tek1.getjudulBuku()<<endl
	<<"   Pengarang :"<<tek1.getPengarang()<<endl;
cout<<"2.Judul Buku: "<<tek2.getjudulBuku()<<endl
	<<"   Pengarang :"<<tek2.getPengarang()<<endl;
cout<<"3.Judul Buku: "<<tek3.getjudulBuku()<<endl
	<<"   Pengarang :"<<tek3.getPengarang()<<endl;
cout<<"4.Judul Buku: "<<tek4.getjudulBuku()<<endl
	<<"   Pengarang :"<<tek4.getPengarang()<<endl;
cout<<"5.Judul Buku: "<<tek5.getjudulBuku()<<endl
	<<"   Pengarang :"<<tek5.getPengarang()<<endl;
cout<<"6.Judul Buku: "<<tek6.getjudulBuku()<<endl
	<<"   Pengarang :"<<tek6.getPengarang()<<endl;
cout<<"7.Judul Buku: "<<tek7.getjudulBuku()<<endl
	<<"   Pengarang :"<<tek7.getPengarang()<<endl;
}

int agama(){
	
	//kategoriAgama
	perpustakaan rel1;
	perpustakaan rel2;
	perpustakaan rel3;
	perpustakaan rel4;
	perpustakaan rel5;
	perpustakaan rel6;
	perpustakaan rel7;
	
	//pengisian kategori Agama
	rel1.judulBuku="Buku Iqra - Cara cepat baca Quran";
	rel1.Pengarang="KH Asad Humam";
	
	rel2.judulBuku="Kumpulan Doa Sehari-hari untuk anak";
	rel2.Pengarang="Abu Sangkan";

	rel3.judulBuku="Cerdas Memilih Jodoh";
	rel3.Pengarang="Zaenal Abidin bin Syarifuddin";

	rel4.judulBuku="Sedekah : Cara cepat menjadi kaya";
	rel4.Pengarang="Jamal Abdillah bin Husein Mubarok";

	rel5.judulBuku="Mendidik Anak dengan cara yang baik";
	rel5.Pengarang="Abdul Salam";

	rel6.judulBuku="Mukjizat di waktu subuh";
	rel6.Pengarang="Imam Hamid Al-Fatih";

	rel7.judulBuku="Ensiklopedia Religi";
	rel7.Pengarang="Abu Humaira bin Muhammad Hasan";


cout<<"============================"<<endl;
cout<<"Kategori Buku Agama"<<endl;
cout<<"============================"<<endl;
cout<<"1. Judul Buku: "<<rel1.getjudulBuku()<<endl
 	<<"   Pengarang :"<<rel1.getPengarang()<<endl
cout<<"2. Judul Buku: "<<rel2.getjudulBuku()<<endl
 	<<"   Pengarang :"<<rel2.getPengarang()<<endl
cout<<"3. Judul Buku: "<<rel3.getjudulBuku()<<endl
	<<"   Pengarang :"<<rel3.getPengarang()<<endl
cout<<"4. Judul Buku: "<<rel4.getjudulBuku()<<endl
 	<<"   Pengarang :"<<rel4.getPengarang()<<endl
cout<<"5. ID Buku :"<<rel5.getidBuku()<<endl
	<<"   Judul Buku: "<<rel5.getjudulBuku()<<endl
 	<<"   Pengarang :"<<rel5.getPengarang()<<endl
cout<<"6. Judul Buku: "<<rel6.getjudulBuku()<<endl
 	<<"   Pengarang :"<<rel6.getPengarang()<<endl
cout<<"7. Judul Buku: "<<rel7.getjudulBuku()<<endl
	<<"   Pengarang :"<<rel7.getPengarang()<<endl
}

int filsafat(){
	
	//kategoriFilsafat
	perpustakaan fil1;
	perpustakaan fil2;
	perpustakaan fil3;
	perpustakaan fil4;
	perpustakaan fil5;
	perpustakaan fil6;
	perpustakaan fil7;
	
	//pengisian kategori Filsafat
	fil1.judulBuku="Manusia dan Ego";
	fil1.Pengarang="Fritz Becekenbauer";

	fil2.judulBuku="What is Philosophy?";
	fil2.Pengarang="Jean-Pierre Tournesol";

	fil3.judulBuku="Aku : Dariku,Olehku dan Untukku";
	fil3.Pengarang="Raden Soetomo";

	fil4.judulBuku="Fundamentalisme dalam Umat Manusia";
	fil4.Pengarang="Henry Rousseau";

	fil5.judulBuku="The root of Good and Evil";
	fil5.Pengarang="Benjamin Stewart";

	fil6.judulBuku="Fiksi";
	fil6.Pengarang="John Goodman Jr.";

	fil7.judulBuku="A Beautiful Mind";
	fil7.Pengarang="Issa Khawarizmi";

cout<<"============================"<<endl;
cout<<"Kategori Buku Filsafat"<<endl;
cout<<"============================"<<endl;
cout<<"1. Judul Buku: "<<fil1.getjudulBuku()<<endl
 	<<"   Pengarang :"<<fil1.getPengarang()<<endl

cout<<"2. Judul Buku: "<<fil2.getjudulBuku()<<endl
 	<<"   Pengarang :"<<fil2.getPengarang()<<endl
cout<<"3. Judul Buku: "<<fil3.getjudulBuku()<<endl
 	<<"   Pengarang :"<<fil3.getPengarang()<<endl
cout<<"4. Judul Buku: "<<fil4.getjudulBuku()<<endl
 	<<"   Pengarang :"<<fil4.getPengarang()<<endl
cout<<"5. Judul Buku: "<<fil5.getjudulBuku()<<endl
 	<<"   Pengarang :"<<fil5.getPengarang()<<endl
cout<<"6. Judul Buku: "<<fil6.getjudulBuku()<<endl
 	<<"   Pengarang :"<<fil6.getPengarang()<<endl
cout<<"7. Judul Buku: "<<fil7.getjudulBuku()<<endl
 	<<"   Pengarang :"<<fil7.getPengarang()<<endl
}


int main(){
	int pilihan;
	cout<<"================================="<<endl;
	cout<<"	    Data Buku Perpustakaan      "<<endl;
	cout<<"================================="<<endl;
	cout<<"1. Teknologi\n"
		<<"2. Sejarah\n"
		<<"3. Agama\n"
		<<"4. Filsafat\n"
		<<"5. Fiksi\n"
		<<"6. Politik\n"
		<<"7. Psikologi";
	cout<<"Masukkan pilihan :\n":
	cin>>pilihan;
	switch(pilihan){
		case 1:
			teknologi();break;
		case 2:
			sejarah();break;
		case 3:
			agama();break;
		case 4:
			filsafat();break;
return 0;
}
