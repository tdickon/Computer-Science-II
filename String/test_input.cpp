#include<iostream>
#include<fstream>
#include"string.hpp"

int main()
{
  std::ifstream in("log_2_small.txt");
  if(!in)
    {
      std::cerr << "Could not open log_2_small.txt, exiting." << std::endl;
      exit(1);
    }

  String tmp;
  in >> tmp;
  while(!in.eof())
    {
      std::cout << tmp << std::endl;
      in >> tmp;
    }
  in.close();

  std::cout<<"\n COMPLETED TESTING THE INPUT OPERATOR.\n" << std::endl;

 return 0;

}