#include  <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#define SIZE 1024

void send_email(FILE* email, int fd, struct sockaddr_in addr)

{

int n;
cahr buffer[SIZE];


int main(void)
{
// to deine port and ip

char* ip = "192.168.56.101"
const int port = 143;

//define variable

int fd;
struct sockassr_in server_addr,client_addr;
int f;
char *filename = "clientIMAP.c";
FILE *email =fopen(filename, "r");

//TCP SOCKET CREATED

fd= socket (AF_INET, SOCK_STREAM,0);
if (fd<0)
{

 perror("ERROR, socket has error");
 return -1;

}

server_addr.sin_family=AF_INET;
server_addr.sin_port=port;
server_addr.sin_addr.s_addr= inet_addr(ip);

if ( email= NULL)
{

perror ("FAil on reading email");
return -1;

}

send_file_data(email,fd,server_addr);

print ("[Successfull] .Complete email transfer");
print ("close")

return 0;

}

