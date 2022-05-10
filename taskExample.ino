#include "task.h"

//Create as many tasks as you need
//NOTE: each task will use 4 bytes of memory because a "long" is created to keep track of the time
CREATE_TASK(1)
CREATE_TASK(2)
CREATE_TASK(3)

void setup() {
  Serial.begin(9600);
  Serial.println("--Task Example--");
}

void loop() {
  //DO_TASK()_EVERY() will do a task every so many milliseconds. You cannot call this if you have not created a task for it at the top first.
  //You must end the task afterwards.To do that you have to provide the task number so Arduino knows which task is ending.
  //---Format----
  //DO_TASK(*the task number*)_EVERY(*time in milliseconds to wait in between runs*)
  
  DO_TASK_(1)_EVERY(1000)
    Serial.println("1 second");
  END_TASK(1)

  DO_TASK_(2)_EVERY(2000)
    Serial.println("\t2 seconds");
  END_TASK(2)

  DO_TASK_(3)_EVERY(3000)
    Serial.println("\t\t3 seconds");
  END_TASK(3)
    
}
