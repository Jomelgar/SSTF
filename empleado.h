#ifndef EMPLEADO_H
#define EMPLEADO_H
//#include <QMainWindow>
//#include <QMessageBox>
//#include <QInputDialog>
#include <iostream>
using std::string;
using std::cout;

class empleado
{
private:
    char *DNI;
    string Nombre, Apellidos, Cargo;
    int Edad;
    char Genero;
    float Salario;
public:
    empleado();
    empleado(char *DNI, string Nombre, string Apellidos, string Cargo, int Edad, char Genero, float Salario);
    ~empleado();
    const std::string &getNombre() const;
    void setNombre(const std::string &newNombre);
    const std::string &getApellidos() const;
    void setApellidos(const std::string &newApellidos);
    const std::string &getCargo() const;
    void setCargo(const std::string &newCargo);
    int getEdad() const;
    void setEdad(int newEdad);
    char getGenero() const;
    void setGenero(char newGenero);
    float getSalario() const;
    void setSalario(float newSalario);
    char *getDNI() const;
    void setDNI(char *newDNI);
};

#endif // EMPLEADO_H
