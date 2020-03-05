// class CLIENT
/*static data member: ServerName 保存服务器名称
  static data int member: ClientNum 记录已定义的客户数量
  static function: ChangeServerName() 改变服务器名称
  client.h: 声明类
  client.cpp： 实现
  test.cpp： 测试该类
  观察成员变量的取值情况
*/

#include<iostream>
#include"client.h"
using namespace std;

/*静态数据成员不属于任何类，所以需要在类外进行单独初始化*/
int Client::ClientNum = 0;
char Client::ServerName = 'a';

int main()
{
    Client c1;
    c1.ChangeServerName('a');
    cout << c1.getClientNum() << endl;

    Client c2;
    c2.ChangeServerName('b');
    cout << c2.getClientNum() << endl;

    return 0;
}