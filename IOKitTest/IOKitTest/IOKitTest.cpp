/* add your code here */
#include "IOKitTest.h"
#include <IOKit/IOlib.h>

#define super IOService

OSDefineMetaClassAndStructors(com_yaqinking_driver_IOKitTest, IOService)

bool com_yaqinking_driver_IOKitTest::init(OSDictionary* dict)
{
    bool res = super::init(dict);
    IOLog("IOKitTest::init \n");
    return res;
}

void com_yaqinking_driver_IOKitTest::free(void)
{
    IOLog("IOKitTest::free \n");
    super::free();
}

IOService* com_yaqinking_driver_IOKitTest::probe(IOService *provider, SInt32 *score)
{
    IOService *res = super::probe(provider, score);
    IOLog("IOKitTest::probe \n");
    return res;
}

bool com_yaqinking_driver_IOKitTest::start(IOService *provider)
{
    bool res = super::start(provider);
    IOLog("IOKitTest::start \n");
    return res;
}

void com_yaqinking_driver_IOKitTest::stop(IOService *provider)
{
    IOLog("IOKitTest::stop");
    super::stop(provider);
}

void com_yaqinking_driver_IOKitTest::IterateArray(OSArray *array){
    OSCollectionIterator*   iter;
    iter = OSCollectionIterator::withCollection(array);
    if (iter != NULL) {
        OSObject*   anObject;
        
        while ((anObject = iter -> getNextObject()) != NULL) {
            __unused OSString* aString = OSDynamicCast(OSString, anObject);//__unused 修飾符 消除 未使用變量的警告
        }
        
        iter->release();
    }
}
