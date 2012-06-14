#include "./include/file.h"

int rk_file_get_path( char * buf, int buf_size ){
    
    char pidfile[64];  
    int bytes;  
    int fd;  
    char * p;
    
    
    sprintf(pidfile, "/proc/%d/cmdline", getpid());  
  
    fd = open(pidfile, O_RDONLY, 0);
    
    if( fd == -1 ){
        perror("could not opoen the pid file");
        close(fd);
        return -1;
    }  
    bytes = read(fd, buf, buf_size);  
    
    if( bytes == -1 ){
        perror( "when get the path, the pid cmdline file has no content" );
        close(fd);
        return -1;
    }
    
    close(fd);  
    
    p = &buf[strlen(buf)];
    
    //去掉./a.out 中的 a.out 就是当前path
    do   
    {  
        *p = '\0';  
        p--;   
    } while( '/' != *p );  
    
    
    return 1; 
}
