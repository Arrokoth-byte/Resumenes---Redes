#### Explique el concepto de Time Division Multiplexing y Frequency Division Multiplexing. (25 pts)
El Time Division Multiplexing es un método para colocar múltiples flujos de datos en una sola señal separando la señal en muchos segmentos, cada uno con una duración muy corta. Cada flujo de datos individual se vuelve a ensamblar en el extremo receptor en función del tiempo.
* Uso de redes telefonicas celurares
* Turnos para usar todo el canal, es decir, el ancho de banda.
* Roud Robin (Metricas)

El Frequency Division Multiplexing divide el espectro de frecuencias de un canal de mayor ancho de banda en muchos canales de comunicación individuales de ancho de banda más pequeños. Las señales en estos canales se transmiten al mismo tiempo pero a diferentes frecuencias portadoras.
* AM o Fm.
* Banda guarda para evitar colisiones.


En Frequency Division Multiplexing todas las señales operan al mismo tiempo con diferentes frecuencias, pero en Time Division Multiplexing, todas las señales operan con la misma frecuencia en diferentes momentos.

#### Explique el concepto de colisión durante el proceso de asignación del canal, comente las diferencias entre medios guiados y medios no guiados. (25 pts)

Si dos tramas se transmiten en forma simultánea, se traslapan en el tiempo y la señal resultante se altera, por otro lado todas las estaciones pueden detectar colisiones y si una trama está en colisión debe transmitirse nuevamente después.

La diferencia entre los medios guiados y no guiados es que en los medios guiados, la señal viaja a través de un medio físico como el cable de cobre y fibra optica, mientras que, en medios no guiados, la señal viaja a través del aire.

#### ¿Como funciona el algoritmo de asignación del canal Aloha y Aloha Ranurado? Explique (20 pts)

Aloha puro permite que los usuarios transmitan cuando tengan datos por enviar. claramente habrá colisiones y las tramas en colisión se dañarán. Sin embargo, debido a la propiedad de retroalimentación de la difusión, un emisor siempre puede saber si la trama fue destruida o no escuchando el canal, de la misma manera que los demás usuarios.

Y el aloha ranurado divide el tiempo en intervalos discretos, cada uno de los cuales corresponde a una trama. Este enfoque requiere que los usuarios acuerden límites de ranura. Basicamente en el aloha ranurado las estaciones solo pueden transmitir cuando la estación de sincronización lo indica. Esto disminuye las colisiones en el aire y lo ideal es que si existe una colisión las estaciones deben de esperar un rato, esto para evitar que se vuelva a dar otra colisión.

#### ¿Cuáles son las diferencias entre Hub y Switch? ¿Porqué razón el Switch es mejor?
La diferencia el hub y el Switch está en cómo envían estos Frames, ya que los Hubs envían los Frames a todos los dispositivos conectados a la red, y el Switch únicamente al dispositivo al que se lo quieres enviar por el hecho de que conoce la dirección específica de cada dispositivo en la red conectado a él.

El switch es mejor ya que gracias a conocer las direcciones puntuales de todos los demás dispositivos en la red, incluso si esta es una red inalámbrica, es capaz de entregar los paquetes de datos de manera mucho más eficiente que el hub.

#### ¿Es posible transportar tramas Ethernet embebidas en imágenes PNG? Justifique su respuesta. (30 pts )

Dado que las imagenes PNG son imagenes sin perdidas de paquetes o de datos, es una buena forma de transportar tramas ethernet, las tramas ethernet tienen información de control sobre los datos, información sobre las direcciones de origen y destino de los envíos y un registro de los datos enviados. En su interior todo esto son datos binarios, dado que las imagenes en el fondo están compuestos por estos tipos de datos es posible transportar tramas Ethernet.









