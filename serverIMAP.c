#include <stdio.h>
#include <stdlib.h>
#include  <string.h>
#include  <unistd.h>


#define SIZE 1024

void send_email(int fd, struct sockaddr_in addr)

{

 char *email= " ServerIMAPEmail.c")
int i;
char buffer[SIZE};
socklen_t addr_size;

// Send email

FILE* email - email - fopen(email, "w")

int main()

// define ip and the port

char* ip = " 192.168.56.103"
const int port = 143;

// define variable

int fd;
struct sockaddr_in server_addr, client_addr;
char buffer[SIZE];
int o;


// TCP CREATED

fd =socket(AF_INET,SOCK_STREAM,0)
if (fd<0)

{

 printf("Error")

exit (1)

server_addr.sin_family= AF_INIT;
server_addr.sin_port=port;
server_addr.sin_addr.s_addr = inet_addr(ip);

o= bind (fd,(struct sockaddr*)*server_addr, sizeof(server_addr)

if (o<0)

printf ("error");
exit (1)

}

printf ("[Starting]")

close(fd);
return 0
}
