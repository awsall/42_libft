*Este proyecto ha sido creado como parte del currículo de 42 por awsall*

**TABLA DE CONTENIDO**


1. **Descripción**
2. **Descripción de las funciones de libc**
3. **Funciones adicionales**
4. **Funciones de listas enlazadas**
5. **Instrucciones**
6. **Recursos**
7. **Uso de IA**

---

# Descripción

El proyecto **libft** consiste en recrear ciertas funciones de la biblioteca estándar de C, permitiendo así una comprensión profunda de las estructuras de datos que utilizaremos en futuros proyectos durante nuestro currículo en la escuela 42.

---

# Descripción de las funciones de libc

A continuación se presentan algunas de las funciones estándar de C y su implementación:

- **ft_isalpha**  
  Verifica si `c` es una letra del alfabeto (mayúscula o minúscula). Retorna 1 si es verdadero y 0 si es falso.

- **ft_isdigit**  
  Verifica si `c` es un dígito, retornando 1 si es verdadero y 0 en caso contrario.

- **ft_isalnum**  
  Verifica si `c` es una letra o un dígito. Si es verdadero, retorna 1; de lo contrario, 0.

- **ft_isascii**  
  Verifica si `c` es un carácter ASCII, que incluye todos los caracteres entre 0 y 127.

- **ft_isprint**  
  Verifica si `c` es un carácter imprimible, incluyendo el espacio.

- **ft_strlen**  
  Calcula la longitud de una cadena apuntada por `str`, excluyendo el byte nulo de finalización ('\0').

- **ft_memset**  
  Rellena una zona de memoria con un valor constante. Toma tres argumentos: un puntero a la zona, el valor (int), y el número de bytes a rellenar.

- **ft_bzero**  
  Establece en cero los primeros `n` bytes del bloque de memoria apuntado por `ptr`.

- **ft_memcpy**  
  Copia un número especificado de bytes (`n`) de una zona de memoria fuente a una zona de destino.

- **ft_memmove**  
  Copia un número dado de bytes de la memoria fuente a la zona de destino, manejando de forma segura los solapamientos de memoria.

- **ft_strlcpy**  
  Copia cadenas de caracteres de forma segura, garantizando la terminación con un byte nulo ('\0').

- **ft_strlcat**  
  Concatena cadenas en C de forma segura, evitando desbordamientos de búfer.

- **ft_toupper**  
  Convierte una letra minúscula en su equivalente mayúsculo. Si el carácter ya es mayúscula o no es alfabético, retorna el carácter sin cambios.

- **ft_tolower**  
  Convierte una letra mayúscula en su equivalente minúsculo. Si el carácter ya es minúscula o no es alfabético, retorna el carácter sin cambios.

- **ft_strchr**  
  Retorna un puntero a la primera ocurrencia de `c` en la cadena `s` o NULL si no se encuentra.

- **ft_strrchr**  
  Retorna un puntero a la última ocurrencia de `c` en la cadena `s` o NULL si no se encuentra.

- **ft_strncmp**  
  Compara los primeros `n` caracteres de dos cadenas y determina su orden lexicográfico.

- **ft_memchr**  
  Busca la primera ocurrencia de un byte específico en los primeros `n` bytes de una zona de memoria.

- **ft_memcmp**  
  Compara los primeros `n` bytes de dos zonas de memoria y retorna un entero indicando su relación.

- **ft_strnstr**  
  Busca la primera ocurrencia de una subcadena `little` en una cadena principal `big`, limitando la búsqueda a los primeros `len` caracteres.

- **ft_atoi**  
  Convierte una cadena de caracteres en entero, ignorando espacios y procesando signos (+/-).

- **ft_calloc**  
  Asigna dinámicamente memoria para un array de elementos, inicializando cada byte a cero.

- **ft_strdup**  
  Duplica una cadena de caracteres, creando una copia exacta de la cadena fuente, incluyendo el byte nulo de finalización. La memoria debe ser liberada por el usuario.

