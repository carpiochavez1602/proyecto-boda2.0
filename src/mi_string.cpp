#include "mi_string.h"

// --- funciones internas ---
int String::medirLongitud(const char* s) const {
    int c = 0;
    while (s[c] != '\0') c++;
    return c;
}

void String::copiarCadena(char* dest, const char* src) const {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

// --- constructores y destructor ---
String::String() {
    longitud = 0;
    dato = new char[1];
    dato[0] = '\0';
}

String::String(const char* s) {
    longitud = medirLongitud(s);
    dato = new char[longitud + 1];
    copiarCadena(dato, s);
}

String::String(const String& otro) {
    longitud = otro.longitud;
    dato = new char[longitud + 1];
    copiarCadena(dato, otro.dato);
}

String& String::operator=(const String& otro) {
    if (this != &otro) {
        delete[] dato;
        longitud = otro.longitud;
        dato = new char[longitud + 1];
        copiarCadena(dato, otro.dato);
    }
    return *this;
}

String::~String() {
    delete[] dato;
}

// --- métodos ---
const char* String::c_str() const {
    return dato;
}

int String::length() const {
    return longitud;
}

void String::append(const char* s) {
    int addLen = medirLongitud(s);
    int newLen = longitud + addLen;

    char* newData = new char[newLen + 1];

    for (int i = 0; i < longitud; i++)
        newData[i] = dato[i];

    for (int i = 0; i < addLen; i++)
        newData[longitud + i] = s[i];

    newData[newLen] = '\0';

    delete[] dato;
    dato = newData;
    longitud = newLen;
}

bool String::equals(const String& otro) const {
    if (longitud != otro.longitud) return false;
    for (int i = 0; i < longitud; i++)
        if (dato[i] != otro.dato[i]) return false;
    return true;
}

std::ostream& operator<<(std::ostream& os, const String& s) {
    os << s.dato;
    return os;
}

