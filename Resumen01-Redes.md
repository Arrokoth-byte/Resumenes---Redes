#### Daniel Barrantes Esquivel
## Internet

Es un inmenso conjunto de redes diferentes que usan ciertos protocolos comunes y proporcionan ciertos servicios comunes. Es un sistema poco común porque
nadie lo planeó y nadie lo controla.

## Arpanet

Durante el auge de la Guerra Fría, el DoD quería una red de control y comando que pudiera sobrevivir a una guerra nuclear. En esa época todas las comunicaciones militares usaban la red telefónica pública, que se consideraba vulnerable. 
Durante los primeros años, ARPA trataba de imaginar cuál sería su misión, pero en 1967 la atención de su entonces director, Larry Roberts, se volvió hacia las redes. Se puso en contacto con varios expertos para decidir qué hacer. Uno de ellos, Wesley Clark, sugirió la construcción de una subred de conmutación de paquetes, dando a cada host su propio enrutador. Después del escepticismo inicial, Roberts aceptó la idea y presentó un documento algo vago al respecto en el Simposio sobre Principios de Sistemas Operativos ACM SIGOPS que se llevó acabo en Gatlinburg, Tennessee, a fines de 1967 (Roberts, 1967). Para mayor sorpresa de Roberts,otro documento en la conferencia describía un sistema similar que no sólo había sido diseñado, sino que ya estaba implementado bajo la dirección de Donald Davies en el National Physical Laboratory en Inglaterra. El sistema del NPL no era un sistema a nivel nacional (sólo conectaba
algunas computadoras en el campus del NPL), pero demostró que era posible hacer que la conmutación de paquetes funcionara. Además, citaba el trabajo anterior de Baran, el cual había sido descartado. Roberts salió de Gatlinburg determinado a construir lo que más tarde se conocería como ARPANET.
La subred constaría de minicomputadoras llamadas IMPs (Procesadores de Mensajes de Interfaz), conectadas por líneas de transmisión de 56 kbps. Cada nodo de la red iba a constar de un IMP y un host, en el mismo cuarto, conectados por un cable corto, el software estaba dividido en dos partes: subred y host.
No obstante, en diciembre de 1969 de alguna manera surgió una red experimental con cuatro nodos: en UCLA, UCSB, SRI y la Universidad de Utah. Se eligieron estas cuatro porque todas te-
nían un gran número de contratos de ARPA y todas tenían computadoras host diferentes incompatibles en su totalidad. Este experimento también demostró que los protocolos existentes de ARPANET no eran adecuados para ejecutarse a través de varias redes. Esta observación condujo a más investigación sobre los protocolos, culminando con la invención del modelo y los protocolos de TCP/IP (Cerf yKahn, 1974). TCP/IP está diseñado de manera específica para manejar comunicación por interredes, aspecto cuya importancia se acrecentó conforme cada vez más y más redes se adhirieron a
ARPANET.

## NSFNET

A finales de la década de 1970, la NFS (Fundación Nacional para las Ciencias, de Estados
Unidos) vio el enorme impacto que ARPANET estaba teniendo en la investigación universitaria, permitiendo que científicos de todo el país compartieran datos y colaborarán en proyectos de investigación. la NSF decidió construir una red dorsal (o troncal)
para conectar sus seis centros de supercomputadoras en San Diego, Boulder, Champaign, Pittsburgh, Ithaca y Princeton. A cada supercomputadora se le dio un hermano menor, que consistía en una microcomputadora LSI-11 llamada fuzzball. Estas computadoras estaban conectadas a líneas alquiladas de 56 kbps y formaban una subred, utilizando la misma tecnología de hardware que ARPANET. Sin embargo, la tecnología de software era diferente: las fuzzball utilizan TCP/IP desde el inicio, creando así la primera WAN TCP/IP.
La NSF también fundó algunas redes regionales (alrededor de 20) que se conectaban a la red dorsal para que los usuarios en miles de universidades, laboratorios de investigación, bibliotecas y museos, tuvieran acceso a cualquiera de las supercomputadoras y se comunicaran entre sí. Toda la red, incluyendo la red dorsal y las redes regionales, se llamó NSFNET. Ésta se conectó a ARPANET a través de un enlace entre un IMP y una fuzzball en el cuarto de máquinas de Carnegie Mellon.

## Uso de Internet
El número de redes, máquinas y usuarios conectados a ARPANET creció rápidamente luego de que TCP/IP se convirtiera en el protocolo oficial el 1o. de enero de 1983. Cuando NSFNET y ARPANET estaban interconectadas, el crecimiento se hizo exponencial. Muchas redes regionales se unieron y se hicieron conexiones a redes en Canadá, Europa y el Pacífico. ¿Qué significa en realidad estar en Internet? Nuestra definición es que una máquina está en Internet si ejecuta la pila de protocolos de TCP/IP, tiene una dirección IP y puede enviar paquetes IP a todas las demás máquinas en Internet. La sola capacidad para enviar y recibir correo electrónico no basta, puesto que el correo electrónico es la puerta de entrada a muchas redes fuera de Internet.
Tradicionalmente (es decir, de 1970 a 1990) Internet y sus predecesores tenían cuatro aplicaciones principales: Correo electrónico, Noticias, Inicio remoto de sesión, Transferencia de archivos. Hasta principios de la década de 1990, Internet era muy visitada por investigadores académicos, del gobierno e industriales. Una nueva aplicación, WWW (World Wide Web) cambió todo eso y trajo millones de usuarios nuevos no académicos a la red.



