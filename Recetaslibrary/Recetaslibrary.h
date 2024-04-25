#pragma once
#include <iostream>
#include <vector>
using namespace std;
using namespace System;

namespace Recetaslibrary {
	public ref class Receta
	{
		// TODO: Agregue aquí los métodos de esta clase.
		private:
			String^ identificador;
			String^ nombre; 
			String^ ingredientes; 
			int tiempodePreparacion, tiempoCoccion, porciones;
			String^ dificultad;
			String^ categoria; 
			String^ origen;
			String^ valorNutricional;
		public:
			//Constructor
			Receta();
			//Metodos getter
			String^ getIdentificador() { return identificador; };
			String^ getNombre() { return nombre; };
			String^ getIngredientes() { return ingredientes; };
			int getTiempodePreparacion() { return tiempodePreparacion; };
			int getTiempoCoccion() { return tiempoCoccion; };
			int getPorciones() { return porciones; };
			String^ getDificultad() { return dificultad; };
			String^ getCategoria() { return categoria; };
			String^ getOrigen() { return origen; };
			String^ getValorNutricional() { return valorNutricional; };
			//Metodos setter
			void setIdentificador(String^ _identificador) { this->identificador = _identificador; };
			void setNombre(String^ _nombre) { this->nombre = _nombre; };
			void setIngredientes(String^ _ingredientes) { this->ingredientes = _ingredientes; };
			void setTiempodePreparacion(int _tiempodePreparacion) { this->tiempodePreparacion = _tiempodePreparacion; };
			void setTiempoCoccion(int _tiempoCoccion) { this->tiempoCoccion = _tiempoCoccion; };
			void setPorciones(int _porciones) { this->porciones = _porciones; };
			void setDificultad(String^ _dificultad) { this->dificultad = _dificultad; };
			void setCategoria(String^ _categoria) { this->categoria = _categoria; };
			void setOrigen(String^ _origen) { this->origen = _origen; };
			void setValorNutricional(String^ _valorNutricional) { this->valorNutricional = _valorNutricional; };
		//Metodos

	};
}
