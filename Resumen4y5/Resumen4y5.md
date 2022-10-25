
## Resumen 4 y 5
## Daniel Barrantes Esquivel
## Redes
### VERIFICACIÓN DE LOS PROTOCOLOS
Los protocolos que se utilizan en la práctica, y los programas que los implementan, con frecuencia son complicados. En consecuencia, se requiere mucha investigación para encontrar técnicas matemáticas formales con las cuales especificar y verificar los protocolos.

### Modelos de máquinas de estado finito
Un concepto clave empleado en muchos modelos de protocolos es el de la máquina de estados finitos. Con esta técnica, cada máquina de protocolo (es decir, emisor o receptor) siempre
está en un estado específico en cualquier instante. Su estado consiste en todos los valores de sus variables, incluido el contador de programa.
En la mayoría de los casos puede agruparse un gran número de estados a fin de analizarlos.
Por ejemplo, considerando el receptor del protocolo 3, podemos abstraer dos estados importantes de todos los posibles: en espera de la trama 0 y en espera de la trama 1.
Vale la pena decir algo sobre el estado del canal. El concepto de una trama que está “en el canal” es, por supuesto, una abstracción. Lo que queremos decir en realidad es que es posible que
una trama se haya recibido, pero no procesado, en el destino. Una trama permanece “en el canal”
hasta que la máquina de protocolo ejecuta FromPhysicalLayer y la procesa.
De cada estado hay cero o más transiciones posibles a otros estados. Las transiciones ocurren
cuando sucede algún evento. Para una máquina de protocolo, podría ocurrir una transición al enviar una trama, al llegar una trama, al terminar un temporizador, al ocurrir una interrupción, etcétera. Para el canal, los eventos típicos son la inserción de una trama nueva en el canal por una máquina de protocolo, la entrega de una trama a una máquina de protocolo o la pérdida de una trama debido a una ráfaga de ruido.

###  Modelos de red de Petri
La máquina de estados finitos no es la única técnica para especificar protocolos formalmente. En esta sección describiremos una técnica completamente diferente, la red de Petri (Danthine, 1980). Una red de Petri tiene cuatro elementos básicos: lugares, transiciones, arcos y tokens. Un lugar representa un estado en el que puede estar parte del sistema.
A. Se utiliza una barra horizontal
o vertical para indicar una transición. Cada transición tiene cero o más arcos de entrada, que llegan de sus lugares de entrada, y cero o más arcos de salida, que van a sus lugares de salida.
Las redes de Petri pueden representarse convenientemente en una forma algebraica semejante
a una gramática. Cada transición contribuye con una regla a la gramática. Cada regla especifica
lugares de entrada y salida de la transición.

###  BLUETOOTH
En 1994, la empresa L. M. Ericsson se interesó en conectar sus teléfonos móviles y otros dispositivos (por ejemplo, PDAs,) sin necesidad de cables. En conjunto con otras cuatro empresas
(IBM, Intel, Nokia y Toshiba), formó un SIG (grupo de interés especial, es decir, un consorcio) con el propósito de desarrollar un estándar inalámbrico para interconectar computadoras, dispositivos de comunicaciones y accesorios a través de radios inalámbricos de bajo consumo de energía, corto alcance y económicos. Al proyecto se le asignó el nombre Bluetooth, en honor de Harald Blaatand (Bluetooth) II (940-981), un rey vikingo que unificó (es decir, conquistó) Dinamarca y Noruega,
también sin necesidad de cables.
Aunque la idea original eran tan sólo prescindir de cables entre dispositivos, su alcance se expandió rápidamente al área de las LANs inalámbricas. Aunque esta expansión le dio más utilidad al estándar, también provocó el surgimiento de competencia con el 802.11. Para empeorar las cosas, los dos sistemas interfieren entre sí en el ámbito eléctrico. Asimismo, vale la pena hacer notar que Hewlett-Packard introdujo hace algunos años una red infrarroja para conectar periféricos de computadora sin cables, pero en realidad nunca alcanzó popularidad.

### Arquitectura de Bluetooth
Empecemos nuestro análisis del sistema Bluetooth con un rápido vistazo de sus elementos y
de su propósito. La unidad básica de un sistema Bluetooth es una piconet, que consta de un
nodo maestro y hasta siete nodos esclavos activos a una distancia de 10 metros. En una misma
sala (grande) pueden encontrarse varias piconets y se pueden conectar mediante un nodo puente, Un conjunto de piconets interconectadas se denomina scatternet.
La razón para el diseño maestro/esclavo es que los diseñadores pretendían facilitar la implementación de chips Bluetooth completos por debajo de 5 dólares. La consecuencia de esta decisión es que los esclavos son sumamente pasivos y realizan todo lo que los maestros les
indican.

###  Aplicaciones de Bluetooth
La mayoría de los protocolos de red sólo proporcionan canales entre las entidades que se comunican y permiten a los diseñadores de aplicaciones averiguar para qué desean utilizarlos. Por ejemplo, el 802.11 no especifica si los usuarios deben utilizar sus computadoras portátiles para leer correo electrónico, navegar por la Red o cualquier otro uso. En contraste, la especificación Bluetooth V1.1 designa el soporte de 13 aplicaciones en particular y proporciona diferentes pilas de protocolos para cada una.
El perfil de acceso genérico no es realmente una aplicación, sino más bien la base sobre la
cual se construyen las aplicaciones; su tarea principal es ofrecer una manera para establecer y mantener enlaces (canales) seguros entre el maestro y los esclavos.
El perfil de puerto serie es un protocolo de transporte que la mayoría de los perfiles restantes utiliza. Emula una línea serie y es especialmente útil para aplicaciones heredadas que requieren una línea serie.
El perfil de intercambio genérico define una relación cliente-servidor para el traslado de
datos. Los clientes inician operaciones, pero tanto un cliente como un servidor pueden fungir
como esclavo. Al igual que el perfil de puerto serie, es la base para otros perfiles.

