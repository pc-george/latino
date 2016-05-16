/*
The MIT License (MIT)

Copyright (c) 2015 - Latino

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
*/

#ifndef _LIBSTRING_H_
#define _LIBSTRING_H_

#include "latino.h"

/** \file libstring.h
*
* Contiene las funciones para el manejo de cadenas
*
*/

/** Guarda un cadena en hashtable
  *
  * \param p: Apuntador a la cadena a guardar
  * \param len: Longitud de la cadena
  * \return lat_objeto: Un objeto tipo cadena
  *
  */
lat_objeto* lat_cadena_hash(const char* p, size_t len);

/** Comparar: compara dos cadenas
  * valor de retorno	indica
  * -------------------------------
  * <0	|   la cadena 1 es menor que la cadena 2
  * 0	|   las dos cadena son iguales
  * >0	|   la cadena 2 es mayor que la cadena 2
  *
  * \param vm: Maquina virtual de latino
  *
  */
void lat_comparar(lat_mv *mv);

/** Concatenar: Une dos cadenas
  *
  * \param vm: Maquina virtual de latino
  *
  */
void lat_concatenar(lat_mv *mv);

/** Contiene: Valida si una cadena contiene una subcadena determinada
  *
  * \param vm: Maquina virtual de latino
  *
  */
void lat_contiene(lat_mv *mv);

/** Copiar: Copia el contenido de una cadena
  *
  * \param vm: Maquina virtual de latino
  *
  */
void lat_copiar(lat_mv *mv);

/** Termina con: Valida si una cadena termina con una subcadena determinada
  *
  * \param vm: Maquina virtual de latino
  *
  */
void lat_termina_con(lat_mv *mv);

/** Es igual a: Valida si dos cadenas son iguales
  *
  * \param vm: Maquina virtual de latino
  *
  */
void lat_es_igual(lat_mv *mv);
//void lat_format(lat_mv *mv);

/** Indice: Regresa el indice de una subcadena determinada
  *
  * \param vm: Maquina virtual de latino
  *
  */
void lat_indice(lat_mv *mv);

/** Insertar: Inserta una subcadena en una cadena en el indice indicado
  *
  * \param vm: Maquina virtual de latino
  *
  */
void lat_insertar(lat_mv *mv);

/** Ultimo indice: Regresa la ultima posicion en la que se encontro una subcadena
  *
  * \param vm: Maquina virtual de latino
  *
  */
void lat_ultimo_indice(lat_mv *mv);

/** Rellenar izquierda: Rellena una cadena con caracteres a la izquierda
  *
  * \param vm: Maquina virtual de latino
  *
  */
void lat_rellenar_izquierda(lat_mv *mv);

/** Rellenar derecha: Rellena una cadena con caracteres a la derecha
  *
  * \param vm: Maquina virtual de latino
  *
  */
void lat_rellenar_derecha(lat_mv *mv);

/** Eliminar: Elimina una subacadena determinada
  *
  * \param vm: Maquina virtual de latino
  *
  */
void lat_eliminar(lat_mv *mv);

/** Esta vacia: Valida si una cadena esta vacia
  *
  * \param vm: Maquina virtual de latino
  *
  */
void lat_esta_vacia(lat_mv *mv);

/** Longitud: Regresa la longitud de una cadena
  *
  * \param vm: Maquina virtual de latino
  *
  */
void lat_longitud(lat_mv *mv);

/** Reemplazar: Reemplaza una subcadena por otra subcadena
  *
  * \param vm: Maquina virtual de latino
  *
  */
void lat_reemplazar(lat_mv *mv);
//void lat_split(lat_mv *mv);

/** Empieza con: Valida si una cadena inicia con una subcadena determinada
  *
  * \param vm: Maquina virtual de latino
  *
  */
void lat_empieza_con(lat_mv *mv);

/** Subcadena: Crea una subcadena
  *
  * \param vm: Maquina virtual de latino
  *
  */
void lat_subcadena(lat_mv *mv);

/** Minusculas: Convierte a minusculas toda la cadena
  *
  * \param vm: Maquina virtual de latino
  *
  */
void lat_minusculas(lat_mv *mv);

/** Mayusculas: Convierte a mayusculas toda la cadena
  *
  * \param vm: Maquina virtual de latino
  *
  */
void lat_mayusculas(lat_mv *mv);

/** Quitar espacios: Quita los espacios vacios al inicio y fin de la cadena
  *
  * \param vm: Maquina virtual de latino
  *
  */
void lat_quitar_espacios(lat_mv *mv);
//void lat_valueOf(lat_mv *mv);

#endif // !_LIBSTRING_H_
