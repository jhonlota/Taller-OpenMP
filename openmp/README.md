# OpenMP una librería para programación en paralelo

## Contenido de este repositorio

* `Interacción 0` En esta interacción lo único que debe hacer es compilar el programa gcc helloworld.c -o helloworld. Observe los resultados de la ejecución.

Se puede observar que dentro de la interacción, se ejecutan dos sentencias “printf” de manera secuencial.

![alt tag](https://docs.google.com/drawings/d/1b9V-RUUkrm7inGaBzJlgDl6nQ1vfEGqQi4OZsBuw7Bc/pub?w=483&h=100)
* `Interacción 1` En esta interacción ud. debe hacer los ajustes al código fuente de acuerdo a como lo especifican los comentarios en el archivo .c. Compile el programa de la siguiente manera gcc -fopenmp helloworld -o helloworld. Cuantos hilos se ejecutan?

Como resultado obtenemos la ejecución de 4 hilos, pero estos hilos se ejecutan al momento de invocar cada una de las instrucciones “printf”, por esta razón se imprimen cuatro veces de seguido la palabra Hello, y luego cuatro la palabra World. Igualmente los hilos no son sincronizados, se ejecutan de manera aleatoria y sin orden alguno.

![alt tag](https://docs.google.com/drawings/d/19o17_V6OU-BWtfY7xQ-Tn1CZlh2sr2vEZgihirmeD78/pub?w=547&h=100)
* `Interacción 2` Haga los ajustes que correspondan al código fuente de acuerdo con lo especificado en los comentarios del programa .c. Compile el programa de la siguiente manera gcc -fopenmp helloworld -o helloworld. Cuantos hilos se ejecutan? Difiere el número de hilos con relación al anterior? Por qué?

En esta interacción se observa que se ejecutan los cinco hilos, los cuales han sido asignados a través de la declaración #pragma omp parallel num_threads(5), pero igual al ejemplo anterior, donde los hilos se ejecutan de manera independiente, lo cual no demuestra un orden en la ejecución de cada sentencia.

![alt tag](https://docs.google.com/drawings/d/1KDilgPg1eJSmnekJpJUkiJt0ljBXOMFsD7HONGlfD8M/pub?w=551&h=113)
* `parallel_00.c` En este código se puede ver en acción la invocación en paralelo de un bloque de código en C y como se especifica que una variable sea tomada como una variable privada y accesible solo para un hilo.

![alt tag](https://docs.google.com/drawings/d/1IbiDCKWGthu1h49cYpYmvTMGxClWuG1V10Q0GsRmIjY/pub?w=557&h=100)
* `parallel_01.c` En este programa se muestra como se puede indicar un número diferentes de hilos para llevar a cabo una tarea.

![alt tag](https://docs.google.com/drawings/d/1bcZXRi2WJd3V3rSoQ0n4JGs6Q2JDpPfVGMut7ai7m7g/pub?w=557&h=155)
* `parallel_02.c` En este programa se muestra como se puede paralelizar un ciclo `for`.

![alt tag](https://docs.google.com/drawings/d/1SmBtOnjiMBlIRdOQ4gHEf-i_WO2LKNXWMv17Hkbl7TM/pub?w=425&h=248)
* `parallelblock_00.c` En este programa se muestra como se pueden paralelizar diferentes bloques de código a través de las directivas `sections` y `section`. 

![alt tag](https://docs.google.com/drawings/d/1sF6cHOugJy43ya58Tf_aePeWoq_BIIXMwx9eyRGI-mg/pub?w=443&h=346)
* `parallelfor_00.c` En este programa se muestra la paralelización de un ciclo `for` pero además muestra una directiva de compilación llamada `reduction` que permite consolidar el valor parcial de diferentes hilos en una sola variable.

![alt tag](https://docs.google.com/drawings/d/1JapPu900WMleyGw6JHrYNcy8q_33obbsUnrkajqNwac/pub?w=563&h=100)
* `pi.c` usa una aproximación a través del cálculo del área bajo la curva.

![alt tag](https://docs.google.com/drawings/d/1VeV0uvJE8z-Rpz_wgXFhna7OwyDJIcFMIMIF9tt40y8/pub?w=518&h=383)
![alt tag](https://docs.google.com/drawings/d/1jeOvO7HOeSxj-wAtTwOmKBjHvwrkhSMx0kMuGReJWh0/pub?w=433&h=115)
* `montecarlopi.c` usa una aproximación basada en el método Monte Carlo para de forma aleatoria se llegue a la estimación del valor de Pi.

![alt tag](https://docs.google.com/drawings/d/1dtPCD79IH9YpnVUOxj71sUxTjrO1OAf9UvKSa-Io3iA/pub?w=548&h=467)
![alt tag](https://docs.google.com/drawings/d/1QKvMTKG3NObN9nVnPIeF8XGBxvsgziIaANc-yTkGslM/pub?w=569&h=147)