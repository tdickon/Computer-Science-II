#include <iostream>
#include <cassert>
#include "string.hpp"

int main()
{
   {
    String s1;
    String s2;
    String result = s1 + s2;
    std::cerr << "result: " << result; std::cout << std::endl; std::cout << std::endl;
    assert(s1 == '\0');
    assert(s2 == '\0');
    assert(result == '\0');
  }
  
  {
    String s1;
    String s2('c');
    String result = s1 + s2;
    std::cerr << "result: " << result; std::cout << std::endl; std::cout << std::endl;
    assert(s1 == '\0');
    assert(s2 == 'c');
    assert(result == 'c');
  }

  {
    String s1("ab");
    String s2("c");
    String result = s1 + s2;
    std::cerr << "result: " << result; std::cout << std::endl; std::cout << std::endl;
    assert(s1 == "ab");
    assert(s2 == "c");
    assert(result == "abc");
  }

  {
    String s1("ab");
    String s2("cd");
    String result = s1 + s2;
    std::cerr << "result: " << result; std::cout << std::endl; std::cout << std::endl;
    assert(s1 == "ab");
    assert(s2 == "cd");
    assert(result == "abcd");
  }

    
  {
    String s1("a");
    String s2("bc");
    s1 += s2;
    std::cerr << "result: " << s1; std::cout << std::endl;
    assert(s1 == "abc");
    
  }
 

  {
    String s1("abcdhf");
    String s2("bcytwiayda");
    s1 += s2;
    std::cerr << "result: " << s1; std::cout << std::endl;
    assert(s1 == "abcdhfbcytwiayda");
    
  }


  {
    String s1("Hello Mr.");
    char ch('C');
    String result = s1 + ch;
    std::cerr << "result: " << result; std::cout << std::endl;
    assert(result == "Hello Mr.C");
  }

  {
    String s1("Hello Mr.");
    char *ch  = " Alex Mahan, the world's greatest programmer.";
    String result = s1 + ch;
    std::cerr << "result: " << result; std::cout << std::endl;
    assert(result == "Hello Mr. Alex Mahan, the world's greatest programmer.");
  }

  { 
    String s1("Zabuza Momochi: ");
    String s2("*to Naruto* Your words cut deeper than any blade.");
    String s3(" Well? Cat got your tongue? Are you surprised to discover that I am human? Even shinobi are human. No matter how hard we try, we always fail to escape that simple fact. Well at least, I have failed.");
    String result = s1 + s2 + s3;
    std::cerr << "result: " << result; std::cout << std::endl;

    assert(result =="Zabuza Momochi: *to Naruto* Your words cut deeper than any blade. Well? Cat got your tongue? Are you surprised to discover that I am human? Even shinobi are human. No matter how hard we try, we always fail to escape that simple fact. Well at least, I have failed."); 
  }

  std::cout << "COMPLETED TESTING CONCATINATION" << std::endl;
