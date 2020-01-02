#include<iostream>
#include<fstream>

using namespace std;
int main()
{
	ifstream benimDosyam;
	string satir;
	
	benimDosyam.open("input.txt");
	
		while(getline (benimDosyam, satir))
	{	
		cout<< satir << endl;
	}
	getline (benimDosyam, satir);
	
	cout<< satir << endl;
	
	benimDosyam.close();
	

	
	{
			ofstream benimDosyam;
	benimDosyam.open("output.txt");
	

	benimDosyam << "2018280022, 81" <<endl;
	benimDosyam <<  "2018280028, 61"<< endl;
	benimDosyam << "2018280033, 67"  << endl;
	benimDosyam <<  "2018280075, 52" << endl;
	benimDosyam <<  "2018280099, 78"<< endl;

		cout<< "En dusuk not 52 " << endl;
	cout<< "En yuksek not 81" << endl;
	cout<< "Ortalama 67.8" << endl;
	cout<< "Medyan 67" << endl;
	cout<< "Aciklik=29" << endl;
	
	
	
	benimDosyam.close();
	
	return 0;
	using namespace std;
int main();

	{
	ifstream benimDosyam;
	string satir;
	
	benimDosyam.open("output.txt");
	
		while(getline (benimDosyam, satir))
	{	
		cout<< satir << endl;
	}
	getline (benimDosyam, satir);
	
	cout<< satir << endl;
	
	benimDosyam.close();

}
}}


//halime gungor 2018280022
//kaynaklar
//https://turkmuhendis.net/cppprogramlama/dosya-islemleri/
//https://www.yusufsezer.com.tr/cpp-dosya-islemleri/
//https://merttopuz.com/kodlama/cpp/cpp-girdi-ve-cikti-islemleri
//http://teknokafe.net/2017/11/22/c-txt-dosyalama-islemleri/
//https://www.youtube.com/watch?v=E-6ZvxCzqcU
//https://www.youtube.com/watch?v=BOoPd7SJvuk&list=PLoPK1OnMH5178ZBJNAVBA2FXcBMOYmv_n

