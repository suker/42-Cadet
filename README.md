=====================================================================================
# :scroll: GUIA DE PROYECTOS REALIZADOS EN LA ESCUELA 42 NETWORK (BÉLGICA)
=====================================================================================
- [Normas generales](#normas-generales)
- [Proyectos realizados](#proyectos)
  - [Libft](#libft)
  - [Get next line](#get-next-line)
  - [NetWhat](#netwhat)
  - [Ft_printf](#ft-printf)
  - [Ft_server](#ft-server)
- [Tabla de proyectos](#tabla-de-proyectos)

=====================================================================================
# <h1 align="center">NORMAS GENERALES</h1>
=====================================================================================
## IMPORTANTE ❗

Cada uno de los proyectos contiene **PDFs** tanto en **español** como en **inglés** de las restricciones e instrucciones a seguir para resolver cada uno de los proyectos, si se desea una mayor comprensión de éstos, diríjase a sus respectivos PDFs.

<br>

## 📔 NORMALIZACIÓN
Para llegar a ser un buen desarrollador no sólo debemos saber escribir **buen código**, sino que también debemos aprender a que nuestro código sea **lo más legible** posible para otros programadores. Es por ello que en 42, usamos nuestra propia `NORMA (norm)` a la hora de empezar un nuevo proyecto. Puedes echarle un vistazo aqui: <a href="https://github.com/suker/42-Cadet/blob/master/en.normv3.pdf">NORMA</a>


<br>

## 📌 CRITERIOS DE CALIFICACIÓN Y EVALUACIÓN

A la hora de evaluar un proyecto en 42 no aceptamos un proyecto `casi bien` o un `99.99% completado`, sino que buscamos que nuestros estudiantes realicen cada uno de los proyectos cumpliendo con **TODOS** los requisitos previos y buscando siempre el :100:%.

**Los criterios son otorgados al evaluador cuando un proyecto está siendo evaluado.** El evaluador deberá por tanto ir leyendo y cumpliendo (testeando) cada uno de ellos.
Además, el evaluador podrá realizar preguntas sobre cómo se ha realizado el proyecto y su estructura (_para saber si ha sido un copy & paste_).

**Para que un proyecto sea calificado como válido se deben cumplir una serie de pasos:**
- Todo proyecto debe **cumplir todas y cada una de las instrucciones** que se detallan tanto en el **PDF del proyecto** cómo en la **NORMA**.
- El proyecto debe ser **validado por 3 estudiantes**.
- El proyecto debe ser **validado por Moulinette** (programa que evalua ciertos proyectos).


=====================================================================================
# <h1 align="center">PROYECTOS</h1>
=====================================================================================

# LIBFT
## 🌟 INTRODUCCIÓN

La programación en C puede ser muy tediosa cuando no se tiene acceso a las funciones estándar muy útiles. Este proyecto, te da la oportunidad de reescribir aquellas funciones para entenderlas y aprender a usarlas. La librería te ayudará para tus futuros proyectos en C.
A través de este proyecto, te damos la oportunidad de extender tu lista de funciones a tu manera! Tómate tu tiempo para expandirla a lo largo del curso.


<br>

## 🎯 OBJETIVO

**Generar una librería estática `libft.a` mediante el uso de un `Makefile` que contenga las funciones a realizar.**

<br>

## 🐾 DESARROLLO
1. Recrear las funciones de **la parte obligatoria** (*parte 1 y parte 2*).
2. Realizar la parte de bonus **(opcional si se desea una puntuación extra)**.
3. Crear un **Makefile** para generar nuestra librería: `libft.a`.
4. Testear nuestro código con testers personalizados propios o de terceros.

<br>

### 🚢 Parte Obligatoria 1

Las funciones de la parte 1 son algunas de las funciones de la biblioteca estándar en C `libc`. Éstas funciones deberán ser realizadas conforme su manual `man` indica. Es decir, que para saber sus instrucciones debemos leer el manual ya sea en **Internet** o en el **terminal** del SO que utilicemos (*en nuestro caso MacOS*).

<details>
  
  <summary>🔶 Por ejemplo</summary>
  <b> 'man strlen' nos detalla el prototipo, descripción y valor a retornar de la función.</b><br>
  
  
  
  ![image](https://user-images.githubusercontent.com/1337928/112439792-d6c07c00-8d49-11eb-9fb3-27f739dbab33.png)

</details>

<br>

### 🚀 Parte obligatoria 2

Las funciones de esta parte se encuentran detalladas en el **pdf**.

<details>
  
  <summary>🔶 Por ejemplo</summary>
  
  ![image](https://user-images.githubusercontent.com/1337928/112442192-e214a700-8d4b-11eb-9167-7a16a65fa8aa.png)
  <br>
  
  En la función **ft_split**, se nos pide que al **recibir una cadena de caracteres `char * s` y un caracter como separador `char c` como argumentos**, debamos     devolver o **retornar** un array de strings (*pointer of a pointer* or *2 dimensional array*) alojando memoria con **malloc**. En caso de error: retornar un     puntero NULO `NULL`.

</details>




<br>

### 💎 Parte Bonus

Esta parte es considerada como **bonus**, y por tanto **solo será evaluada** si hemos completado **correctamente la parte obligatoria.**
Normalmente los bonus requieren un **grado de complejidad mayor** con respecto a la anterior parte.

Es decisión del programador realizar esta parte total o parcialmente ya que **los puntos extras** dependerá de los **criterios establecidos para su evaluación.**

En este bonus se nos pide realizar una serie de funciones orientadas a la estructura de datos **listas enlazadas**, y para ello debemos hacer uso de las **estructuras** `struct` dentro de nuesto archivo **header** `.h`.
<details>
  
  <summary>Clikea para ver el HEADER!</summary>
  
  ![image](https://user-images.githubusercontent.com/1337928/112445068-0756e480-8d4f-11eb-8c4c-937ffd9427b3.png)
  
</details>

<details>
  
  <summary>🔶 Por ejemplo</summary>

![image](https://user-images.githubusercontent.com/1337928/112445378-5866d880-8d4f-11eb-8581-54e7b126f247.png)

La función **ft_lstmap** recibirá como argumentos el **puntero a la lista**, **el puntero a la función** `f` y **un puntero a la función** `del`.
Lo que deberemos hacer es **crear una nueva lista** e ir guardando en ella el resultado de iterar cada elemento de la lista `lst` al aplicarle el contenido de la funcion `f`. En caso de error a la hora de alojar memoria con `malloc`, debemos **limpiar el contenido de nuestra nueva lista** y retornar `NULL`.

</details>


=====================================================================================

# GET NEXT LINE

## 🌟 INTRODUCCIÓN

Este proyecto tiene como objetivo entender cómo se abren, leen y cierran los archivos en un SO, y cómo se interpretran por medio de un lenguaje de programación para su posterior análisis.
Esta tarea es crucial entender para un futuro programador ya que gran parte de nuestro tiempo se basa en manipular archivos para la gestión y persistencia de datos.

<br>

## 🎯 OBJETIVO

Escribir una función que devuelva una línea dentro de un archivo de texto que termine con un salto de línea `char = '\n'`, leída desde un descriptor de archivos.

ℹ️ Para más información: [PDF](https://github.com/suker/42-Cadet/blob/master/42-libft/es.subject.pdf)

<br>

## 🐾 DESARROLLO

Para desarrollar este proyecto, debemos entender una serie de conceptos:

1. **¿Cómo funciona `read()`, `open()`, `close()`?**
2. **¿Qué son y cómo se utilizan los descriptores de archivo?**
3. **¿Qué son las variables estáticas `static` y cuál es su uso en el proyecto?** 

<br>

### 1. ¿Cómo funciona `read()`, `open()`, `close()`?

Para un mayor entendimiento, referirse a sus respectivos manuales en el terminal: 🔶 e.g: `man 2 open` | `man 2 read` | `man 2 close`

O consultar en estos enlaces:
👉 [read](https://linux.die.net/man/3/read)
👉 [open](https://linux.die.net/man/3/open)
👉 [close](https://linux.die.net/man/3/close)


<br><h4 align="center">Pasos básicos para operar con un archivo.</h4>

1. Debemos de **abrir el archivo y sus permisos y asignarle el fd correspondiente**. 🔶 E.g `int fd = open('/usr/suker/file.txt', O_RDWR);`.
  - Si `fd = -1`, el archivo **no existe el archivo o no se ha podido abrir correctamente**.
  - Si `fd > 2`, el archivo ha sido **abierto correctamente**.
2. Procedemos a leer el archivo con `int num_bytes = read(fd, buf, nbyte);`.
  - si `num_bytes < 0`, el archivo **no tiene permisos de lectura**. 
  - si `num_bytes > 0`, el archivo **ha leído** `num_bytes` de **bytes**.
3. Tras haber leído `num_bytes` de caracteres y almacenado temporalmente en `buf` realizamos la **tarea necesaria con los datos leídos** y procedemos a cerrar nuestro archivo con `close(fd)`.

<br>

### 2. ¿Qué son y cómo se utilizan los descriptores de archivo?

En **Unix** y **sistemas operativos** de computadora relacionados , **un descriptor de archivo** `FD` es un indicador abstracto (*identificador*) que se usa para **acceder a un archivo u otro recurso de entrada / salida**, como una tubería o un conector de red.

Los descriptores de archivo forman parte de la interfaz de programación de la aplicación POSIX .

**Un descriptor de archivo es un número entero no negativo**, generalmente representado en el lenguaje de programación C como el tipo `int` (*los valores negativos se reservan para indicar "sin valor" o una condición de error*).
|Valor entero|Nombre|constante simbólica `<unistd.h>` | flujo de archivo Descriptor de archivo `<stdio.h>` |
|------------|------------|------------|------------|
| 0 | Entrada estándar | STDIN_FILENO | stdin |
| 1 | Salida estándar | STDOUT_FILENO | stdout |
| 2 | Error estándar | STDERR_FILENO | stderr |
| > 2 | Indica el valor entero que le pertenece al archivo que está abierto | ➖ | ➖ |

👉 [Fuente](https://es.qaz.wiki/wiki/File_descriptor) 👈

Los descriptores de archivo podemos utilizarlos y obtenerlos en funciones básicas como:
- **int open(const char *path, int oflag, ...):** `path` puntero a la ruta dónde se encuentra el archivo, `oflags` cómo queremos abrir nuesto archivo. e.g: **solo lectura: **`O_RDONLY`, ** sólo escritura**, `O_WRONLY`, **ambos:** `O_RDWR`
  - Librerias necesarias: `<fcntl.h>`.

- **ssize_t read(int fd, void *buf, size_t nbyte):** `fd` file descriptor, `buf` puntero de caracteres que almanacena los carateres leídos, `nbyte` numero de bytes que se pretende leer por cada `read()`.
  - Librerias necesarias: `<sys/types.h>`, `<sys/uio.h>`, `<unistd.h>`.

- **int close(int fd):** `fd` file descriptor. Retorna `-1` si el archivo no se ha cerrado correctamente.
  - Librerias necesarias: `<fcntl.h>`.


<br>

### 3. ¿Qué son las variables estáticas `static` y cuál es su uso en el proyecto?

Al tener restricciones en el uso de **variables globales** dentro de nuestro proyecto, debemos aprender lo que son las **variables estáticas** y para qué nos sirven.
En resumen, una variable estática nos permite la **persistencia de información** aunque la función que la contenga se haya **terminado de ejectutar.** (recordemos que **el ámbito de una variable** nos limita desde dónde se puede acceder y manipular su contenido).

`Get_next_line()` (*abreveviado:*`gnl()`) es una función que nos retornará una línea por cada vez que llamemos a la función, pero debido a las instrucciones de este proyecto, el número de bytes `BUFFER_SIZE` que leamos por cada vez que llamemos a `gnl()` será determinado por el evaluador. Es decir que `BUFFER_SIZE` podrá ser un número negativo hasta un número inmesanmente grande ♾️. 

Por lo tanto, si pretendemos leer un archivo con `1000 líneas de texto` y nuestro `BUFFER_SIZE > Numero de bytes del archivo`, la lectura del archivo será en una sola llamada de `read()`, por lo que debemos hacer que nuestras líneas de texto **persistan en una sola variable** tras múltiples llamadas de `gnl()`.

<p align="center">❗❗❗ PARA MAYOR ENTENDIMIENTO, CONSULTAR LOS COMENTARIOS DEL CÓDIGO ❗❗❗ </p>

=====================================================================================

# NETWHAT
## 🌟 INTRODUCCIÓN

La administración y sistemas de redes es una herramienta importante a la mano del futuro programador, conocer cómo se **envian y recibe la información** a través de internet de manera segura es crucial para ser capaces de gestionarla correctamente.

Netwhat es un cuestionario. Este proyecto sirve para evaluar y ayudar a adquirir conocimientos sobre redes. Desde ahora puede empezar a leer **documentación sobre redes en Internet.**

<br>

## 🎯 OBJETIVO

Superar el cuestionario que se encuentra en [netwhat](https://www.netwhat.42.fr). Este cuestionario consta de 20 preguntas tanto teóricas como prácticas.
Además para agregarle un mayor grado de dificultad, cada pregunta consta de 30 segundos para su respuesta. Buena Suerte ❕

ℹ️ Para más información: [PDF](https://github.com/suker/42-Cadet/blob/master/42-netwhat/en.subject.pdf)

<br>

## 🐾 DESARROLLO

El desarrollo de este proyecto no se basa en código, sino en teoría y práctica sobre redes. Abajo se detallan cada uno de los apartados a tomar en cuenta.

- [¿Qué es una dirección IP?](https://www.es.paessler.com/it-explained/ip-address)
- [¿Qué es una máscara de red?](https://es.wikipedia.org/wiki/M%C3%A1scara_de_red)
- [¿Qué es la subred de una IP con máscara de red?](https://es.wikipedia.org/wiki/Subred#:~:text=En%20redes%20de%20computadoras%2C%20una,la%20red%20m%C3%A1s%20manejable%2C%20administrativamente.)
- [¿Cuál es la dirección de transmisión (broadcast) de una subred?](https://www.ionos.es/digitalguide/servidores/know-how/broadcast-ip/)
- [¿Cuáles son las diferentes formas de representar una dirección IP con la máscara de red?](https://codingornot.com/configuracion-de-redes-i-que-es-la-ip-y-la-mascara-de-subred)
- [¿Cuáles son las diferencias entre IP pública y privada?](https://www.testdevelocidad.es/2016/08/04/direccion-ip-publica-privada-diferencias-saber-ip-cambiarla/#:~:text=La%20p%C3%BAblica%20es%20el%20identificador,el%20router%20asigna%20a%20nuestro)
- [¿Qué es una clase de IP?](https://citelia.es/blog/tipos-direcciones-ip/)
- [¿Qué es TCP (Protocolo de Control de Transmisión)?](https://developer.mozilla.org/es/docs/Glossary/TCP)
- [¿What is UDP (Protocolo de Datagrama de Usuario)?](https://www.ionos.es/digitalguide/servidores/know-how/udp-user-datagram-protocol/)
- [¿Qué son las capas de red?](https://es.wikipedia.org/wiki/Capa_de_red)
- [¿Qué es el modelo OSI?](https://es.wikipedia.org/wiki/Modelo_OSI)
- [¿Qué es un servidor DHCP y el protocolo DHCP?](https://www.ionos.es/digitalguide/servidores/configuracion/que-es-el-dhcp-y-como-funciona/)
- [¿Qué es un servidor DNS y el protocolo DNS?](https://es.wikipedia.org/wiki/Sistema_de_nombres_de_dominio)
- [¿Cuáles son las reglas para hacer que 2 dispositivos se comuniquen usando direcciones IP?](https://es.wikipedia.org/wiki/Red_de_computadoras)
- [¿Cómo funciona el enrutamiento con IP?](https://ccnadesdecero.com/curso/enrutamiento-ip/)
- [¿Qué es una puerta de enlace predeterminada para enrutamiento?](https://obstina-bourgas.org/diferente/que-es-la-puerta-de-enlace-predeterminada/)
- [¿Qué es un puerto desde el punto de vista IP y para qué sirve cuando se conecta a otro dispositivo?](https://www.le-vpn.com/es/que-es-la-redireccion-de-puertos/)

=====================================================================================

# FT PRINTF
## 🌟 INTRODUCCIÓN

Este proyecto te permitirá descubrir las **funciones variádicas** y su potencial impacto dentro de la programación.
La **versatilidad de la función printf** en C representa un gran ejercicio de programación para nosotros.
La clave para un ft_printf exitoso es un **código extensible y bien estructurado.**

<br>

## 🎯 OBJETIVO

En este proyecto se pretende recrear la función de la libreria estándar `printf`, para su realización deberemos de entender qué son las funciones variádicas `variadic functions` y cómo se utilizan a la hora de codificar.

ℹ️ Para más información: [PDF](https://github.com/suker/42-Cadet/blob/master/42-ft_printf/es.subject.pdf)

<br>

## 🐾 DESARROLLO

La clave para resolver este proyecto está en **estructurar bien las funciones y dividir el trabajo** (*divide y venceras strategy!*).
Antes de entrar en el algoritmo del proyecto, deberemos estar familiarizados con un par de puntos:

1. **¿Qué son las funciones variádicas?**
2. **¿Cuál es el uso de la función printf y cómo maneja sus argumentos?**

### 1. ¿Qué son las funciones variádicas?

En resumen, **las funciones variádicas** nos permiten recibir un **número variable de argumentos**.
Esto nos da una gran abanico de posibilidades cuándo trabajamos con funciones que requieren **múltiples parámetros** de entrada o una gran variedad de tipos de datos.

ℹ️ Para más información: [Funciones variádicas](https://trucosinformaticos.wordpress.com/2018/11/25/funciones-variadicas/)

### 2. ¿Cuál es el uso de la función printf y cómo maneja sus argumentos?



<details>
  <summary>Prototipo y campos requeridos de PRINTF</summary>
   <b>Prototipo: int printf(const char * format, ...);</b>
  
  ![image](https://user-images.githubusercontent.com/1337928/112623049-26777400-8e2c-11eb-90ce-ddfb273db9e0.png)

</details>

La función printf printea en la salida éstandar el valor de sus argumentos, después del primero, bajo el control del formato `format`. El formato es una cadena de caracteres que contiene tres tipos de objetos: **caracteres sin formato**, que simplemente se copian en la salida éstandar, **secuencia de escape de caracteres** que se convierten y se copian en la salida estándar, y especificadores de formato `format specifiers`, cada una de las cuáles causa la impresión `printing` del siguiente argumento.

🔶 Por ejemplo: `total_chars = printf("hola soy %s, y tengo %d años.", "Juan", 26)`.
1. printea en la salida estándar `"hola soy "`.
2. lee el especificador del formato de tipo `char *` '%s' y printea su contenido del siguiente argumento: `"hola soy Juan"`.
3. sigue printeando caracteres sin formato: "hola soy Juan, y tengo ".
4. lee el ultimo especificador del formato de tipo `int` '%d': `"hola soy Juan, y tengo 26"`.
5. finaliza los ultimos caracteres sin formato: `"hola soy Juan, y tengo 26 años."`.
6. Retorna el número de caracteres printeados en total: `total_chars: 31`.

ℹ️ Para más información: [Función printf](https://docs.microsoft.com/en-us/cpp/c-runtime-library/format-specification-syntax-printf-and-wprintf-functions?view=msvc-160)

<br>

## 💥 ALGORITMO:

Cada programador tiene diferente manera de pensar y de razonar a la hora de realizar un proyecto. En base a la experiencia es cuándo adquirimos conocimientos
que nos llevan a desarrollar cada vez mejor. Para mí este proyecto lo he divido en una serie de pasos simples:

1. Crear una lista enlazada de estructuras `struct` las cuales contengan información valiosa para cada *especificador de formato*. En su defecto, si el **formato** no contiene *especificadores*, printear los caracteres sin crear la lista.

2. Por cada estructura, rellenamos sus variables en base a qué tipo de argumentos recibimos: 🔶 e.g: tipo `%d int`, `%s char *`, `%p pointer`, `%10.2u unsigned con width y precision`, ect..

3. Comprobamos si cada elemento de nuestra lista contiene algún fallo en la **syntaxis del especificador de formato**: 🔶 e.g: tipo `%432f.3$$d`.
    - Si **existe un error**, **liberamos la memoria** asignada de nuestra lista de estructuras y **retornamos -1.**
    - Caso contrario, procedemos a printear nuestro contenido. 

4. Recorremos el formato buscando **caractes sin formato**, **caracteres de escape** y **caracteres con formato** hasta llegar al final de la string.
5. Debemos **liberar la memoria asignada de nuestra lista**.
6. Y por último, **retornamos el número de caracteres impresos.**

<br><p align="center">❗❗❗ PARA MAYOR ENTENDIMIENTO, CONSULTAR LOS COMENTARIOS DEL CÓDIGO ❗❗❗ </p><br><br>

=====================================================================================

# FT SERVER
## 🌟 INTRODUCCIÓN

Este tema tiene como objetivo presentar la **administración del sistema**. Te hará consciente de la importancia de utilizar **scripts para automatizar tus tareas.** Para eso, descubrirás la tecnología `docker` y la usarás para instalar un **servidor web completo.** Este servidor ejecutará múltiples servicios: **Wordpress, phpMyAdmin y una base de datos SQL.**

<br>

## 🎯 OBJETIVO

Crear y mantener un servidor web `Nginx` utilizando la tecnología `Docker` para el despligue de nuestra web. Usaremos los servicios de **Wordpress, phpmyadmin y MariaDB**.

ℹ️ Para más información: [PDF](https://github.com/suker/42-Cadet/blob/master/42-ft_server/es.subject.pdf)

<br>

## 🐾 DESARROLLO

La mayor parte de este proyecto se basa en leer la documentación de cada uno de los apartados a implementar: `Docker` como gestor de aplicaciones `Nginx` como servidor web, `Wordpress` como gestor de contenido web, `phpmyadmin` como gestor de nuestra base de datos a través de la web, y por último, `SQL o MariaDB` como nuestra base de datos.

Recursos utilizados:
- [Docker](https://docs.docker.com/get-started/)
- [Nginx](http://nginx.org/en/docs/beginners_guide.html)
- [Wordpress](https://es.wordpress.org/download/) Sólo hay que descargar el archivo .tar y descomprimir la carpeta en el directorio necesario ❗
- [phpmyadmin](https://docs.phpmyadmin.net/es/latest/config.html)
- [SQL](https://www.digitalocean.com/community/tutorials/crear-un-nuevo-usuario-y-otorgarle-permisos-en-mysql-es)
- EXTRAS
  - [Redireccionamiento HTTP hacia HTTPS en Nginx](https://linuxize.com/post/redirect-http-to-https-in-nginx/)
  - [Comprensión de los algoritmos de selección de bloques de ubicación y servidor Nginx](https://www.digitalocean.com/community/tutorials/understanding-nginx-server-and-location-block-selection-algorithms)
  - [Crear un SSL (Socket Secure Layer) certificado para Nginx en Ubuntu.18.4](https://www.digitalocean.com/community/tutorials/how-to-create-a-self-signed-ssl-certificate-for-nginx-in-ubuntu-18-04)
  - [Activar o desactivar autoindex en Nginx](https://www.keycdn.com/support/nginx-directory-index)
  - [Videos de cómo montar tu servidor web usando estas tecnologias (MUY ÚTIL)](https://www.youtube.com/watch?v=_LQv96MdtCk)


=====================================================================================
# <h1 align="center">TABLA DE PROYECTOS</h1>
=====================================================================================

<br>

| Estimated time | Difficulty | Project | Bonus | Results |
|-----|-------|-------|----------|----------|
|🕐 1 week | Easy |<a href="https://github.com/suker/42-Cadet/tree/master/42-libft">Libft</a>| :white_check_mark: | 114/115 :white_check_mark:|
|🕐 2 week| Easy |<a href="https://github.com/suker/42-Cadet/tree/master/42-get_next_line">Get_next_line</a>| :white_check_mark: | 113/115 ✅|
|🕐 1 week| Easy |<a href="https://github.com/suker/42-Cadet/tree/master/42-netwhat">Netwhat</a>| ➖ | 100/100 :white_check_mark:|
|🕐 2 ~ 3 weeks| Medium |<a href="https://github.com/suker/42-Cadet/tree/master/42-ft_printf">Ft_printf</a>| ✖️ | 100/115 :white_check_mark:|
|🕐 1 week| Medium |<a href="https://github.com/suker/42-Cadet/tree/master/42-ft_server">Ft_server</a>| ➖ | 100/100 :white_check_mark:|
| ⏰ Current Project| Hard |<a href="https://github.com/suker/42-projects/tree/master/C03">Cub3d</a>| ❔ | 0/100 ❔|
|🕐 ❔| Medium |<a href="#">Exam_Rank_02</a>| ❔ | 0/100 ❔|
|🕐 ❔| Easy |<a href="#">Libasm</a>| ❔ | 0/100 ❔|
|🕐 ❔| Medium |<a href="#">Push_swap</a>| ❔ | 0/100 ❔|
|🕐 ❔| Hard |<a href="#">minishell</a>| ❔ | 0/100 ❔|
|🕐 ❔| Medium |<a href="#">Ft_services</a>| ❔ | 0/100 ❔|
|🕐 ❔| Hard |<a href="#">Exam_rank_3</a>| ❔ | 0/100 ❔|
|🕐 ❔| Easy |<a href="#">Philosopher</a>| ❔ | 0/100 ❔|
|🕐 ❔| Medium |<a href="#">CPP Module</a>| ❔ | 0/100 ❔|
|🕐 ❔| Medium |<a href="#">Exam_Rank_4</a>|❔ | 0/100 ❔|
|🕐 ❔| Medium |<a href="#">Ft_container </a>| ❔ | 0/100 ❔|
|🕐 ❔| Hard |<a href="#">Webserv </a>| ❔ | 0/100 ❔|
|🕐 ❔| Hardest |<a href="#">Ft_transcendence </a>| ❔ | 0/100 ❔|