###  La pila de protocolos de Bluetooth

El estándar Bluetooth cuenta con muchos protocolos agrupados con poco orden en capas. La
estructura de capas no sigue el modelo OSI, el modelo TCP/IP, el modelo 802 o algún otro modelo conocido. Sin embargo, el IEEE se encuentra modificando actualmente Bluetooth para ajustarlo
al modelo 802. En la figura 4-37 se muestra la arquitectura básica de protocolos de Bluetooth tal
como la modificó el comité 802.
La capa inferior es la capa de radio física, la cual es bastante similar a la capa física de los modelos OSI y 802. Se ocupa de la transmisión y la modulación de radio. Aquí, gran parte del interés se enfoca en el objetivo de lograr que el sistema tenga un costo bajo para que pueda entrar al mercado masivo.
La siguiente capa hacia arriba es la de middleware, que contiene una mezcla de diferentes
protocolos. El IEEE incorporó aquí la subcapa LLC del 802 para ofrecer compatibilidad con las
redes 802. Los protocolos RFcomm, de telefonía y de descubrimiento de servicios son nativos.
RFcomm (comunicación de Radio Frecuencia) es el protocolo que emula el puerto serie estándar
de las PCs para la conexión de teclados, ratones y módems, entre otros dispositivos. 

###  La capa de radio de Bluetooth

La capa de radio traslada los bits del maestro al esclavo, o viceversa. Es un sistema de baja potencia con un rango de 10 metros que opera en la banda ISM de 2.4 GHz. La banda se divide en 79
canales de 1 MHz cada uno. La modulación es por desplazamiento de frecuencia, con 1 bit por Hz,
lo cual da una tasa de datos aproximada de 1 Mbps, pero gran parte de este espectro la consume la sobrecarga. Para asignar los canales de manera equitativa, el espectro de saltos de frecuencia se
utiliza a 1600 saltos por segundo y un tiempo de permanencia de 625 μseg. Todos los nodos de
una piconet saltan de manera simultánea, y el maestro establece la secuencia de salto.

###  La capa de banda base de Bluetooth

La capa de banda base de Bluetooth es lo más parecido a una subcapa MAC. Esta capa convierte el flujo de bits puros en tramas y define algunos formatos clave. En la forma más sencilla,
el maestro de cada piconet define una serie de ranuras de tiempo de 625 μseg y las transmisiones
del maestro empiezan en las ranuras pares, y las de los esclavos, en las ranuras impares. Ésta
es la tradicional multiplexión por división de tiempo, en la cual el maestro acapara la mitad
de las ranuras y los esclavos comparten la otra mitad. Las tramas pueden tener 1, 3 o 5 ranuras de
longitud.
La sincronización de saltos de frecuencia permite un tiempo de asentamiento de 250-260 μseg
por salto para que los circuitos de radio se estabilicen. Es posible un asentamiento más rápido, pero a un mayor costo.
Cada trama se transmite por un canal lógico, llamado enlace, entre el maestro y un esclavo.
Hay dos tipos de enlaces. El primero es el ACL (Asíncrono no Orientado a la Conexión), que
se utiliza para datos conmutados en paquetes disponibles a intervalos irregulares.
El otro tipo de enlace es el SCO (Síncrono Orientado a la Conexión), para datos en tiempo
real, como ocurre en las conexiones telefónicas. A este tipo de canal se le asigna una ranura fija
en cada dirección.

###  La capa L2CAP de Bluetooth

a capa L2CAP tiene tres funciones principales. Primera, acepta paquetes de hasta 64 KB provenientes de las capas superiores y los divide en tramas para transmitirlos. Las tramas se reensamblan nuevamente en paquetes en el otro extremo.
Segunda, maneja la multiplexión y desmultiplexión de múltiples fuentes de paquetes. Cuando
se reensambla un paquete, la capa L2CAP determina cuál protocolo de las capas superiores lo manejará, por ejemplo, el RFcomm o el de telefonía.
Tercera, la capa L2CAP se encarga de la calidad de los requerimientos de servicio, tanto al establecer los enlaces como durante la operación normal.

###  Estructura de la trama de Bluetooth

Existen diversos formatos de trama, el más importante de los cuales se muestra en la figura
4-38. Empieza con un código de acceso que identifica al maestro, cuyo propósito es que los esclavos que se encuentren en el rango de alcance de dos maestros sepan cuál tráfico es para ellos.
A continuación se encuentra un encabezado de 54 bits que contiene campos comunes de la subcapa
MAC.
En el campo de datos de las tramas ACL se utilizan varios formatos. Sin embargo, las tramas
SCO son más sencillas: el campo de datos siempre es de 240 bits. Se definen tres variantes, que
permiten 80, 160 y 240 bits de carga útil real, y el resto se utiliza para corrección de errores. En
la versión más confiable (carga útil de 80 bits), el contenido se repite tres veces, al igual que el encabezado.
Debido a que el esclavo podría utilizar solamente las ranuras impares, obtiene 800 ranuras por
segundo, de la misma manera que el maestro. Con una carga útil de 80 bits, la capacidad de canal
del esclavo es de 64,000 bps y la del maestro también es de 64,000 bps, exactamente la necesaria
para un canal de voz PCM dúplex total (razón por la cual se eligió una tasa de saltos de 1600 saltos por segundo). 

