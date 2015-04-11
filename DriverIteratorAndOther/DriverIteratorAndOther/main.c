//
//  main.c
//  DriverIteratorAndOther
//
//  Created by yaqinking on 4/11/15.
//  Copyright (c) 2015 yaqinking. All rights reserved.
//
#include <CoreFoundation/CoreFoundation.h>
#include <IOKit/IOKitLib.h>

int main(int argc, const char * argv[]) {
    CFDictionaryRef     matchingDict = NULL;
    io_iterator_t       iter = 0;
    io_service_t        service = 0;
    kern_return_t       kr;
    
    matchingDict = IOServiceMatching("IOUSBDevice");
    kr = IOServiceGetMatchingServices(kIOMasterPortDefault, matchingDict, &iter);
    if (kr != KERN_SUCCESS) {
        return -1;//exit
    }
    
    while ((service = IOIteratorNext(iter)) != 0) {
        CFStringRef     className;
        io_name_t       name;
        
        className = IOObjectCopyClass(service);
        
        if (CFEqual(className, CFSTR("IOUSBDevice")) == true) {
            IORegistryEntryGetName(service, name);
            printf("Found device with name : %s\n",name);
            
        }
        
        CFRelease(className);
        IOObjectRelease(service);
    }
    
    IOObjectRelease(iter);
    return 0;
}
