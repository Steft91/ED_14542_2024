#include <iostream>
#include <conio.h>

using namespace std;

void recorrerLista(int arregloNumeros[],int tamaño);
int *insertarElementoInicio(int arregloNumeros[],int nuevoNumero, int tamaño);
int *insertaElementoIndice(int arregloNumeros[],int tamaño,int nuevoNumero, int indice);
int *insertaElementoIndiceDespues(int arregloNumeros[],int tamaño,int nuevoNumero, int indice);
int *insertaElementoIndiceAntes(int arregloNumeros[],int tamaño,int nuevoNumero, int indice);
int *eliminarElementoLista(int arregloNumeros[], int tamaño, int indice);
int *buscarElemnto(int arregloNumeros[], int tamaño, int buscador);

int main(){
// Variables para el funcionamiento
    int listaNumeros[5] = {2,3,4,5,6}, nuevoNumeros = 7, indice = 2, numeroIndiceDespues = 8 , numeroIndiceAntes = 9, eliminarIndice = 3,buscador = 4;
    int tamaño = sizeof(listaNumeros)/ sizeof(listaNumeros[0]); 

    cout<<"Recorrer la lista:"<<endl;
    recorrerLista(listaNumeros,tamaño);
    cout<<endl;
    cout<<"Insertar un elemento en el inicio:"<<endl;
    insertarElementoInicio(listaNumeros,nuevoNumeros,tamaño);
    cout<<endl;
    cout<<"Insertar un elemento en un indice:"<<endl;
    insertaElementoIndice(listaNumeros,tamaño,nuevoNumeros,indice);
    cout<<endl;
    cout<<"Insertar un elemento despues de un indice:"<<endl;
    insertaElementoIndiceDespues(listaNumeros,tamaño,numeroIndiceDespues,indice);
    cout<<endl;
    cout<<"Insertar un elemento antes de un indice:"<<endl;
    insertaElementoIndiceAntes(listaNumeros,tamaño,numeroIndiceAntes,indice);
    cout<<endl;
    cout<<"Eliminar un elemento:"<<endl;
    eliminarElementoLista(listaNumeros,tamaño,eliminarIndice);
    cout<<endl;
    cout<<"Buscar un elemento:"<<endl;
    buscarElemnto(listaNumeros,tamaño,buscador);
    cout<<endl;


    system("pause");
    return 0;
}

void recorrerLista(int arregloNumeros[],int tamaño){

    for(int i = 0; i < tamaño; i++){
        cout<<"Indice -> "<<"["<<i+1<<"] ->"<<arregloNumeros[i]<<endl;
    }

}

int *insertarElementoInicio(int arregloNumeros[],int nuevoNumero,int tamaño){

    for(int i = tamaño - 1; i > 0; i-- ){
        arregloNumeros[i] = arregloNumeros[i - 1];
    }
    arregloNumeros[0] = nuevoNumero;

    cout<<"Lista nueva -> ";  

    for(int i = 0; i < tamaño; i++){
        cout<<arregloNumeros[i]<<" ";
    }
    cout<<endl;

    return arregloNumeros;
}

int *insertaElementoIndice(int arregloNumeros[], int tamaño, int nuevoNumero, int indice) {
    if(indice >= 0 && indice <= tamaño) {
        for(int i = tamaño - 1; i >= indice; i--) {
            if(i == indice) {
                arregloNumeros[i] = nuevoNumero;
                break;
            }
            arregloNumeros[i] = arregloNumeros[i - 1];
        }

        cout<<"Lista nueva -> ";  
        for(int i = 0; i < tamaño; i++) {
            cout<<arregloNumeros[i] << " ";
        }
        cout<<endl;
    } else {
        cout<<"El índice no es válido."<<endl;
    }

    return arregloNumeros;
}

int *insertaElementoIndiceDespues(int arregloNumeros[], int tamaño, int nuevoNumero, int indice) {
    if(indice >=0 && indice <= tamaño){
        for(int i = tamaño - 1; i >= indice; i--) {

        if(i == indice + 1) {
            arregloNumeros[i] = nuevoNumero;
            break;
        }
        arregloNumeros[i] = arregloNumeros[i - 1];
    }
    cout<<"Lista nueva -> ";  
    for(int i = 0; i < tamaño; i++) {
        cout<<arregloNumeros[i]<<" ";
    }
    cout<<endl;
    }else{
        cout<<"El índice no es válido."<<endl;
    }
    
    

    return arregloNumeros;
}


int *insertaElementoIndiceAntes(int arregloNumeros[], int tamaño, int nuevoNumero, int indice) {
    if(indice >=0 && indice <= tamaño){
        for(int i = tamaño - 1; i >= 0; i--) {
        if(i == (indice - 1)) {
            arregloNumeros[i] = nuevoNumero;
            break;
        }
        arregloNumeros[i] = arregloNumeros[i - 1];
    }

    tamaño--;

    cout<<"Lista nueva -> ";
    for(int i = 0; i < tamaño + 1; i++) {
        cout<<arregloNumeros[i]<<" ";
    }
    cout<<endl;

    }else{
        cout<<"El índice no es válido."<<endl;
    }
    

    return arregloNumeros;
}


int *eliminarElementoLista(int arregloNumeros[], int tamaño, int eliminarIndice){

    if(eliminarIndice >=0 && eliminarIndice <= tamaño){
        arregloNumeros[eliminarIndice] = 0; 
        cout << "Lista nueva -> ";
        for(int i = 0; i < tamaño; i++) {
            cout<<arregloNumeros[i]<<" ";
        }
        cout<<endl;
    }else{  
        cout<<"No existe la posicion en el arreglo"<<endl;
    }

    return arregloNumeros;
}


int *buscarElemnto(int arregloNumeros[], int tamaño, int buscador){

    for(int i = 0; i < tamaño - 1; i++){
        if(i >= 0 && i < tamaño){
            cout<<"Numero -> "<<arregloNumeros[buscador]<<" Indice -> "<<"["<<buscador<<"]";
            cout<<endl;
            break;
        }else{
            cout<<"El indice para buscar en el arreglo no existe"<<endl;
        }
    }

    return arregloNumeros;

}
