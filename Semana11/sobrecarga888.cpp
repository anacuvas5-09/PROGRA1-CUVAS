#include <iostream>

using namespace std;

class Operaciones
{
public:

    int multiplicar(int x, int y)
    {
        cout << "Multiplicando enteros: " << x << " x " << y << endl;
        return x * y;
    }

    double multiplicar(double x, double y)
    {
        cout << "Multiplicando decimales: " << x << " x " << y << endl;
        return x * y;
    }
    int multiplicar(int x, int y, int z)
    {
        cout << "Multiplicando tres enteros: "
             << x << " x " << y << " x " << z << endl;

        return x * y * z;
    }
};

int main()
{
    Operaciones op;

    cout << op.multiplicar(4, 5) << endl;
    cout << op.multiplicar(2.5, 4.0) << endl;
    cout << op.multiplicar(2, 3, 4) << endl;

    return 0;
}