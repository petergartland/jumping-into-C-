#include <iostream>
#include <vector>
#include <fstream>

using namespace std;


struct PlayerRecord
{ 
	 int age;
	 int score;
	 string name;
};



int main()
{
	fstream myfile("binaryfile.bin", ios::binary | ios::in | ios::out);
	/*
	int x[10];
	cout<<x<<endl;
	x[0] = 97999;
	x[1]=99;
	char* y =reinterpret_cast<char*>(x);
	//cout<<y<<endl;
	int* p = new int[7];
	outfile.write(y,sizeof(*p)*10);
	*/
	/*
	PlayerRecord rec;
	rec.age = 10;
	rec.score = 890;
	rec.name = "peter";
	myfile.write(reinterpret_cast<char*>(& rec.age), sizeof(rec.age));
	myfile.write(reinterpret_cast<char*>(& rec.score), sizeof(rec.score));
	int len = rec.name.length();
	myfile.write(reinterpret_cast<char*>(& len), sizeof(len));
	myfile.write(rec.name.c_str(), len+1);
	*/
	myfile.seekg(0, ios::beg);
	PlayerRecord in_rec;
	if(! myfile.read(reinterpret_cast<char*>(& in_rec.age), sizeof(in_rec.age)))
		cout<<"error reading age\n";
	
	if(! myfile.read(reinterpret_cast<char*>(& in_rec.score), sizeof(in_rec.score)))
		cout<<"error reading score\n";
	
	int str_len;
		
	if(! myfile.read(reinterpret_cast<char*>(& str_len), sizeof(str_len)))
		cout<<"error reading length\n";
	
	if(str_len > 0 && str_len < 1000)
	{
		char* p_string_buf = new char[str_len];
		if( ! myfile.read(p_string_buf, str_len + 1))
			cout<<"error reading string\n";
		if (p_string_buf[str_len]==0)
			in_rec.name = string(p_string_buf);
		delete p_string_buf; 
	}
	cout<<in_rec.age<< " " << in_rec.score << " " <<endl;
	cout<< in_rec.name<<endl;
}
