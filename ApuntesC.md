#Apuntes de programación C

##Salida en pantalla

###Marcas de formato

Formato | Valor
:------ | :------
%i or %d | int - Entero en base 10
%ld | Entero largo - long int
%hd | Entero corto - short int
%+i or %+d | Imprime el caracter de signo
%o | Entero en base 8 - octal
%x | Entero en base 16 - hexadecimal
%c | char - Caracter - 8 bits
%u | Entero sin signo
%f | Formato de punto flotante
%e | En notación científica
%g | La opción más corta entre %f y %e
%07i | Justificado a la derecha, 7 digitos de largo, sin relleno
%.7i	 | Largo minimo de 7 digitos, justificado a la derecha, rellena con ceros
%8.2f | Tamaño total de 8 digitos, con dos decimales
%s | Una cadena de caracteres
%5s	| Primeros cinco caracteres con delimitador
%.5s	 | Primeros cinco caracteres, sin tener en cuenta el delimitador
%20.5s	| Primeros cinco caracteres, justificados a la derecha, con 20 caracteres de largo
%-20.5s	| Primeros cinco caracteres, justificados a la izquierda, con 20 caracteres de largo
