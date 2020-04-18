#include <iostream>
#include <string>
using namespace std;

string one(int);

string two(int);

string three(int len3)
{
	if (len3<100)
		return two(len3);
	return (one(len3/100)+ " " + "hundred and " + two(len3%100));
}

string two(int len2)
{
	int first = len2/10;
	
	if (len2<10)
		return one(len2);
	
	if (len2==10)
	{
		return "ten";
	}
	if (len2==11)
	{
		return "eleven";
	}
	if (len2==12)
	{
		return "twelve";
	}
	if (len2==13)
	{
		return "thirteen";
	}
	if (len2==14)
	{
		return "fourteen";
	}
	if (len2==15)
	{
		return "fifteen";
	}
	if (len2==16)
	{
		return "sixteen";
	}
	if (len2==17)
	{
		return "seventeen";
	}
	if (len2==18)
	{
		return "eighteen";
	}
	if (len2==19)
	{
		return "nineteen";
	}
		
		
		
		
	if (first==2)
	{
		return ("twenty-"+one(len2%10));
	}
	if (first==3)
	{
		return ("thirty-"+one(len2%10));
	}
	if (first==4)
	{
		return ("forty-"+one(len2%10));
	}
	if (first==5)
	{
		return ("fifty-"+one(len2%10));
	}
	if (first==6)
	{
		return ("sixty-"+one(len2%10));
	}
	if (first==7)
	{
		return ("seventy-"+one(len2%10));
	}
	if (first==8)
	{
		return ("eighty-"+one(len2%10));
	}
	if (first==9)
	{
		return ("ninety-"+one(len2%10));
	}
	return "problem";
}

string one(int len1)
{

	if (len1==1)
	{
		return "one";
	}
	if (len1==2)
	{
		return "two";
	}
	if (len1==3)
	{
		return "three";
	}
	if (len1==4)
	{
		return "four";
	}
	if (len1==5)
	{
		return "five";
	}
	if (len1==6)
	{
		return "six";
	}
	if (len1==7)
	{
		return "seven";
	}
	if (len1==8)
	{
		return "eight";
	}
	if (len1==9)
	{
		return "nine";
	}
	
	return "problem2";
}

int main()
{
	int num;
	cout<<"enter a numer to conver to words\n";
	cin>>num;
	string num_let = "";
	if (num/1000000 > 0)
		num_let = num_let + three(num/1000000) + " million ";
	
	if (num/1000 - (num/1000000)*1000 > 0)
		num_let = num_let + three(num/1000 - (num/1000000)*1000) + " thousand ";
	
	if (num %1000 > 0)
		num_let = num_let + three(num%1000);
		
	cout<<num_let<<endl;
}
