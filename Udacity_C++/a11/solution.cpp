// Question:
// Now it's your turn to make some programs with vectors. Here is a playground where you can write your program.

// Idea 1
// First, try writing a program that initializes a vector of size 3. 
// The values for this vector are [5, 10, 27]. Initialize another vector of 
// size 3 with the values [3, 17, 12]. Now subtract the two vectors from 
// each other and output the results.

// To get even more practice, write a function that takes in two vectors and then 
// outputs the difference between the vectors. Assume that the two vectors are the same size; 
// otherwise you would have to check that they are the same size and include some error checking.

// Idea 2
// Initialize a vector with the values [17, 10, 31, 5, 7]. 
// Initialize another vector with the values [3, 1, 6, 19, 8]. 
// Then, output another vector that contains the product of each element. 
// In other words, the vector should have [17×3, 10×1, 31×6, 5×19, 7×8].

// To get even more practice, write a function that takes in two vectors and then 
// outputs a new vector that is the result of element by element multiplication. 
// Assume that the two vectors are the same size; otherwise you would have to check 
// that they are the same size and do some error checking.


//TODO: Use this as a playground to practice with vectors


//TODO:
// Fill out your program's header. The header should contain any necessary
// include statements and also function declarations
#include<iostream>
#include<vector>

using namespace std;

vector<float> difference(vector<float> x, vector<float> y);
vector<float> multiply(vector<float> x, vector<float> y);

//TODO:
// Write your main program. Remember that all C++ programs need
// a main function. The most important part of your program goes
// inside the main function. 

int main()
{
    vector<float> vector1(3);
    vector<float> vector2(3);
    vector<float> sub_vector(vector1.size());

    vector<float> vector3(5);
    vector<float> vector4(5);
    vector<float> mul_vector(vector3.size());


    // vector1.push_back(5.0);
    // vector1.push_back(10.0);
    // vector1.push_back(27.0);

    // vector2.push_back(3.0);
    // vector2.push_back(17.0);
    // vector2.push_back(12.0);
    cout << "vector difference: " << endl;
    vector1[0] = 5.0;
    vector1[1] = 10.0;
    vector1[2] = 27.0;

    vector2[0] = 3.0;
    vector2[1] = 17.0;
    vector2[2] = 12.0;

    sub_vector = difference(vector1, vector2);

    for (int i = 0; i < sub_vector.size(); i++)
    {   
        cout << sub_vector[i] << endl;
    }

    // vector multiply 
    cout << "vector multiply: " << endl;
    vector3[0] = 17.0;
    vector3[1] = 10.0;
    vector3[2] = 31.0;
    vector3[3] = 5.0;
    vector3[4] = 7.0;

    vector4[0] = 3.0;
    vector4[1] = 1.0;
    vector4[2] = 6.0;
    vector4[3] = 19.0;
    vector4[4] = 8.0;

    mul_vector = multiply(vector3, vector4);
    for (int i = 0; i < mul_vector.size(); i++)
    {
        cout << mul_vector[i] << endl;
    }
    
    
    return 0;
}

vector<float> difference(vector<float> x, vector<float> y){
    vector<float> diff_vector(x.size());

    for (int i = 0; i < diff_vector.size(); i++)
    {
        diff_vector[i] = x[i] - y[i];
    }
    return diff_vector;
}

vector<float> multiply(vector<float> x, vector<float> y) {
    vector<float> mul_vector(x.size());

    for (int i = 0; i < mul_vector.size(); i++)
    {
        mul_vector[i] = x[i] * y[i];
    }
    return mul_vector;
}