#include <scapix/bridge/object.h>

class SomeClass : public scapix::bridge::object<SomeClass> {
 public:
    void func();
};
