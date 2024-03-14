//Nombre: Garcia Jimenez Julia 
// Grupo:TM12
// Fecha:13/03/24
//

#include <iostream>
#include"Eigen/Dense"

using namespace std;
using namespace Eigen;

int foo = 98;
double F = 0;
double masa = 0;
char letra = 'a';
string texto = "El texto va entre comillas";
const double gravedad = 9.81;
bool respuesta = true;

int main()
{
    /*
    MatrixXd A(4, 4);
    A << 1, 2, 4, 6,
        4, 8, 6, 8,
        2, 8, 9, 9,
        5, 3, 2, 6;
    cout << A;
    cout << endl;
    cout << endl;

    MatrixXd B(4, 4);
    B << 1, 2, 3, 4,
        4, 5, 6, 6,
        7, 8, 9, 8,
        9, 6, 2, 3;
    cout << B;
    cout << endl;
    cout << endl;

    MatrixXd C(4, 4);
    C << 1, 2, 3, 9,
        4, 5, 6, 7,
        7, 8, 9, 5,
        8, 5, 2, 1;
    cout << C;
    cout << endl;
    cout << endl;

    cout << "C = A + B" << endl;
    cout << C + B;
    cout << endl;
    cout << endl;

    cout << "C = A - B" << endl;
    C = A - B; 
    cout << C;
    cout << endl;
    cout << endl;

    cout << "C = A * B" << endl;
    C = A * B;
    cout << C;
    cout << endl;

    cout << "det(A)=" << endl;
    cout << A.determinant();
    cout << endl;
    cout << endl;

    cout << "trans(A)=" << endl;
    cout << A.transpose();
    cout << endl;
    cout << endl;

    cout << "conj(A)=" << endl;
    cout << A.conjugate();
    cout << endl;
    cout << endl;

    cout << "inv(A)=" << endl;
    cout << A.inverse();
    cout << endl;
    cout << endl; 

    cout << "adj(A)=" << endl;
    cout << A.adjoint();
    cout << endl;
    cout << endl;
                                 */

    respuesta = 5;

    cout << respuesta << endl;
    cout << "(9 < 10) = " << (9 < 10) << endl;
    cout << "(9 > 10) = " << (9 > 10) << endl;
    cout << "(9 == 10) = " << (9 == 10) << endl;
    cout << "(9 != 10) = " << (9 != 10) << endl;
    cout << "(9 >= 10) = " << (9 >= 10) << endl;
    cout << "(9 <= 10) = " << (9 <= 10) << endl;


    MatrixXd A(4, 4);
    A << 1, 2, 4, 6,
        4, 8, 6, 8,
        2, 8, 9, 9,
        5, 3, 2, 6;
    cout << A;
    cout << endl;
    cout << endl;

    MatrixXd B(4, 4);
    B << 1, 2, 3, 4,
        4, 5, 6, 6,
        7, 8, 9, 8,
        9, 6, 2, 3;
    cout << B;
    cout << endl;
    cout << endl;

    cout << respuesta << endl;
    
    cout << "(A == B) = " << (A == B) << endl;
    cout << "(A != B) = " << (A != B) << endl;
    /*
    cout << "hola que \*llegaron\* tarde?" << endl;
    cout << "hola que \\*llegaron\\* tarde?" << endl;
    cout << "hola que \tllegaron\t tarde?" << endl;
    cout << "hola que \nllegaron\n tarde?" << endl;


    cout << "mi variable int es " << foo << endl;
    cout << "mi variable double es " << F << endl;
    cout << "mi variable char es " << letra << endl;
    cout << "mi variable string es " << texto << endl;

    cout << "¿Cual es tu masa? " << endl;
    cin >> masa;

    F = masa * gravedad;

    cout << "fuerza =" << F << endl;

    */


}
