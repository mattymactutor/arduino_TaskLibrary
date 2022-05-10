

#define DO_TASK_(T) if(millis()- TASK_ ## T ## _LAST_TIME
#define _EVERY(MS) >=MS){
#define END_TASK(T) TASK_ ## T ## _LAST_TIME=millis();}
#define CREATE_TASK(T) long TASK_ ## T ## _LAST_TIME=0; 
