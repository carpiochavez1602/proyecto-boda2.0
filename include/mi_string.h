#ifndef MI_STRING_H
#define MI_STRING_H
#include <mi_string.h>
#include <iostream> // solo para std::cout

class String {
private:
    char* dato;
    int longitud;

    int medirLongitud(const char* s) const;
    void copiarCadena(char* dest, const char* src) const;

public:
    String();                     // constructor vacío
    String(const char* s);        // constructor desde const char*
    String(const String& otro);   // constructor copia
    String& operator=(const String& otro); // asignación
    ~String();                     // destructor

    const char* c_str() const;    // devuelve const char*
    int length() const;           // devuelve longitud
    void append(const char* s);   // concatena texto

    bool equals(const String& otro) const; // compara
    friend std::ostream& operator<<(std::ostream& os, const String& s); // imprimir
};

#endif