---

# Funciones adicionales

Las funciones adicionales son personalizadas y no forman parte de la biblioteca estándar de libc. Se utilizan para facilitar la manipulación de cadenas de caracteres y la gestión de memoria.

- **ft_substr**  
  Devuelve una nueva cadena de caracteres con los caracteres de otra cadena que comienzan en una localización especificada y de acuerdo al número de caracteres que se especifiquen.  

- **ft_strtrim**  
  Elimina los caracteres specificados (set) que están en el inicio y al fin de una cadena(s1), reserva meoria con (malloc(3)) y devuelve la copia de s1 sin los caracteres (set).

- **ft_split**
  Usa un carácter specifico (c) para dividir una cadena s en sub cadenas

- **ft_strjoin**
  Reserva memoria (con malloc(3)) y devuelve una nueva cadena de caracteres, formada por la concatenación de ‘s1’ y ‘s2’

- **ft_itoa**
  Convierte un número entero (int) a una cadena de caracteres (char[])

- **ft_strmapi**
  Aplica una función specifica a cada caracter de una cadena y devuelve una nueva cadena reservando memoria con malloc.

- **ft_striteri**
  Aplica una función specífica a cada caracter de una cadena pero modifica la cadena sin crear una nueva.

- **ft_putchar_fd**
  Se usa para mostrar un caracter c en el descriptor de archivo dado.

- **ft_putstr_fd**
  Se usa para enviar una cadena al descriptor de archivo dado.

- **ft_putendl_fd**
  Se usa para enviar una cadena seguido de salto de línea al descriptor de archivo dado.

- **ft_putnbr_fd**
  Mostra el número entero ‘n’ en el descriptor de
  archivo dado.


# Funciones de listas enlazadas

Estas funciones están dedicadas a la manipulación de listas enlazadas, utilizando generalmente una estructura `t_list` definida en nuestro archivo `libft.h`.

- **ft_lstnew**  
  Crea un nuevo nodo de una lista.

- **ft_lstadd_front**  
  Se usa para crear un nuevo nodo al inicio de una lista.
  
- **ft_lstsize**
  Se usa para medir la longitud de una lista.  

- **ft_lstlast**  
  Apunta al ultimo nodo de una lista.

- **ft_lstadd_back**  
  Crea un nuevo nodo al final de la lista.

- **ft_lstdelone**
  Se usa para eliminar un nodo.

- **ft_lstclear**  
  Se usa para eliminar el contenido de un nodo.

- **ft_lstiter**
  Sirve para aplicar una función f a cada nodo de una lista.  

- **ft_lstmap**
  Hace casi el mismo trabajo que ft_lstiter, es decir aplica una función en cada nodo de una lista y devuelve una nueva cadena. Contrario a ft_lstiter que modifica la cadena sin devolver nada.

# Instrucciones

Para compilar la biblioteca utilizaremos la herramienta **make**. Esta leerá las instrucciones presentes en el **Makefile** y generará la librería completa con todas las funciones.

---

# Recursos

  **explicaciones de los compañeros**

- **Páginas man de Linux:**  
  [https://man7.org/linux/man-pages/index.html](https://man7.org/linux/man-pages/index.html)

- **Encabezados de la Biblioteca Estándar de C:**  
  [https://cppreference.com/w/c/header.html](https://cppreference.com/w/c/header.html)

- **Compilador de C en línea, depurador visual:**  
  [https://pythontutor.com/c.html#mode=edit](https://pythontutor.com/c.html#mode=edit)

- **Aprender el funcionamiento del Makefile:**  
  [https://makefiletutorial.com/](https://makefiletutorial.com/)

---


# Uso de IA

- **Explicación de cada función:**  
  Se emplea IA para explicar el funcionamiento de cada función.

- **Verificación de código:**  
  Solicito que verifiquen mi código y proporcionen una explicación de cada línea para comprender mejor su funcionamiento.



