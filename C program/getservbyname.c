#include <stdio.h>
#include <stdlib.h>
#include <netdb.h>
int main()
{
struct servent *s = getservbyname("ftp","tcp");
if (!s) {
printf("No entry found for this service.\n");
exit(1);
}
printf("Service name is %s.\n" "Service port is %d.\n" "Protocol to use is 
%s.\n",s->s_name, s->s_port, s->s_proto);
return 0;
}