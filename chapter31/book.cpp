#include <iostream>
#include <string>
#include <vector>

using namespace std;



class Exception
{
public:
	//virtual ~Exception() = 0;
	virtual int getErrorCode() = 0;
	virtual string getErrorReport() const = 0;
};


class FileNotFoundException : public Exception
{
public:
	FileNotFoundException (int err_code, const string& details) : _err_code(err_code), _details(details) 
	{}
	
	//virtual ~FileNotFoundException() 
	//{
	//}
	
	virtual int getErrorCode()
	{
		return _err_code;
	}
	
	virtual string getErrorReport () const
	{
		return _details;
	}
	
private:
	int _err_code;
	string _details;	
		
};


void fail()
{
	throw FileNotFoundException(1, "Not Found");
}



int main()
{
try
{
	fail();	
}
catch(const Exception &e)
{
	const string report = e.getErrorReport();
	cout<<report<<endl;
}

}
