

/*
 * @Author       : Jingsheng Lyu
 * @Date         : 2020-07-20 07:47:20
 * @LastEditors  : Jingsheng Lyu
 * @LastEditTime : 2020-07-20 18:15:55
 * @FilePath     : /undefined/home/jingsheng/C_Learning/Udacity_C++/a16/a16.cpp
 * @Github       : https://github.com/jingshenglyu
 * @Web          : https://jingshenglyu.github.io/
 * @E-Mail       : jingshenglyu@gmail.com
 */ 
// # In the robot localization lectures, Sebastian Thrun led you through Python code 
// # for one-dimensional robot sensing and robot movement. You ended up with a sense() 
// # function for updating probabilities based on a sensor measurement. You also had 
// # a move() function that updated probabilities based on robot movement across a grid.

// # Translate the following code from Python into C++:

#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<float> sense(vector<float> p, vector<float> Z);
vector<float> move(vector<float> p, vector<float> U);

int main()
{
    vector<float> p(5, 0.2);
    vector<float> motions(2,1);

    vector<string> world;
    vector<string> measurements = {"red", "green"};
    world = {"green", "red", "red", "green", "green"};

    float pHit = 0.6;
    float pMiss = 0.2;
    float pExact = 0.8;
    float pOvershoot = 0.1;
    float pUndershoot = 0.1;

    for(int k=0; k<measurements.size(); k++)
    {
        p[k] = snese(p, measurements[k]);
        p[k] = move(p, motions[k]);
    }

    return 0;
}