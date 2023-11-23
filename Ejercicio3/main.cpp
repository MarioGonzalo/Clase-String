#include <iostream>
#include <string>

using namespace std;// Para no escribir std:: antes de cada comando de la libreria

int main() {
    // Declaracion de variables
    string str1;
    cout << "Ingrese texto: ";
    getline(cin, str1);// Para recibir texto con espacios y almacenarlo en str1
    string str2;
    cout << "Ingrese texto que sigue al anterior: ";
    getline(cin, str2);// Para recibir texto con espacios y almacenarlo en str2
    string str3 = str1 + " " + str2;// Concatenacion de ambos textos
    cout << "Concatenacion de ambos textos " << str3 << endl;// Imprimir texto concatenado
    return 0;
}