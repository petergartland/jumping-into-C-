#include <iostream>
#include <string>
#include <vector>
#include <map>


int main()
{
	std::string test = "test";
	std::vector<int> vec(1);
	vec.push_back(5);
	for(int i = 0; i < 11; i++)
		std::cout<<vec[i]<<std::endl;
	std::cout<<test.size()<<std::endl<<std::endl;
	std::map<std::string,std::string> name_to_email;
	name_to_email["peter"] = "peterg@ucsb.edu";
	name_to_email["hello"] = "goodbye";
	std::cout<<name_to_email["peter"]<<std::endl;
	//std::cout<<name_to_email.size()<<std::endl;
	//name_to_email.erase("hello");
	//std::cout<<name_to_email.size()<<std::endl;
	//std::vector<int>::iterator itr = vec.begin();
	for (std::vector<int>::iterator itr = vec.begin(); itr != vec.end(); itr++)
		std::cout<<*itr<<std::endl;
	for (std::map<std::string, std::string>::iterator itr = name_to_email.begin(); itr != name_to_email.end(); itr++)
		std::cout<<itr->first << "-->"<<itr->second<<std::endl;
		
	std::cout<<std::endl;
	std::cout<<5*8+9/3<<std::endl;
}