## Redes orientadas a la conexión: X.25, Frame Relay y ATM

Desde el inicio de la conectividad surgió una guerra entre aquellos que apoyan a las subredes no orientadas a la conexión (es decir, de datagramas) y quienes apoyan a las subredes orientadas a la conexión. Los principales defensores de las subredes no orientadas a la conexión vienen de la comunidad ARPANET/Internet. Desde el inicio de la conectividad surgió una guerra entre aquellos que apoyan a las subredes
no orientadas a la conexión (es decir, de datagramas) y quienes apoyan a las subredes orientadas a la conexión. Los principales defensores de las subredes no orientadas a la conexión vienen de la comunidad ARPANET/Internet.

## X.25 y Frame Relay
Nuestro primer ejemplo de red orientada a la conexión es la X.25, que fue la primera red de
datos pública. Se desplegó en la década de 1970, cuando el servicio telefónico era un monopolio en todas partes y la compañía telefónica de cada país esperaba que hubiera una red de datos por país —la propia. Para utilizar X.25, una computadora establecía primero una conexión con la computadora remota, es decir, hacía una llamada telefónica. Esta conexión daba un número de conexión para utilizarlo en los paquetes de transferencia de datos (ya que se podían abrir muchas conexiones al mismo tiempo). En la década de 1980, las redes X.25 fueron reemplazadas ampliamente por un nuevo tipo de
red llamada Frame Relay. Ésta es una red orientada a la conexión sin controles de error ni de flujo. Como era orientada a la conexión, los paquetes se entregaban en orden (en caso de que se entregaran todos).


## Modo de Transferencia Asíncrona

ATM se diseñó a principios de la década de 1990 y se lanzó en medio de una increíble exageración (Ginsburg, 1996; Goralski, 1995; Ibe, 1997; Kimn y cols., 1994, y Stallings, 2000). ATM iba a resolver todos los problemas de conectividad y telecomunicaciones fusionando voz, datos, televisión por cable, télex, telégrafo, palomas mensajeras, botes conectados por cordón, tambores, señales de humo y todo lo demás, en un solo sistema integrado que pudiera proporcionar todos los servicios para todas las necesidades.

## Circuitos virtuales de ATM
Puesto que las redes ATM están orientadas a la conexión, el envío de datos requiere que primero se envíe un paquete para establecer la conexión. Conforme el mensaje de establecimiento sigue su camino a través de la subred, todos los conmutadores que se encuentran en la ruta crean una entrada en sus tablas internas tomando nota de la existencia de la conexión y reservando cualquier recursos que necesite la conexión.
Con frecuencia a las conexiones se les conoce como circuitos virtuales, en analogía con los circuitos físicos utilizados en el sistema telefónico. La mayoría de las redes ATM soportan también circuitos virtuales permanentes, que son conexiones permanentes entre dos hosts (distantes).

## El modelo de referencia ATM
ATM tiene su propio modelo de referencia, el cual es diferente del OSI y también del TCP/IP. Consta de tres capas: la física, la ATM y la de adaptación ATM, además de lo que el usuario desee poner arriba de ellas. La capa física tiene que ver con el medio físico, ATM se ha diseñado para ser independiente del medio de transmisión. La capa ATM se encarga de las celdas y su transporte. La interfaz de ATM segmenta estos pa-
quetes, transmite de forma individual las celdas y las reensambla en el otro extremo. Esta capa es la AAL (Capa de Adaptación ATM).


## Ethernet
Internet y ATM se diseñaron para conectividad de área amplia. Sin embargo, muchas empresas, universidades y otras organizaciones tienen un gran número de computadoras que requieren interconexión. Esta necesidad dio origen a la red de área local.
Llamaron Ethernet al sistema, por lo de luminiferous ether, a través del cual se pensó alguna vez que se propagaba la radiación electromagnética.



## LANs inalámbricas: 802.11

Casi al mismo tiempo que aparecieron las computadoras portátiles, muchas personas tuvieron el sueño de andar por la oficina y poder conectar a Internet su computadora. En consecuencia, varios grupos empezaron a trabajar para cumplir con esta meta. El método más práctico es equipar las computadoras de la oficina y las portátiles con transmisores y receptores de radio de onda corta que les permitan comunicarse. Este trabajo condujo rápidamente a que varias empresas empezaran a comercializar las LANs inalámbricas.
 En la jerga común se le conoce como WiFi. Es un estándar importante y merece respeto, así que lo llamaremos por su nombre propio, 802.11.El estándar propuesto tenía que trabajar en dos modos: En presencia de una estación base y en ausencia de una estación base.
