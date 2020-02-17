#include<iostream>
#include<cstdlib>
using namespace std;

//投骰子，计算和数，输出和数
int rollDice()
{
    int die1 = 1 + rand() % 6; 
    /*rand()函数原型：int rand(void)；
    所需头文件：<cstdlib>
    功能和返回值：求出并返回一个伪随机数*/ //伪随机数：虽然随机，但是每次运行产生的随机数一样
    int die2 = 1 + rand() % 6;
    int sum = die1 + die2;
    cout << "player rolled " << die1 << "+" << die2 << "=" << sum << endl;
    return sum;
}

enum GameStatus {WIN, LOSE, PLAYING};

int main()
{
    int sum, myPoint;
    GameStatus status;

    unsigned seed;
    cout << "Please enter an unsigned integer: ";
    cin >> seed;    //输入随机数种子
    srand(seed);    //将种子传递给rand()
    /* void srand(unsigned int seed);
    *  参数：seed产生随机数的种子
    *  所需头文件：<cstdlib>
    *  功能：为使rand()产生一序列伪随机整数而设置起始点。使用1作为seed参数，可以重新初化rand()*/

    sum = rollDice(); //第一轮投骰子，计算和数
    switch(sum)
    {
        case 7:
        case 11:
            status = WIN;   //若和数为7或11，则直接获胜，状态为WIN
            break;
        
        case 2:
        case 3:
        case 12:
            status = LOSE; //若和数为2，3或12，则为负，状态为LOSE
            break;
            
        default:
            status = PLAYING;
            myPoint = sum;
            cout << "point is " << myPoint << endl;
            break;
    }

    while(status == PLAYING)    //状态为PLAYING时，继续下一轮
    {
        sum == rollDice();
        if(sum == myPoint)  //某轮的和数等于点数则取胜，状态置为WIN
            status = WIN;
        else if(sum == 7)   //出现和数为7则为负，状态置为LOSE
            status = LOSE;
    }

    //状态不为PLAYING时，上面循环结束，按如下方式输出游戏结果
    if(status == WIN)
        cout << "player wins" << endl;
    else 
        cout << "player loses" << endl;

    return 0;


}