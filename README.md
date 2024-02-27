# Código de ESP32 para Control de AC con Dimmer utilizando IDE Arduino 🛠️💡

Este proyecto proporciona un ejemplo de código para el ESP32 que permite controlar dispositivos de corriente alterna (AC) utilizando un dimmer. El código está diseñado para ser utilizado con el IDE de Arduino, lo que facilita la programación y carga del firmware en el ESP32.

## Descripción 📋

El código proporcionado implementa un controlador de dimmer para dispositivos de corriente alterna utilizando el ESP32. El ESP32 utiliza un circuito de control de fase para modular la corriente que fluye a través del dispositivo conectado, lo que permite variar la intensidad luminosa de una lámpara u otros dispositivos.

## Componentes Necesarios 📦

- ESP32 (placa de desarrollo)
- Módulo de control de fase (por ejemplo, TRIAC)
- Lámpara u otro dispositivo de corriente alterna (AC)
- Fuente de alimentación para el ESP32

## Uso 📝

1. **Configuración del Hardware:** Conecta el ESP32 y el módulo de control de fase según el esquemático proporcionado en el código.

2. **Configuración del Código:** Abre el archivo `esp32_dimmer.ino` en el IDE de Arduino y realiza cualquier ajuste necesario en las variables como el pin de salida utilizado para el control de fase.

3. **Carga del Código:** Compila y carga el código en el ESP32 utilizando el IDE de Arduino.

4. **Conexión del Dispositivo AC:** Conecta el dispositivo de corriente alterna (por ejemplo, una lámpara) al módulo de control de fase.

5. **Prueba del Dimmer:** Una vez que el código esté cargado en el ESP32 y el dispositivo AC esté conectado, prueba el dimmer ajustando la intensidad luminosa del dispositivo.

## Contribuciones 🚀

¡Contribuciones son bienvenidas! Si tienes ideas para mejorar los archivos STL, Gerber o cualquier otra parte del proyecto, no dudes en abrir un "issue" o enviar un "pull request".

## Créditos 🙌

Este proyecto fue creado por PICAIO SAS y está inspirado en proyectos similares de la comunidad de Arduino y impresión 3D.

## Licencia 📝

Este proyecto está bajo la licencia [MIT](LICENSE).
