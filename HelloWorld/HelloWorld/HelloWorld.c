//
//  HelloWorld.c
//  HelloWorld
//
//  Created by yaqinking on 4/11/15.
//  Copyright (c) 2015 yaqinking. All rights reserved.
//

#include <mach/mach_types.h>
#include <libkern/libkern.h>

kern_return_t HelloWorld_start(kmod_info_t * ki, void *d);
kern_return_t HelloWorld_stop(kmod_info_t *ki, void *d);

kern_return_t HelloWorld_start(kmod_info_t * ki, void *d)
{
    printf("Hello world by yaqinking ! \n");
    
    return KERN_SUCCESS;
}

kern_return_t HelloWorld_stop(kmod_info_t *ki, void *d)
{
    printf("Goodbye world \n");
    return KERN_SUCCESS;
}
