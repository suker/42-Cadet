# :scroll: GUIA DE PROYECTOS REALIZADOS EN LA ESCUELA 42 NETWORK (BÉLGICA)

## IMPORTANTE ❗

Cada uno de los proyectos contiene **PDFs** tanto en **español** como en **inglés** de las restricciones e instrucciones a seguir para resolver cada uno de los proyectos, si se desea una mayor comprensión de éstos, diríjase a sus respectivos PDFs.

## 📔 NORMALIZACIÓN
Para llegar a ser un buen desarrollador no sólo debemos saber escribir **buen código**, sino que también debemos aprender a que nuestro código sea **lo más legible** posible para otros programadores. Es por ello que en 42, usamos nuestra propia `NORMA (norm)` a la hora de empezar un nuevo proyecto. Puedes echarle un vistazo aqui: <a href="https://github.com/suker/42-Cadet/blob/master/en.normv3.pdf">NORMA</a>

## 📌 CRITERIOS DE CALIFICACIÓN Y EVALUACIÓN

A la hora de evaluar un proyecto en 42 no aceptamos un proyecto `casi bien` o un `99.99% completado`, sino que buscamos que nuestros estudiantes realicen cada uno de los proyectos cumpliendo con **TODOS** los requisitos previos y buscando siempre el :100:%.

**Los criterios son otorgados al evaluador cuando un proyecto está siendo evaluado.** El evaluador deberá por tanto ir leyendo y cumpliendo (testeando) cada uno de ellos.
Además, el evaluador podrá realizar preguntas sobre cómo se ha realizado el proyecto y su estructura (_para saber si ha sido un copy & paste_).

**Para que un proyecto sea calificado como válido se deben cumplir una serie de pasos:**
- Todo proyecto debe **cumplir todas y cada una de las instrucciones** que se detallan tanto en el **PDF del proyecto** cómo en la **NORMA**.
- El proyecto debe ser **validado por 3 estudiantes**.
- El proyecto debe ser **validado por Moulinette** (programa que evalua ciertos proyectos).


## 📋 CURRICULUM DE PROYECTOS REALIZADOS EN 42

| Estimated time | Difficulty | Project | Bonus | Results |
|-----|-------|-------|----------|----------|
|🕐 1 week | Easy |<a href="https://github.com/suker/42-Cadet/tree/master/42-libft">Libft</a>| :white_check_mark: | 114/100 :white_check_mark:|
|🕐 1 week| Easy |<a href="https://github.com/suker/42-Cadet/tree/master/42-get_next_line">Get_next_line</a>| :white_check_mark: | 113/100 ✅|
|🕐 3 days| Easy |<a href="https://github.com/suker/42-Cadet/tree/master/42-netwhat">Netwhat</a>| ➖ | 100/100 :white_check_mark:|
|🕐 1 ~ 2 weeks| Medium |<a href="https://github.com/suker/42-Cadet/tree/master/42-ft_printf">Printf</a>| ✖️ | 100/100 :white_check_mark:|
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

# LIBFT
## INTRODUCCIÓN

La programación en C puede ser muy tediosa cuando no se tiene acceso a las funciones estándar muy útiles. Este proyecto, te da la oportunidad de reescribir aquellas funciones para entenderlas y aprender a usarlas. La librería te ayudará para tus futuros proyectos en C.
A través de este proyecto, te damos la oportunidad de extender tu lista de funciones a tu manera! Tómate tu tiempo para expandirla a lo largo del curso.

## 🎯 OBJETIVO

**Generar una librería estática `libft.a` mediante el uso de un `Makefile` que contenga las funciones a realizar.**

## 🐾 PASOS A SEGUIR PARA COMPLETAR EL PROYECTO.
1. Recrear las funciones de **la parte obligatoria** (*parte 1 y parte 2*).
2. Realizar la parte de bonus **(opcional si se desea una puntuación extra)**.
3. Crear un **Makefile** para generar nuestra librería: `libft.a`.
4. Testear nuestro código con testers personalizados propios o de terceros.

### 🚢 Parte Obligatoria 1

Las funciones de la parte 1 son algunas de las funciones de la biblioteca estándar en C `libc`. Éstas funciones deberán ser realizadas conforme su manual `man` indica. Es decir, que para saber sus instrucciones debemos leer el manual ya sea en **Internet** o en el **terminal** del SO que utilicemos (*en nuestro caso MacOS*).

🔶 **Por ejemplo:**
`man` + `strlen` nos detalla el prototipo, descripción y valor a retornar de la función.

![image](https://user-images.githubusercontent.com/1337928/112439792-d6c07c00-8d49-11eb-9fb3-27f739dbab33.png)

### 🚀 Parte obligatoria 2

Las funciones de esta parte se encuentran detalladas en el **pdf**.


🔶 **Por ejemplo:**

![image](https://user-images.githubusercontent.com/1337928/112442192-e214a700-8d4b-11eb-9167-7a16a65fa8aa.png)

En la función **ft_split**, se nos pide que al **recibir una cadena de caracteres `char * s` y un caracter como separador `char c` como argumentos**, debamos devolver o **retornar** un array de strings (*pointer of a pointer* or *2 dimensional array*) alojando memoria con **malloc**. En caso de error: retornar un puntero NULO `NULL`.


### 💎 Parte Bonus

Esta parte es considerada como **bonus**, y por tanto **solo será evaluada** si hemos completado **correctamente la parte obligatoria.**
Normalmente los bonus requieren un **grado de complejidad mayor** con respecto a la anterior parte.

Es decisión del programador realizar esta parte total o parcialmente ya que **los puntos extras** dependerá de los **criterios establecidos para su evaluación.**

En este bonus se nos pide realizar una serie de funciones orientadas a la estructura de datos **listas enlazadas**, y para ello debemos hacer uso de las **estructuras** `struct` dentro de nuesto archivo **header** `.h`.

![image](https://user-images.githubusercontent.com/1337928/112445068-0756e480-8d4f-11eb-8c4c-937ffd9427b3.png)


🔶 **Por ejemplo:**

![image](https://user-images.githubusercontent.com/1337928/112445378-5866d880-8d4f-11eb-8581-54e7b126f247.png)

La función **ft_lstmap** recibirá como argumentos el **puntero a la lista**, **el puntero a la función** `f` y **un puntero a la función** `del`.
Lo que deberemos hacer es **crear una nueva lista** e ir guardando en ella el resultado de iterar cada elemento de la lista `lst` al aplicarle el contenido de la funcion `f`. En caso de error a la hora de alojar memoria con `malloc`, debemos **limpiar el contenido de nuestra nueva lista** y retornar `NULL`.





# LIBFT
## INTRODUCTION

C programming can be very tedious when one doesn’t have access to those highly useful standard functions. This project gives you the opportunity to re-write those functions, understand them, and learn to use them. This library will help you for all your future C projects.
Through this project, we also give you the opportunity to expand the list of functions with your own. Take the time to expand your libft throughout the year.



This document describes the applicable standard (Norm) at 42. A
programming standard defines a set of rules to follow when writing code. The Norm
applies to all C projects within the Inner Circle by default, and to any project where it’s
specified.
