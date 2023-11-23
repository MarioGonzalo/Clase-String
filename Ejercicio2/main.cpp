#include <iostream>
#include <string>

using namespace std;

int main() {
    string sentence;
    cout << "Introduce una frase: ";
    getline(cin, sentence);
    cout << "La frase tiene " << sentence.size()<< " caracteres" << endl;
    cout << "¿Está la cadena vacía? " << system("pause")<< (sentence.empty() ? "Sí" : "No") << endl;
    return 0;
}