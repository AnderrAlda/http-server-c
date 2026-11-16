- Quiero hacer un servidor http, con el objetivo de indagamar mi conocimiento mas hacia el low level y convertirme en aquello que se llama "cracked developer"

- Empezemos con lo basico. Que es un servidor HTTP?
HTTP es el protocolo que sirve toda internet.

Enviamos una peticione mediante el protocolo de http usando el stack de tcp/ip, que es el que hace todo el routing y el transporte de la nuestre informacion http. Y un servidor http simplemente es el que recibe esta peticion y devuelve el contenido de la web. Lo que recibmos del servidor es un archivo html.

- Y en este proyecto vamos a programar este servidor en C.

- Se pueden hacer diferentes peticiones al servidor, ademas de decargar su contenido, se puede hacer una peticione que cree nuevos archivos, o que edite los archivos, etc. Estos serian los miticos: GET,POST,PUT,DELETE, PATCH


- IP: Seria el protocolo que define las direcciones de ip 
- TCP: Es el protocolo que permite todo el tema de los puertos, que en el mismo servidor hay varios puertos. Tambien controlar los errores, y que todos los paketes se hayan enviando en el orden en el que se han pedido.


- Si queremos crear un servidor HTTP, tenemosque enviar data mediante tcp/ip. Basicamente estamos creando una aplicacion tcp/ip.
