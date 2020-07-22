

/*
 * @Author       : Jingsheng Lyu
 * @Date         : 2020-07-20 18:20:18
 * @LastEditors  : Jingsheng Lyu
 * @LastEditTime : 2020-07-22 22:53:13
 * @FilePath     : /undefined/home/jingsheng/C_Learning/Udacity_C++/a17_p/main.cpp
 * @Github       : https://github.com/jingshenglyu
 * @Web          : https://jingshenglyu.github.io/
 * @E-Mail       : jingshenglyu@gmail.com
 */
#include <iostream>

// class declaration
class Gaussian
{
private:
    float mu, sigma2;

public:
    // constructor functions
    Gaussian();
    Gaussian(float, float);

    // change value of average and standard deviation
    void setMu(float);
    void setSigma2(float);

    // output value of average and standard deviation
    float getMu();
    float getSigma2();

    //functions to evaluate
    float evaluate(float);
    Gaussian mul(Gaussian);
    Gaussian add(Gaussian);
};

int main()
{
    Gaussian mygaussian(30.0, 100.0);
    Gaussian othergaussian(10.0, 25.0);

    std::cout << "average " << mygaussian.getMu() << std::endl;
	std::cout << "evaluation " << mygaussian.evaluate(15.0) << std::endl;

	std::cout << "mul results variance " << mygaussian.mul(othergaussian).getSigma2() << std::endl;
	std::cout << "mul results average " << mygaussian.mul(othergaussian).getMu() << std::endl;

	std::cout << "add results variance " << mygaussian.add(othergaussian).getSigma2() << std::endl;
	std::cout << "add results average " << mygaussian.add(othergaussian).getMu() << std::endl;

    return 0;
}