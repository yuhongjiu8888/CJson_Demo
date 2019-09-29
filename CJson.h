#ifndef _CJSON_H_
#define _CJSON_H_

#include "json/json.h"
#include <string>

class CJson
{
public:
    CJson();
    ~CJson();

    int ParseJsonFromString();
    int SetJsonToString();

};

#endif