#include <IOKit/usb/IOUSBDevice.h>

class com_yaqinking_MyFirstUSBDriver : public IOService
{
    OSDeclareDefaultStructors(com_yaqinking_MyFirstUSBDriver)
public:
    virtual bool init(OSDictionary *propTable);
    virtual IOService* probe(IOService *provider, SInt32 *score);
    virtual bool attach(IOService *provider);
    virtual void detach(IOService *provider);
    virtual bool start(IOService *provider);
    virtual void stop(IOService *provider);
    virtual bool terminate(IOOptionBits options = 0);
};