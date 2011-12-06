#ifndef _DEBUG_H_
#define _DEBUG_H_


#ifdef DODEBUG

#define DEBUG(fmt,a...) printf("D:%s:%d> " fmt "\n",__FILE__,__LINE__,##a)
#define ENTER DEBUG("Entering %s",__FUNCTION__)
#define EXIT DEBUG("Exiting %s",__FUNCTION__)
#define RETURN(x) { DEBUG("Return(%x,%d,%p) %s",(int)(x),(int)(x),(void*)(long)(x),__FUNCTION__); return(x); }
#define SYS_EXIT(x) { DEBUG("exit(%d) %s",(x),__FUNCTION__); exit(x); }

#define malloc(x) (DEBUG("Malloc Called for %d bytes",x),malloc(x))


#else

#define DEBUG(fmt,a...)
#define ENTER
#define EXIT
#define RETURN(x) return(x)
#define SYS_EXIT(x) exit(x)

#endif

#endif

