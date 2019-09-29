#include "CJson.h"
#include <iostream>

CJson::CJson()
{}

CJson::~CJson()
{}

int CJson::ParseJsonFromString()
{
    const char* str = "{\"uploadid\": \"UP000000\",\"code\": 100,\"msg\": \"\",\"files\": \"\"}";
 
    Json::Reader reader;
    Json::Value root;
    if (reader.parse(str, root))  // reader将Json字符串解析到root，root将包含Json里所有子元素
    {
        std::string upload_id = root["uploadid"].asString();  // 访问节点，upload_id = "UP000000"
        int code = root["code"].asInt();    // 访问节点，code = 100
        std::cout<<"upload_id:"<<upload_id<<"   code:"<<code<<std::endl;
    }
    
    return 0;
}

int CJson::SetJsonToString()
{
    Json::Value root;
    Json::Value arrayObj;   // 构建对象
    Json::Value new_item, new_item1;
    new_item["date"] = "2019-09-29";
    new_item1["time"] = "15:48:36";
    arrayObj.append(new_item);  // 插入数组成员
    arrayObj.append(new_item1); // 插入数组成员
    int file_size = 4;
    for(int i = 0; i < file_size; ++i)
      root["files"][i]["exifs"] = arrayObj;   // 插入原json中

    // 转换为字符串（带格式）
    std::string out = root.toStyledString();
    // 输出无格式json字符串
    Json::FastWriter writer;
    std::string out2 = writer.write(root);

    std::cout<<out2<<std::endl;
}

int main()
{
    CJson s;
    s.ParseJsonFromString();
    s.SetJsonToString();

    return 0;
}