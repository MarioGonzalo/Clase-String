#include <iostream>
#include <string>

using namespace std;

int main() {
    string sentence;
    cout << "Introduce una frase: "; // Introducimos una frase
    getline(cin, sentence);
    cout << "La frase tiene " << sentence.size()<< " caracteres" << endl;// Mostramos el tamaño de la frase
    cout << "¿Está la cadena vacía? " << system("pause")<< (sentence.empty() ? "Sí" : "No") << endl; // Comprobamos si la cadena está vacía
    return 0;
}