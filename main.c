#include <termios.h>
#include <sys/ioctl.h>
#include <signal.h>

#include <sys/types.h>// for file orw
#include <sys/stat.h>// for file orw
#include <fcntl.h>// for file orw

#include <unistd.h>// for cli
#include <stdlib.h>// for cli
#include <string.h>// for cli
#include <stdio.h>// for cli

int main(int argc, char ** argv)
{
	int flags, opt;
	int fd;
	char **buf = (char**) malloc( sizeof(char*) );

	while( (opt = getopt(argc, argv, "i:o:>:") ) != -1 )
	{
		switch(opt){
			case '>':
			case 'o':
				fd = open( optarg, O_WRONLY);
				buf[0] = (char*) malloc( sizeof(char) * 80 );
				scanf("%s", buf[0]);
				write(fd, buf[0], strlen(buf[0]));
				close( fd );
//				printf("filename: %s\n", optarg);
				break;
			case 'i':
				fd = open( optarg, O_RDONLY);
				buf[0] = (char*) malloc( sizeof(char) * 80 );
				read(fd, buf[0], 80);
				close( fd );
				printf("%s\n", buf[0]);
				break;

			default:
				printf( "%s [-i <read filename>] [-o|> write filename>]", argv[0]); 
				break;
		}

	}

	exit(EXIT_SUCCESS);
}

