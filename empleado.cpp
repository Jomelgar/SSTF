#include "empleado.h"

const std::string &empleado::getNombre() const
{
    return Nombre;
}

void empleado::setNombre(const std::string &newNombre)
{
    Nombre = newNombre;
}

const std::string &empleado::getApellidos() const
{
    return Apellidos;
}

void empleado::setApellidos(const std::string &newApellidos)
{
    Apellidos = newApellidos;
}

const std::string &empleado::getCargo() const
{
    return Cargo;
}

void empleado::setCargo(const std::string &newCargo)
{
    Cargo = newCargo;
}

int empleado::getEdad() const
{
    return Edad;
}

void empleado::setEdad(int newEdad)
{
    Edad = newEdad;
}

char empleado::getGenero() const
{
    return Genero;
}

void empleado::setGenero(char newGenero)
{
    Genero = newGenero;
}

float empleado::getSalario() const
{
    return Salario;
}

void empleado::setSalario(float newSalario)
{
    Salario = newSalario;
}

char *empleado::getDNI() const
{
    return DNI;
}

void empleado::setDNI(char *newDNI)
{
    DNI = newDNI;
}

empleado::empleado()
{
    this->DNI = new char[15];
    this->Nombre = "";
    this->Apellidos = "";
    this->Cargo = "";
    this->Edad = 0;
    this->Genero = ' ';
    this->Salario = 0;
}

empleado::empleado(char *DNI, std::string Nombre, std::string Apellidos, std::string Cargo, int Edad, char Genero, float Salario)
    : DNI(DNI), Nombre(Nombre), Apellidos(Apellidos), Cargo(Cargo), Edad(Edad), Genero(Genero), Salario(Salario)
{}

empleado::~empleado()
{
    this->DNI = nullptr;
    delete [] DNI;
}
