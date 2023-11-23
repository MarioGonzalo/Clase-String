#include <iostream>
#include <string>

using namespace std; // Usando el espacio de nombres std para no escribir std:: antes de cada función

int main() {
    string str;
    cout << "Ingresa una frase: ";
    getline(cin, str); // Obtener la cadena de texto
    int a;
    int b;
    cout << "Ingresa el caracter inicial: ";
    cin >> a;
    cout << "Ingresa la longitud de lo que quieres sacar: ";
    cin >> b;
    string sub_str = str.substr(a, b); // Obtener la subcadena

    string str_2;
    cout << "Ingresa una palabra que añadir al principio: ";
    cin >> str_2;
    string new_str = str.insert(0, str_2); // Añadir la palabra al principio de la cadena

    cout << "Subcadena: " << sub_str << endl; // Imprimir la subcadena
    cout << "Cadena resultante: " << new_str << endl;// Imprimir la cadena resultante
    return 0;
}
