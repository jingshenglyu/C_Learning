

/*
 * @Author       : Jingsheng Lyu
 * @Date         : 2020-07-19 08:32:25
 * @LastEditors  : Jingsheng Lyu
 * @LastEditTime : 2020-07-19 09:34:59
 * @FilePath     : /undefined/home/jingsheng/C_Learning/Udacity_C++/au14/main.cpp
 * @Github       : https://github.com/jingshenglyu
 * @Web          : https://jingshenglyu.github.io/
 * @E-Mail       : jingshenglyu@gmail.com
 */ 
#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
#include<vector>
#include<typeinfo>

using namespace std;

// int main()
// {
//     string line;
//     stringstream ss;

//     vector< vector<float> > matrix;
//     vector<float> row;

//     // count for chars in a text file line
//     float i;

//     // read in the file
//     ifstream matrixfile("matrix.txt");

//     // read line by line
//     if(matrixfile.is_open())
//     {
//         while(getline (matrixfile, line))
//         {
//             // parse the text line with a stringstream
//             // clear the string stream to hold the next line
//             ss.clear();
//             ss.str("");
//             ss.str(line);
//             row.clear();

//             // parse each line and push to the end of the row vector
//             while(ss>>i)
//             {
//                 row.push_back(i);

//                 if(ss.peek() == ',' || ss.peek() == ' ')
//                 {
//                     ss.ignore();
//                 }
//             }

//             // push the row to the end of the matrix
//             matrix.push_back(row);
//         }

//         // close the file
//         matrixfile.close();

//         //print the matrix
//         for(int row=0; row<matrix.size(); row++)
//         {
//             for(int column=0; column<matrix[row].size(); column++)
//             {
//                 cout << matrix[row][column] << " ";
//             }
//             cout << endl;
//         }
//     }
//     else cout << "Unable to open file";

//     return 0;
// }

int main()
{
	float matrix[3][4] = { 0.0 };//定义一个3*4的矩阵，用于存放数据
	ifstream infile;//定义读取文件流，相对于程序来说是in
	infile.open("matrix.txt");//打开文件

    for (int i = 0; i < 3; i++)//定义行循环
	{
		for (int j = 0; j < 4; j++)//定义列循环
		{
			cout << matrix[i][j] << " ";//读取一个值（空格、制表符、换行隔开）就写入到矩阵中，行列不断循环进行
		}
        cout << endl;
	}

	for (int i = 0; i < 3; i++)//定义行循环
	{
		for (int j = 0; j < 4; j++)//定义列循环
		{
			infile >> matrix[i][j];//读取一个值（空格、制表符、换行隔开）就写入到矩阵中，行列不断循环进行
		}
	}
	infile.close();//读取完成之后关闭文件
	// cout << matrix[1][0] <<','<<matrix[1][1]<< endl;//以下代码是用来验证读取到的值是否正确
	// cout << matrix[2][0] << ',' << matrix[2][1] << endl;

    // print matrix
    for (int i = 0; i < 3; i++)//定义行循环
	{
		for (int j = 0; j < 4; j++)//定义列循环
		{
			cout << matrix[i][j] << " ";//读取一个值（空格、制表符、换行隔开）就写入到矩阵中，行列不断循环进行
		}
        cout << endl;
	}
	cout << typeid(matrix[3][0]).name()  << endl;
	cout << "Hello" << endl;
	system("pause");
	return 0;
}