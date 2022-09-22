//
// Created by dreamscached on 21.9.22.
//

#ifdef __APPLE__

#include "urlopen.hpp"

#include <CoreFoundation/CFBundle.h>
#include <ApplicationServices/ApplicationServices.h>

bool urlopen(const std::string &url) {
    CFURLRef ref = CFURLCreateWithBytes(
        NULL,
        (UInt8*) url_str.c_str(),
        url_str.length(),
        kCFStringEncodingASCII,
        NULL
    );
    LSOpenCFURLRef(ref, 0);
    CFRelease(ref);
}

#endif