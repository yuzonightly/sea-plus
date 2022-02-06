#ifndef __api_h__
#define __api_h__

#include "restclient-cpp/connection.h"
#include "restclient-cpp/restclient.h"

#pragma once
namespace API {

class TMDB {
public:
  TMDB();
  ~TMDB();
  //   void setAuthKey(const unsigned char *key);
};

} // namespace API

#endif