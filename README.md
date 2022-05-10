# Task Library
This is a 4 line macro that makes NON_BLOCKING arduino code easy. An example has been provided.

## Install
```
Download "task.h"
Navigate to the Arduino Libraries Folder (On Windows most likely ~/My Documents/Arduino/Libraries)
Make a new folder called "task"
Copy and paste "task.h" into that folder
```

## How To

Above the setup, create as many tasks as you need.
```
CREATE_TASK(1)
CREATE_TASK(2)
...
...
CREATE_TASK(10)
```

Lets print some messages to show how to use the library
```
void setup() {
  Serial.begin(9600);
  Serial.println("---Task Example---");
}
```

In the loop, define tasks that you want to do every so many milliseconds. 
```
void loop(){

  DO_TASK_(1)_EVERY(1000)
    Serial.println("1 seconds");
  END_TASK(1)

  DO_TASK_(2)_EVERY(2000)
    Serial.println("2 seconds");
  END_TASK(2)

  DO_TASK_(3)_EVERY(3000)
    Serial.println("3 seconds");
  END_TASK(3)
  }
  ```
