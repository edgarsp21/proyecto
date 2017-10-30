#include <iostream>
using namespace std;
int main(){
    int opc, opc1, z;
    double a, k, f, c, r;
    do {
        cout<<"Selecciona una opcion:"<<endl;
        cout<<"1. Fahrenheit a Celsius."<<endl;
        cout<<"2. Fahrenheit a Kelvin."<<endl;
        cout<<"3. Fahrenheit a Rankine."<<endl;
        cout<<"4. Celsius a Fahrenheit."<<endl;
        cout<<"5. Kelvin a  Fahrenheit."<<endl;
        cout<<"6. Rankine a Fahrenheit."<<endl;
        cout<<"7. Celsius a Kelvin."<<endl;
        cout<<"8. Celsius a Rankine."<<endl;
        cout<<"9. Kelvin a Celsius."<<endl;
        cout<<"10. Kelvin a Rankine."<<endl;
        cout<<"11. Rankine a Celsius."<<endl;
        cout<<"12. Rankine a Kelvin."<<endl;
        cout<<"13. SALIR."<<endl;
        cin>>opc;
        if (opc>13) {
            cout<<"NO EXISTE ESTA OPCION."<<endl;
            cout<<"¿Deseas regresar al menu principal?"<<endl;
            cout<<"2=SI y 1=NO"<<endl;
            cin>>opc1;
        }
        switch (opc) {
            case 1:
                cout<<"Ingresa los grados:"<<endl;
                cin>>a;
                f=(a-32)/1.8;
                cout<<"Los grados son:"<<" "<<f<<endl;
                cout<<"¿Desea realizar otra operacion?"<<endl;
                cout<<"2=Si y 1=NO"<<endl;
                cin>>opc1;
                break;
            case 2:
                cout<<"Ingresa los grados:"<<endl;
                cin>>a;
                f=(a+459.67)/1.8;
                cout<<"Los grados son:"<<" "<<f<<endl;
                cout<<"¿Desea realizar otra operacion?"<<endl;
                cout<<"2=Si y 1=NO"<<endl;
                cin>>opc1;
                break;
            case 3:
                cout<<"Ingresa los grados:"<<endl;
                cin>>a;
                f=a+459.67;
                cout<<"Los grados son: "<<" "<<f<<endl;
                cout<<"¿Desea realizar otra operacion?"<<endl;
                cout<<"2=Si y 1=NO"<<endl;
                cin>>opc1;
                break;
            case 4:
                cout<<"Ingresa los grados:"<<endl;
                cin>>a;
                c=(1.8*a)+32;
                cout<<"Los grados son: "<<" "<<c<<endl;
                cout<<"¿Desea realizar otra operacion?"<<endl;
                cout<<"2=Si y 1=NO"<<endl;
                cin>>opc1;
                break;
            case 5:
                cout<<"Ingresa los grados:"<<endl;
                cin>>a;
                k=(9/5*a)-459.67;
                cout<<"Los grados son:"<<" "<<k<<endl;
                cout<<"¿Desea realizar otra operacion?"<<endl;
                cout<<"2=Si y 1=NO"<<endl;
                cin>>opc1;
                break;
            case 6:
                cout<<"Ingresa los grados:"<<endl;
                cin>>a;
                r=(a-459.67);
                cout<<"¿Desea realizar otra operacion?"<<endl;
                cout<<"2=Si y 1=NO"<<endl;
                cin>>opc1;
                break;
            case 7:
                cout<<"Ingresa los grados:"<<endl;
                cin>>a;
                c=a+273.15;
                cout<<"Los grados son:"<<" "<<c<<endl;
                cout<<"¿Desea realizar otra operacion?"<<endl;
                cout<<"2=Si y 1=NO"<<endl;
                cin>>opc1;
                break;
            case 8:
                cout<<"Ingresa los grados:"<<endl;
                cin>>a;
                c=(9*a)/5+491.67;
                cout<<"Los grados son:"<<" "<<c<<endl;
                cout<<"¿Desea realizar otra operacion?"<<endl;
                cout<<"2=Si y 1=NO"<<endl;
                cin>>opc1;
                break;
            case 9:
                cout<<"Ingresa los grados:"<<endl;
                cin>>a;
                k=a-273.15;
                cout<<"Los grados son:"<<" "<<k<<endl;
                cout<<"¿Desea realizar otra operacion?"<<endl;
                cout<<"2=Si y 1=NO"<<endl;
                cin>>opc1;
                break;
            case 10:
                cout<<"Ingresa los grados:"<<endl;
                cin>>a;
                k=9*(a-273.15)/5+491.67;
                cout<<"Los grados son:"<<" "<<k<<endl;
                cout<<"¿Desea realizar otra operacion?"<<endl;
                cout<<"2=Si y 1=NO"<<endl;
                cin>>opc1;
                break;
            case 11:
                cout<<"Ingresa los grados:"<<endl;
                cin>>a;
                r=5*(a-491.67)/9;
                cout<<"Los grados son:"<<" "<<r<<endl;
                cout<<"¿Desea realizar otra operacion?"<<endl;
                cout<<"2=Si y 1=NO"<<endl;
                cin>>opc1;
                break;
            case 12:
                cout<<"Ingresa los grados:"<<endl;
                cin>>a;
                r=5*(a-491.67)/9+273.15;
                cout<<"Los grados son:"<<" "<<r<<endl;
                cout<<"¿Desea realizar otra operacion?"<<endl;
                cout<<"2=Si y 1=NO"<<endl;
                cin>>opc1;
                break;
            case 13:
                cout<<"¿Seguro que desea salir?"<<endl;
                cout<<"1=SI y 2=NO"<<endl;
                cin>>opc1;
                break;
            default:
                break;
        }
    } while (opc1>1 && opc1<=2);
    return 0;
}
