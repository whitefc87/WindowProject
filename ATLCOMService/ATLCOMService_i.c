

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Sat May 03 00:01:44 2014
 */
/* Compiler settings for ATLCOMService.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0603 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_ISimpleObject,0x1B877090,0x76CD,0x4EDE,0x81,0x15,0xEC,0x4C,0xCD,0x96,0x76,0xF3);


MIDL_DEFINE_GUID(IID, LIBID_ATLCOMServiceLib,0xCC2CA6F0,0x2220,0x4D77,0xBA,0x46,0x4B,0xCB,0x62,0x15,0x6A,0x28);


MIDL_DEFINE_GUID(IID, DIID__ISimpleObjectEvents,0x7DACF5E9,0x2885,0x4E4E,0x83,0xDD,0xCA,0x6C,0xC3,0xA8,0x8B,0x6D);


MIDL_DEFINE_GUID(CLSID, CLSID_SimpleObject,0x388F1C82,0xED00,0x4966,0x95,0x90,0x02,0xF6,0xB9,0xCC,0xA4,0x1B);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



