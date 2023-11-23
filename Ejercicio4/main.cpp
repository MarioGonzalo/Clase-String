#include <iostream>
#include <string>

using namespace std; // Utilizando el espacio de nombres std para no escribir std:: antes de cada función

int main() {
    string sentence = "Elimina la palabra que quieras de esta frase."; // Frase a modificar
    cout << "Tienes esta frase: " << sentence << endl;
    string sub_str;
    cout << "Ingresa la palabra que eliminar: ";
    cin >> sub_str;// Se coge la palabra a eliminar

    size_t pos = sentence.find(sub_str);
    // Se busca la palabra en la frase
    if(pos != string::npos){
        //Si se encuentra se muestra la posición
        cout << "Subcadena encontrada en la posición: " << pos << endl;
    }
    else {
        // Si no se encuentra se muestra un mensaje y se termina el programa
        cout << "Subcadena no encontrada." << endl;
        return 0;
    }

    string new_sub_str ;
    cout << "Ingresa la palabra que reemplazará a la anterior: ";
    cin >> new_sub_str;// Se coge la palabra a reemplazar

    string new_sentence = sentence.replace(pos, sub_str.length(), new_sub_str);// Se reemplaza la palabra en la frase

    cout << "Frase resultante: " << new_sentence << endl;// Se muestra la frase resultante
    return 0;
}