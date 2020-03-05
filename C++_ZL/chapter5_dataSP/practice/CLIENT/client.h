// class CLIENT
/*static data member: ServerName 保存服务器名称
  static data int member: ClientNum 记录已定义的客户数量
  static function: ChangeServerName() 改变服务器名称
  client.h: 声明类
  client.cpp： 实现
  test.cpp： 测试该类
  观察成员变量的取值情况
*/

#ifndef CLIENT_H_   //为了避免重复包含头文件，使用编译预处理指令
#define CLIENT_H_

class Client
{
    static char ServerName; //静态字符型数据成员
    static int ClientNum;   //静态整型数据成员

public:
    static void ChangeServerName(char name); //静态成员函数：改变服务器名称
    static int getClientNum();      //静态成员函数：获取当前服务器个数
    
};

#endif //为了避免重复包含头文件，使用编译预处理指令