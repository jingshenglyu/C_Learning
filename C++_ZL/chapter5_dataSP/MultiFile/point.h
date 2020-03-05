//point.h Head File

class Point
{
private:
    int x, y;
    static int count;   // static data member
public:
    Point(int x = 0, int y = 0): x(x), y(y) {} //constructor
    Point(const Point &p);  // const reference(cp constr.)
    ~Point(){count--;}  //destructor

    int getX() const    //const member function
    {
        return x;
    }
    int getY() const
    {
        return y;
    }
    static void showCount();    //static function
};

