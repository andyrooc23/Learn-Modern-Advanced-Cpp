#include <iostream>
#include "Url.h"
using namespace std;

int main()
{
  Url u1 = Url("http", "google.com");

  cout << u1.getFullUrl() << endl;

  // Url *u1Ref = &u1;

  // cout << u1Ref << ": address of u1" << endl;

  // Url u1Copy = Url{ u1 };
  // Url u2 = Url{ "https", "facebook.com" };

  // cout << u1Copy.getFullUrl() << endl;

  // cout << u2.getFullUrl() << endl;
}