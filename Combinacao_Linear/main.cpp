#include <iostream>

using namespace std;

int main() {
    int x, y, x2, y2,x3,y3, v = 0, v2 = 0, a = 0, b = 0, det = 0, det2 = 0, det3 = 0 ;

    cout << "\nInsira o valor de X1: ";
    cin >> x;
    cout << "\nInsira o valor de Y1: ";
    cin >> y;
    cout << "\nInsira o valor de X2: ";
    cin >> x2;
    cout << "\nInsira o valor de Y2: ";
    cin >> y2;
    cout << "\nInsira o valor de X3: ";
    cin >> x3;
    cout << "\nInsira o valor de Y3: ";
    cin >> y3;

    cout << "\nV1 = " << "( " << x << " , " << y << " )" << endl;
    cout << "\nV2 = " << "( " << x2 << " , " << y2 << " )" << endl;

    cout <<"\n|" << x << " " << y << "|";
    cout <<"\n|" << x2 << " " << y2 << "|" << endl;

    det = ((x*y2)-(x2*y));

    cout << "\nX1 * Y2 - X2 * Y1 = " << det << endl;
    if(det != 0){
        cout <<"\nOs vetores V1 e V2 formam base"<< endl;

        cout << "\nV = (" << x3 << " , " << y3 << ") => " << " V = a . V1 + b . V2 " << endl;
        cout << "\n(" << x3 << " , " << y3 << ") = " << "a * ( " << x << " , " << y << " )" << " + " << "b * ( " << x2 << " , " << y2 << " )" << endl;
        cout << "\n(" << x3 << " , " << y3 << ") = " << "( a * " << x << " + b * " << x2 << " , " << "a *  " << y << " +  b * " << y2 << " )" << endl;
        cout << "\n" << x << "a + " << x2 << "b = " << x3;
        cout << "\n" << y << "a + " << y2 << "b = " << y3 << endl;

        det2 = ((x3*y2)-(y3*x2));
        cout <<"\n|" << x3 << " " << x2 << "|";
        cout <<"\n|" << y3 << " " << y2 << "|" << endl;
        cout << "\nX3 * Y2 - Y3 * X2 = " << det2 << endl;

        a = (det2/det);
        cout << "\na = " << det2 << " / " << det << " = " << a << endl;

        det3 = ((x*y3)-(y*x3));
        cout <<"\n|" << x << " " << x3 << "|";
        cout <<"\n|" << y << " " << y3 << "|" << endl;
        cout << "\nX1 * Y3 - Y1 * X3 = " << det3 << endl;

        b = (det3/det);
        cout << "\na = " << det3 << " / " << det << " = " << b << endl;

        v = ((a * x) + (b * x2));
        v2 = ((a * y) + (b * y2));

        cout <<"\n v = ( " << a << " * " << x << " + " << b << " * " << x2 << " , " << a << " * " << y << " + " << b << " * " << y2 << " = " << "( " << v << " , " << v2 <<" )" << endl;

    }else cout << "\n Os vetores sao L.D e nao formam base"<< endl;


    return 0;
}
