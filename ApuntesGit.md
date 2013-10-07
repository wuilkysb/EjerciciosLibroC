####Grupo de Estudios C
#Git y GitHub
###Apuntes para su uso
---
##Instalación

Instalación en Ubuntu y deribados.

<!-- language: lang-bash -->

	$ sudo apt-get install git-core

Opcional, interfaz gráfica y documentación:

<!-- language: lang-bash -->

	$ sudo apt-get install gitk git-gui git-doc
	
##Configuración

####Usuario:

La configuración del usuario permitirá identificar al autor de cada cambio realizado en el proyecto.

<!-- language: lang-bash -->

	$ git config --global user.name "Nombre Apellido"
	$ git config --global user.email "usuario@email.com"

####Salida colorida:

Una salida colorida por terminal ayuda a visualizar rápidamente la información más relevante.

<!-- language: lang-bash -->

	$ git config --global color.status auto
    $ git config --global color.branch auto
	
##Vincular Git a GitHub

No confundir. **Git** es un sistema de control de versiones. [GitHub](https://github.com/ "Ir a GitHub") es un servicio online de alojamiento de repositorios Git para facilitar la colaboración entre programadores.

Los pasos serían los siguientes:

* Crear una [cuenta en GitHub](https://github.com/)
* Crear una llave SSH para la comunicación segura con GitHub.
* Agregar la llave SSH a nuestra cuenta de GitHub.

####Crear llave SSH:

* Verificar si existe una llave SSH:

Primero, verificamos si ya no poseemos una llave en nuestro ordenador. Si ya existe, la encontraremos en /home/usuario/.ssh/

<!-- language: lang-bash -->

    $ ls ~/.ssh/

* Si no existe, la creamos con:

<!-- language: lang-bash -->

    $ ssh-keygen -t rsa -C "comment"

* Copiar la llave con la ayuda de xclip:

<!-- language: lang-bash -->

    $ sudo apt-get install xclip
    $ cat ~/.ssh/id_rsa.pub | xclip -sel clip

* Vincular llave SSH a nuestra cuenta de GitHub:

Nos dirigimos a nuestra cuenta de GitHub --> Account Settings --> SSH Keys --> Add SSH Key --> Introducimos un título y Ctrl+V para pegar.

* Verificar la conexión:

<!-- language: lang-bash -->

    $ ssh git@github.com

---

##Flujo de trabajo básico

###Preparando todo

Git y GitHub permiten administrar proyectos de código muy complejos y donde participan cientos de programadores interactuando de formas muy diversas. Nosotros nos limitaremos a lo básico.

Tenemos que pensar en **tres niveles** de repositorios.

* Un **repositorio principal grupal** online almacenado en GitHub. Recopila todos los archivos producidos por los miembros del grupo de estudios.

* Varios **repositorios personales** online almacenados en GitHub que son **forks** del repositorio grupal. Son derivaciones del repositorio principal donde cada miembro realiza sus propios cambios y sube sus archivos.

* Varios **repositorios locales** (en cada uno de nuestros ordenadores) que son **clones** de los forks mencionados con anterioridad. Es la réplica local del proyecto y es sobre ella que trabajamos en la práctica.

####1. Fork

Hacer un fork de un proyecto en GitHub no es otra cosa que obtener una copia exacta online del mismo en nuestra cuenta personal de GitHub. El fork se realiza en la propia [página del proyecto](https://github.com/GrupoEstudioC/EjerciciosLibroC "EjerciciosLibroC") presionando el botón correspondiente en el extremo superior derecho.

####2. Clone

Una vez hecho el fork, necesitamos clonarlo en nuestra máquina para poder editar, agregar, suprimir, etc. Para eso usamos la instrucción **clone** de Git:

<!-- language: lang-bash -->

    $ git clone git@github.com:usuario/EjerciciosLibroC.git
    
Debemos reemplazar "usuario" por el que hayamos definido en nuestra cuenta de GitHub. Es importante comprender que no debemos clonar el repositorio principal del grupo sino **nuestro fork**.

Esta operación creará un directorio "EjerciciosLibroC" con una copia de todos los ficheros del repositorio clonado en nuestro computador con la estructura típica de un repositorio Git. Y, si nuestra llave SSH fue configurada correctamente, tendremos comunicación con nuestro repositorio online (con el fork). 

####3. Upstream

Mientras nosotros editamos nuestra copia local del fork, otros miembros pueden estar haciendo **pull request** (solicitudes) subiendo modificaciones al repositorio principal del grupo. Eso, más tarde o más temprano crea un desfasaje respecto a lo que hay en el proyecto común y nuestra copia. Debemos poder actualizar nuestra copia con los datos nuevos del repositorio principal. Para eso necesitamos vincular nuestra copia con el repositorio principal o **upstream**. Ejecutamos una única vez:

<!-- language: lang-bash -->

    $ git remote add upstream git@github.com:GrupoEstudioC/EjerciciosLibroC.git

###Ahora sí, a trabajar

####1. Ramas

Por defecto, en git trabajamos en una rama llamada **master**, pero es preferible crear una rama paralela para así mantener master lo más limpia y organizada posible. Es como trabajar en borrador y después pasar en limpio.

Para crear una rama usamos:

<!-- language: lang-bash -->

    $ git checkout -b trabajo
    
**checkout** con la opción -b, crea y nos posiciona en la nueva rama (que hemos llamado "trabajo", pero que podría ser cualquier otro nombre). Podemos verificarlo con:

<!-- language: lang-bash -->

    $ git branch

Esa orden listará las ramas e indicará con un asterisco la rama activa.

####2. Preparar y confirmar

Ahora que estamos posicionados en nuestra rama de trabajo (no master), podemos editar archivos existentes, suprimir o agregar nuevos al proyecto. El flujo de trabajo será el siguiente:

* Editar, agregar, suprimir, etc.

* Ver cuál es la situación:

<!-- language: lang-bash -->

    $ git status

Status nos muestra información importante sobre cuál es el estado actual del versionado. Por ejemplo, qué archivos han sufrido cambios y no han sido versionados. Podemos (y es recomendable) ejecutar esta orden en cualquier momento del flujo de trabajo.

* Preparar:

<!-- language: lang-bash -->

    $ git add .

*Atención:* el punto después de add le indica a Git que debe preparar todos los cambios. También se puede indicar un archivo específico reemplazando el punto por el nombre del archivo.

* Confirmar:

<!-- language: lang-bash -->

    $ git commit -m "mensaje explicativo"

Qué hemos hecho? Hemos creado un punto que congela el estado actual del proyecto y que nos permitirá en un futuro volver a ese estado si fuera necesario. Cada uno de esos puntos es un commit. Editar, preparar, confirmar. 

* Ver el histórico:

Podemos ver el histórico de commits realizados ejecutando:

<!-- language: lang-bash -->

    $ git log

####3. Fusionar

Ahora llegamos a la siguiente situación:

* Nuestra rama de trabajo acumula modificaciones que no están en master.
* Nuestro repositorio local acumula modificaciones que no están en nuestro fork online en GitHub.
* El repositorio principal del grupo acumula modificaciones que no tenemos ni en nuestro repositorio local ni en nuestro fork online en GitHub.

Tenemos que dejar todo esto fusionado.

#####Fusionar rama de trabajo con master

* Saltamos a master:

<!-- language: lang-bash -->

    $ git checkout master

* Fusionar lo que hay en trabajo con lo que hay en master:

<!-- language: lang-bash -->

    $ git merge --squash trabajo
    
La opción --squash es opcional (valga la redundancia). Hace que los muchos commits que podamos haber hecho en trabajo pasen al histórico de master como uno solo. Es lo que nos permite mantener master mejor organizada y así, mantener organizado el repositorio principal.

* Prepara y confirmar:

<!-- language: lang-bash -->

    $ git add .
    $ git commit -m "mensaje explicativo"

De esa forma, todos los cambios hechos en trabajo los resumimos en un único commit en master.

* Fusionar master con upstream (repositorio principal del grupo):

<!-- language: lang-bash -->

    $ git pull --rebase upstream master

* Fusionar repositorio local con fork:

<!-- language: lang-bash -->

    $ git push origin master
    
* Hacer pull request (solicitar que el fork se integre al repositorio principal):

En la página del **fork** (no en la del repositorio principal), a la derecha, encontramos un botón **pull request**, luego presionamos "New pull request" y a continuación donde dice "Click to create a pull request for this comparison" y por último "Send pull request".

Si todo funcionó bien, el repositorio principal del grupo en GitHub, nuestro fork en GitHub y nuestro repositorio local (en nuestro computador) deberían ser ahora copias idénticas.