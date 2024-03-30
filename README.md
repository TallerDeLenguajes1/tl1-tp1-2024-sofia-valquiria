# tl1-tp1-2024-sofia-valquiria
_Éste es el trabajo práctico número 1 de la asignatura Taller de Lenguajes_

#El archivo .gitignore

El archivo .gitignore es un archivo muy útil de incluir en nuestros proyectos, ya que *le indica a git que ignore ciertos archivos o carpetas que pueden estar dentro de nuestro proyecto pero que no necesariamente queremos que se lleve un control versionado de las mismas o que se suba estos archivos a la red*. Podría ser, por ejemplo, el token de autorización único de nuestro programa y realmente no queremos que aparezca en git ni en github. O podrian ser archivos no relacionados/con informacion personal.

Cualquiera fuere el caso, el archivo .gitignore siempre se configura de la misma manera:

Ejecutamos el siguiente comando o creamos manualmente un archivo llamado _.gitignore_
```
touch .gitignore
```

Luego accedemos a él y simplemente ponemos los nombres y extensiones de los archivos y carpetas que deseamos que git ignore. Esto deberia verse algo así
```
ignorado.txt  -- Un archivo de ejemplo
directorio_a_ignorar/ -- Un directorio de ejemplo
```


Respuesta a punto 3, apartado g:

Se debe a que la direccion de memoria almacenada por el puntero es (por como lo definimos: pNumero = &numero, donde & se lee como la direccion de memoria de)
la misma que la direccion de memoria de la variable. En el punto 4, a diferencia de estas dos direcciones que son iguales, es la direccion de memoria del mismo puntero. Esta naturalmente es diferente a la direccion de memoria de la variable.

P.D: Si un profe está leyendo esto, por favor corrija mi apellido en github: es "Sandoval" y no "Sandovall" como figuraba cuando ingresé y me autentifiqué. Perdón por la molestia. Creo que el error fue de tipeo mío. Sin más, me despido atentamente.
