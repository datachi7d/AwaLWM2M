/************************************************************************************************************************
 Copyright (c) 2017, Imagination Technologies Limited and/or its affiliated group companies.
 All rights reserved.

 Redistribution and use in source and binary forms, with or without modification, are permitted provided that the
 following conditions are met:
     1. Redistributions of source code must retain the above copyright notice, this list of conditions and the
        following disclaimer.
     2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the
        following disclaimer in the documentation and/or other materials provided with the distribution.
     3. Neither the name of the copyright holder nor the names of its contributors may be used to endorse or promote
        products derived from this software without specific prior written permission.

 THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES,
 INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE
 USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
************************************************************************************************************************/


#include "lwm2m_util.h"

// Get the system tick count in milliseconds
uint64_t Lwm2mCore_GetTickCountMs(void)
{
    return 0;
}


void Lwm2mCore_AddressTypeToPath(char * path, size_t pathSize, AddressType * addr)
{
    (void)path;
    (void)pathSize;
    (void)addr;
}

const char * Lwm2mCore_DebugPrintSockAddr(const struct sockaddr * sa)
{
    (void)sa;
    return NULL;
}

const char * Lwm2mCore_DebugPrintAddress(AddressType * addr)
{
    (void)addr;
    return NULL;
}

bool Lwm2mCore_ResolveAddressByName(unsigned char * address, int addressLength, AddressType * addr)
{
    (void)address;
    (void)addressLength;
    (void)addr;
    return false;
}

int Lwm2mCore_CompareAddresses(AddressType * addr1, AddressType * addr2)
{
    (void)addr1;
    (void)addr2;
    return -1;
}

int Lwm2mCore_ComparePorts(AddressType * addr1, AddressType * addr2)
{
    (void)addr1;
    (void)addr2;
    return -1;
}

int Lwm2mCore_GetIPAddressFromInterface(const char * interface, int addressFamily, char * destAddress, size_t destAddressLength)
{
    (void)interface;
    (void)addressFamily;
    (void)destAddress;
    (void)destAddressLength;
    return -1;
}