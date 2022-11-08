#include <iostream>
#include "Url.h"

using namespace std;

Url::Url(string prot, string res) : protocol(prot), resource(res) {}

Url::Url(const Url& other) : protocol(other.protocol), resource(other.resource) {}

Url& Url::operator=(const Url& other)
{
  protocol = other.protocol;
  resource = other.resource;
  return *this;
}

Url::~Url()
{
}

string Url::getFullUrl()
{
  string ret;
  ret = protocol;
  ret.append("://");
  ret.append(resource);
  return ret;
}