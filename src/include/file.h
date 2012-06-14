#ifndef   __STDIO_H__ 
    #include <stdio.h>
#endif

#ifndef   __STRING_H__ 
    #include <string.h>
#endif

#ifndef   __UNISTD_H__ 
    #include <unistd.h>
#endif


#ifndef   __FCNTL_H__ 
    #include <fcntl.h> 
#endif




#ifndef   __RK_FILE_H__ 
    #define __RK_FILE_H__
    #define RK_FILE_MAX_PATH 260  
#endif



/**
 * 获取当前进程文件的绝对路径
 * 成功返回 1 错误返回 0
 */
int rk_file_get_path( char * buf, int buf_size );
