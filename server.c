#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>

int main() {

    // un socket crea un punto de comunicacion y devuelve una descripcion de
    // archivo.
    int servidor = socket(AF_INET, SOCK_STREAM, 0);

    // 0. Crear una direccion en local
    struct sockaddr_in direcion;
    // 1. inicializar a 0 esta estrucutra para que no guarde basura
    memset(&direcion, 0, sizeof(direcion));
    // 2 .definir la direccion segun la estructura que ya tiene sockaddr_in
    direcion.sin_family = AF_INET;
    direcion.sin_port = htons(8080);
    direcion.sin_addr.s_addr = INADDR_ANY;

    // 1. Asignar una direccion al punto de comunicacion que hemos creado(socket) usand bind()
    if (bind(servidor, (struct sockaddr *)&direcion, sizeof(direcion)) < 0) {
        perror("bind");
        exit(1);
    }

    return 0;

    //printf("descripcion de archivo:%d\n", file_descriptor);
}
