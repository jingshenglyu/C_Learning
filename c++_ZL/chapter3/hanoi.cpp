/* 实现这个算法可以简单分为三个步骤：
1. 把n-1个盘子由A 移到 B；
2. 把第n个盘子由 A移到 C；
3. 把n-1个盘子由B 移到 C；

上面步骤包含两种操作：
1. 将多个盘子从一个针移到另一针，这是一个递归过程
2. 将一个盘子从一个针移到另一针。
*/

#include<iostream>
using namespace std;

//将src针(源)的最上面的一个盘子移动到dest针(目标)上
void move(char src, char dest)
{
    cout << src << "--->" << dest << endl;
}

//将n个盘子从src针移动到dest针，以medium作为媒介
void hanoi(int n, char src, char medium, char dest)
{
    if(n == 1)
        move(src, dest);
    else 
    {
        /*算法实现，如最上面所示*/
        hanoi(n - 1, src, dest, medium);
        move(src, dest);
        hanoi(n - 1, medium, src, dest);
    }
}

int main()
{
    int m;
    cout << "Enter the number of diskes: ";
    cin  >> m;
    cout << "the steps to moving" << m << "diskes:" << endl;
    hanoi(m, 'A', 'B', 'C');
    return 0;
}