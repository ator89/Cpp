#include <iostream>

using namespace std;
typedef double TresReales[3];

struct Grupito{
    int a;
    bool b;
    char c;
};

struct Punto2D{
    double x, y;
};
struct Segmento2D{
    Punto2D inicio, fin;
};

int main(){

    TresReales R = {0.5, 1.0,2.5};
    TresReales S;
    Grupito G = { 1,false, 's'};
    Grupito H;

    Punto2D p = {0.3,1.0};
    Segmento2D s;

    s.inicio.x = 0.2;
    s.inicio.y = 0.1;

    cout << s.inicio.x << endl;

    return 0;
}
