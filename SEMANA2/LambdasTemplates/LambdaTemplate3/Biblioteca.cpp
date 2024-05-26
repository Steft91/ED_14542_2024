#include "Biblioteca.h"

bool Biblioteca::buscarLibro(const std::string& titulo, std::function<bool(const std::string&, const std::string&)> comp) const{
    for(const auto& libro : libros){
        if(comp(libro.getTitulo(), titulo)){
            return true;
        }
    }
    return false;
}
