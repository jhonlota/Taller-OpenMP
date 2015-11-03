# OpenMP una librería para programación en paralelo

## Contenido de este repositorio

* `Interacción 0`
En esta interacción lo único que debe hacer es compilar el programa gcc helloworld.c -o helloworld. Observe los resultados de la ejecución.
Se puede observar que dentro de la interacción, se ejecutan dos sentencias “printf” de manera secuencial.
![alt tag](https://docs.google.com/drawings/d/1IhmW3pFvKPecRys3CdaVBpYT40AUfn9p92gniLlYXHQ/pub?w=484&h=100)
* `Interacción 1`
En esta interacción ud. debe hacer los ajustes al código fuente de acuerdo a como lo especifican los comentarios en el archivo .c. Compile el programa de la siguiente manera gcc -fopenmp helloworld -o helloworld. Cuantos hilos se ejecutan?

Como resultado obtenemos la ejecucion de 4 hilos, pero estos hilos se ejecutan al momento de invocar cada una de las instrucciones “printf”, por esta razon se eimprimen cuatro veces de segido la palabra Hello, y luego cuatro la palabra World. Igualmente los hilos no son sicronizados, se ejecutan de manera aleatoria y sin orden alguno.

* `Interacción 2`
Haga los ajustes que correspondan al código fuente de acuerdo con lo especificado en los comentarios del programa .c. Compile el programa de la siguiente manera gcc -fopenmp helloworld -o helloworld. Cuantos hilos se ejecutan? Difiere el número de hilos con relación al anterior? Por qué?

En esta interaccion se observa que se ejecutan los cinco hilos, los cuales han sido asignados a traves de la declaracion #pragma omp parallel num_threads(5), pero igual al ejemplo anterior, donde los hilos se ejecutan de manera independiente, lo cual no demuestra un orden en la ejecucion de cada sentencia.

* `parallel_00.c`
En este código se puede ver en acción la invocación en paralelo de un bloque de código en C y como se especifica que una variable sea tomada como una variable privada y accesible solo para un hilo.

* `parallel_01.c`
En este programa se muestra como se puede indicar un número diferentes de hilos para llevar a cabo una tarea.

* `parallel_02.c`
En este programa se muestra como se puede paralelizar un ciclo `for`.

* `parallelblock_00.c`
En este programa se muestra como se pueden paralelizar diferentes bloques de código a través de las directivas `sections` y `section`. 

* `parallelfor_00.c`
En este programa se muestra la paralelización de un ciclo `for` pero además muestra una directiva de compilación llamada `reduction` que permite consolidar el valor parcial de diferentes hilos en una sola variable.

* `pi.c`

* `pi.c`
