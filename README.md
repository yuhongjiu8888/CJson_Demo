# CJson_Demo
此项目依赖jsoncpp库。

1. Jsoncpp介绍

　　(1)JsonCpp主要包含三种类型的class:Value Reader Writer;

　　　　Json::Value 是jsoncpp 中最基本、最重要的类，用于表示各种类型的对象，jsoncpp 支持的对象类型可见 Json::ValueType 枚举值。

　　　　Json::Reader 是用于读取的，说的确切点，是用于将字符串转换为 Json::Value 对象的。

　　　　Json::Writer 类是一个纯虚类，并不能直接使用。在此我们使用 Json::Writer 的子类：Json::FastWriter、Json::StyledWriter、Json::StyledStreamWriter。

　　(2)Jsoncpp中所有对象、类名都在namespace json中，包含json.h即可
  
  
  2.编译
    g++ -g3 -o testJsoncpp CJson.cpp -I/data/jsoncpp/include  -L/data/jsoncpp/libs -ljsoncpp
