// class CLIENT
/*static data member: ServerName 保存服务器名称
  static data int member: ClientNum 记录已定义的客户数量
  static function: ChangeServerName() 改变服务器名称
  client.h: 声明类
  client.cpp： 实现
  test.cpp： 测试该类
  观察成员变量的取值情况
*/

#include "client.h"

/*静态成员函数，访问的是静态数据成员，所以引用静态数据成员时，需要加“类名::”来修饰*/
void Client::ChangeServerName(char name)    //函数体，改变服务器名称
{
    Client::ServerName = name;  //改变服务器名称
    Client::ClientNum++;    //服务器个数增一
}

int Client::getClientNum()  //函数体，获取服务器个数
{
    return Client::ClientNum;   //将获取的服务器个数返回
}
