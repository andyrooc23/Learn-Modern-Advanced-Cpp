#include <iostream>

using namespace std;

class Url {
public:
  Url(string prot, string res);
  Url(const Url& other);
  Url& operator =(const Url& other);
  ~Url();

  string getFullUrl();

private:
  string protocol, resource;
};