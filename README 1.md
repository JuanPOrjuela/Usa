# Comparación de Factorial Recursivo e Iterativo en Python y C

# 🎯 Propósito de la tarea
En esta tarea probé dos formas de calcular el factorial de un número:
- Con recursividad
- De forma iterativa

La idea era ver cómo se comportan, medir cuánto tardan y cuánta memoria usan, tanto en Python como en C, y así comparar cuál es más eficiente.

---

# ⚙️ Cómo hice las funciones

#  Recursivo
La función se llama a sí misma hasta llegar al caso base (cuando `n` es 0 o 1).  
Ejemplo en Python:
```python
def facto_r(n):
    if n <= 1:
        return 1
    return n * facto_r(n - 1)
```

#  Iterativo
Aquí usé un bucle para multiplicar todos los números desde 1 hasta `n`:
```python
def facto_i(n):
    resultado = 1
    for i in range(1, n + 1):
        resultado *= i
    return resultado
```

En C el funcionamiento es igual, solo cambia la sintaxis.

---

# ⏱ Cómo medí el tiempo y la memoria

# 🐍 Python
- time → para medir el tiempo que tarda en ejecutarse.
- memory_profiler → para ver la memoria máxima que usó.
- matplotlib → para hacer las gráficas y comparar.

# 💻 C
- clock() de <time.h> → para medir el tiempo de ejecución.
- No medí memoria en C porque no usamos librerías extra para eso.

---

# 📊 Lo que encontré
- El iterativo fue más rápido y usó menos memoria que el recursivo, sobre todo con números grandes.
- El recursivo es más fácil de entender en cuanto a la idea matemática, pero hace más llamadas a funciones y por eso consume más recursos.
- En C, el tiempo fue menor que en Python, porque C es un lenguaje compilado y más rápido.
- En Python, el recursivo usó más memoria porque cada llamada ocupa espacio en la pila.

---

# 📂 Archivos en este repositorio
- `Python recursivo.py` → factorial recursivo con tiempo, memoria y gráficas.
- `Python iterativo.py` → factorial iterativo con tiempo, memoria y gráficas.
- `C recursivo.c` → factorial recursivo con tiempo usando `clock()`.
- `C iterativo.c` → factorial iterativo con tiempo usando `clock()`.

---

## 🚀 Cómo ejecutarlo

# Python
Instalar dependencias:

pip install memory_profiler matplotlib

Ejecutar:

python "Python recursivo.py"
python "Python iterativo.py"

# C

Corre en compiler de internet como C compiler

