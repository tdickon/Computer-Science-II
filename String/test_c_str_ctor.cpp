#include <iostream>
#include <cassert>
#include "string.hpp"

int main()
{
  std::cout << "Going to Output famous Danzo Shimura quotes from the series Naruto Shippuden, to test our character string." << std::endl;

  {
    String danzoQuote("(To Hiruzen): ");
    assert(danzoQuote == "(To Hiruzen): ");
    std::cout << danzoQuote;
  }

  {
    String danzoQuote("My father and grandfather died in battle as ninja. Self-sacrifice is a ninja's duty.");
    assert(danzoQuote == "My father and grandfather died in battle as ninja. Self-sacrifice is a ninja's duty.");
    std::cout << danzoQuote;
  }
  std::cout << std::endl;
  std::cout << std::endl;

  {
    String danzoQuote("(To Sai): ");
    assert(danzoQuote == "(To Sai): ");
    std::cout << danzoQuote;
  }

  {
    String danzoQuote("Emotions lead one to hate... and hate leads one to conflict and war...");
    assert(danzoQuote == "Emotions lead one to hate... and hate leads one to conflict and war...");
    std::cout << danzoQuote;
  }

  std::cout << std::endl;
  std::cout << std::endl;

  {
    String danzoQuote("(To Sasuke): ");
    assert(danzoQuote == "(To Sasuke): ");
    std::cout << danzoQuote;
  }

  //Testing to see if it will throw an error that it's too big."
  {
    String danzoQuote("Two brothers, whose abilities are identical. How could what your eyes perceive be so different. The truth about Itachi isn't important to you at all. Instead you simply want to destroy everything with your hatred. All you're doing is making the sacrifice of the Uchiha clan meaningless.");
    assert(danzoQuote == "Two brothers, whose abilities are identical. How could what your eyes perceive be so different. The truth about Itachi isn't important to you at all. Instead you simply want to destroy everything with your hatred. All you're doing is making the sacrifice of the Uchiha clan meaningless.");
    std::cout << danzoQuote;
  }
  std::cout << std::endl;
  std::cout << std::endl;

  {
    String danzoQuote("(To Sasuke): ");
    assert(danzoQuote == "(To Sasuke): ");
    std::cout << danzoQuote;
  }

  {
    String danzoQuote("It's not my life I'm worried about. This is for Konoha...for the ninja world... I can't die now... I'll...do...");
    assert(danzoQuote == "It's not my life I'm worried about. This is for Konoha...for the ninja world... I can't die now... I'll...do...");
    std::cout << danzoQuote;
  }

{
  String danzoQuote("anything...to survive. I... am the only one... who can change this world... this girl will be sacrificed for that.");
  assert(danzoQuote == "anything...to survive. I... am the only one... who can change this world... this girl will be sacrificed for that.");
    std::cout << danzoQuote;
  }

 std::cout << std::endl;
 std::cout << std::endl;

 {
    String danzoQuote("(Last words): ");
    assert(danzoQuote == "(Last words): ");
    std::cout << danzoQuote;
 }

 {
   String danzoQuote("*Inner Monologue* Sarutobi you're always walking ahead of me. *end Inner monologue* ");
   assert(danzoQuote == "*Inner Monologue* Sarutobi you're always walking ahead of me. *end Inner monologue* ");
   std::cout << danzoQuote << std::endl;
 }

 {
   String danzoQuote("For the shinobi world and the leaf, I CANNOT CONTINUE TO LET YOU TWO LIVE! *reveals a reverse tetragram seal*");
   assert(danzoQuote == "For the shinobi world and the leaf, I CANNOT CONTINUE TO LET YOU TWO LIVE! *reveals a reverse tetragram seal*");
   std::cout << danzoQuote << std::endl;
 }

 {
   String danzoQuote("*Inner Monologue as the reverse tetragram eats away at his body*");
   assert(danzoQuote == "*Inner Monologue as the reverse tetragram eats away at his body*");
   std::cout << danzoQuote;
 }

 {
  String danzoQuote(" Hiruzen... it looks like it's my turn next... but I... never did become Hokage... no matter how far I went, I could never catch up with you...");
  assert(danzoQuote == " Hiruzen... it looks like it's my turn next... but I... never did become Hokage... no matter how far I went, I could never catch up with you...");
   std::cout << danzoQuote;
 }

 {
   String danzoQuote(" you are the leaves bathing in the sun. I... am the roots that grow in the dark. Hey, Hiruzen... what do you think of me? What am I to you...?");
   assert(danzoQuote == " you are the leaves bathing in the sun. I... am the roots that grow in the dark. Hey, Hiruzen... what do you think of me? What am I to you...?");
   std::cout << danzoQuote;
 }

 std::cout << std::endl;
 std::cout << std::endl;

 std::cout << "I suppose you have earned" << std::endl;
 std::cout << "your reputation as the" << std::endl;
 std::cout << "strongest of the constructors." << std::endl;
 std::cout << "COMPLETED TESTING C_STRING_CONSTRUCTOR" << std::endl;
}