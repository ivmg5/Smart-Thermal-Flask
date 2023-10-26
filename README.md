---

### Termo Inteligente: Medición de Nivel y Temperatura

#### 1. Introducción:
El proyecto "Termo Inteligente" nace del análisis y estudio de mercado realizado en el Instituto Tecnológico de Estudios Superiores de Monterrey, Campus Guadalajara. La idea central es crear un termo que no solo sirva para contener líquidos, sino que también proporcione información relevante al usuario mediante la integración de tecnología, sensores y programación.

#### 2. Objetivo:
Desarrollar un termo equipado con sensores que puedan detectar y mostrar el nivel de líquido y su temperatura en tiempo real. Esto se logra mediante la integración de un sensor ultrasónico y un sensor de temperatura y humedad, junto con LEDs indicadores.

#### 3. Componentes Principales:
- **Sensor Ultrasónico**: Mide la distancia del líquido en el termo y activa LEDs para indicar si el termo está lleno, medio o bajo.
- **Sensor DHT11**: Sensor de temperatura y humedad que permite detectar la temperatura del líquido dentro del termo.
- **LEDs**: Cuatro LEDs en total, tres para indicar el nivel del líquido y uno adicional para señalar si el líquido está a una temperatura muy alta para ser consumido.

#### 4. Funcionamiento:
El termo, a través del código Arduino, mide la distancia del líquido y la temperatura a intervalos regulares. Según las mediciones:
- Si la distancia del líquido es menor a 4 cm, se enciende el LED indicando que el termo está lleno.
- Si la distancia está entre 4 y 10 cm, se enciende el LED de nivel medio.
- Si la distancia es mayor a 10 cm, el LED de nivel bajo se activa.
- El cuarto LED se enciende intermitentemente si la temperatura del líquido supera un umbral predefinido, indicando que está muy caliente.

#### 5. Implementación:
El diseño del circuito se simuló inicialmente en Tinkercad, optimizando su organización y funcionamiento. Posteriormente, se llevó a cabo el montaje físico en una protoboard, cuidando la organización y conexión de todos los componentes.

#### 6. Código:
El código Arduino se desarrolló para integrar y coordinar los sensores y LEDs. Utiliza la librería DHT para el sensor DHT11 y define varios pines para la entrada y salida de datos. Las mediciones y la lógica de control están estructuradas mediante funciones y condicionales.

#### 7. Recomendaciones:
- Al montar el circuito en la protoboard, es esencial ser cuidadoso y metódico para evitar falsos contactos o desconexiones.
- Se sugiere realizar pruebas periódicas para verificar la precisión de los sensores y la correcta señalización de los LEDs.

#### 8. Conclusión:
El "Termo Inteligente" es un ejemplo de cómo la tecnología y la electrónica pueden integrarse en productos cotidianos para mejorar la experiencia del usuario y proporcionar información útil.

<img width="393" alt="Screenshot 2023-10-25 at 9 15 15 p m" src="https://github.com/ivmg5/Smart-Thermal-Flask/assets/102205596/c2f5f419-7676-4778-8169-1893beb5c165">
<img width="414" alt="Screenshot 2023-10-25 at 9 16 05 p m" src="https://github.com/ivmg5/Smart-Thermal-Flask/assets/102205596/d685c65f-f257-48ab-9460-18ffba3ddaf9">
<img width="187" alt="Screenshot 2023-10-25 at 9 16 18 p m" src="https://github.com/ivmg5/Smart-Thermal-Flask/assets/102205596/f0bea791-7791-4a15-818b-8486cfcebfcb">


---
