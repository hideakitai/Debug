// uncommend DEBUGLOG_RELEASE_MODE disables ASSERT and all debug serial (Release Mode)
// #define DEBUGLOG_RELEASE_MODE

// you can also set default log level by defining macro
// #define DEBUGLOG_DEFAULT_LOGLEVEL LogLevel::WARNINGS

#include <DebugLog.h>

// you can define your own flag to control the scope of DebugLog
// in this example, you can control DebugLog only inside of "MyClass.h" depending on this flag
// see also "MyClass.h"
#define MYCLASS_ENABLE_DEBUGLOG
#include "MyClass.h"

void setup() {
    Serial.begin(115200);
    delay(2000);

    LOG_VERBOSE("Create MyClass");

    MyClass myclass;
    myclass.hello();

    LOG_VERBOSE("MyClass is going to be destroyed");
}

void loop() {
}
