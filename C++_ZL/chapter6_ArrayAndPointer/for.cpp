int main()

{

int array[3] = {1,2,3};

for(int & e : array)

{

    e += 2;

    std::cout<<e<<std::endl;

}

 

return 0;

}