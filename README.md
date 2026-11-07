# Sistema_De_Calculo_Del_ISR

## Datos del estudiante
- **Nombre:** Kelvin Alberto Santana Beltre.
- **Matrícula:** *[2025-2485]*.

## Descripción breve del programa
Una aplicación de consola que registra el sueldo bruto de un usuario para calcular el ISR (Impuesto Sobre la Renta) de una localidad determinada. Aplicando de forma automática el descuento según los rangos establecidos por la DGII. Esperando como salida el monto bruto, descuento a aplicar y dencuento aplicado.  

## Lógica del programa
- **Datos de entrada:** Sueldo bruto.
- **Datos que procesa:** Calcular el descuento del ISR según las tarifas mensuales mediante un condicional múltiple. 
- **Datos de Salida:** Sueldo original, Descuento aplicado (o N/A) y Sueldo neto.

## Captura de pantalla del programa en ejecución

### Ejemplo No.1
![Ejecución del Sistema De Calculo Del ISR, ejemplo No.1](Ejemplo No.1)
### Ejemplo No.2
![Ejecución del Sistema De Calculo Del ISR, ejemplo No.2](Ejemplo No.2)
### Ejemplo No.3
![Ejecución del Sistema De Calculo Del ISR, ejemplo No.3](Ejemplo No.3)
### Ejemplo No.4
![Ejecución del Sistema De Calculo Del ISR, ejemplo No.4](Ejemplo No.4)

## Estructura utilizada y su función
En este programa se implementó una estructura condicional múltiple (if, else if, else). Su función principal es controlar la ejecución evaluando el sueldo por descarte, algo similar a lo que hemos prácticado anteriormente; de esta manera, el algoritmo clasifica el salario en su tramo correspondiente de la escala publica de la DGII, aplicando la fórmula de retención exacta que le corresponde (o descartando el descuento) sin ejecutar en la maquina instrucciones innecesarias.
