# Ejercicios Libro C

Este repositorio se usará para subir los códigos resolución de ejercicios
propuestos por el libro.

Cada participante del grupo de estudios deberá hacer un **fork** del repositorio
en su propia cuenta e ir agregando sus archivos en una carpeta con su nombre. 
Luego hará un **pull request** solicitando que el fichero
sea adicionado al repositorio principal.

El directorio y los **nombres de fichero** deberán respetar el siguiente formato:

**nombreUsuario/ejNro.c**

Donde, **nombreUsuario** es el directorio personal y **ejNro.c** es el fichero de código.

Ej:

**Alejandro_Druetta/ej002.c**

##Pasos para trabajar con el repositorio

- Hacer fork del repositorio en la página de GitHub (botón).

- Clonar localmente el fork en nuestro ordenador:

<!-- language: lang-bash -->

    $ git clone git@github.com:nombreUsuario/EjerciciosLibroC.git

- Definir el repositorio original como upstream para mantenerse
   actualizado con los cambios.

<!-- language: lang-bash -->

    $ git remote add upstream git@github.com:GrupoEstudioC/EjerciciosLibroC.git

- A medida que se producen cambios en el repositorio original,
   actualizar el repositorio local:

<!-- language: lang-bash -->

    $ git pull --rebase upstream master

- Hacer pull request para presentar los cambios que hemos hecho en
   nuestro repositorio local (en la página, botón).



