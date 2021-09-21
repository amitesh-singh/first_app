
/*
 * This file was automatically generated by sdbus-c++-xml2cpp; DO NOT EDIT!
 */

#ifndef __sdbuscpp__client_intf_h__proxy__H__
#define __sdbuscpp__client_intf_h__proxy__H__

#include <sdbus-c++/sdbus-c++.h>
#include <string>
#include <tuple>

namespace org {
namespace cpu {

class getid_proxy
{
public:
    static constexpr const char* INTERFACE_NAME = "org.cpu.getid";

protected:
    getid_proxy(sdbus::IProxy& proxy)
        : proxy_(proxy)
    {
    }

    ~getid_proxy() = default;

public:
    int32_t id()
    {
        return proxy_.getProperty("id").onInterface(INTERFACE_NAME);
    }

private:
    sdbus::IProxy& proxy_;
};

}} // namespaces

#endif
