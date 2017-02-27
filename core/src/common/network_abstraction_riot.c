/************************************************************************************************************************
 Copyright (c) 2016, Imagination Technologies Limited and/or its affiliated group companies.
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

#include "network_abstraction.h"


NetworkAddress * NetworkAddress_New(const char * uri, int uriLength)
{
    (void)uri;
    (void)uriLength;
    return NULL;
}

int NetworkAddress_Compare(NetworkAddress * addressX, NetworkAddress * addressY)
{
    (void)addressX;
    (void)addressY;
    return -1;
}

void NetworkAddress_SetAddressType(NetworkAddress * address, AddressType * addressType)
{
    (void)address;
    (void)addressType;
}

void NetworkAddress_Free(NetworkAddress ** address)
{
    (void)address;
}

bool NetworkAddress_IsSecure(const NetworkAddress * address)
{
    (void)address;
    return false;
}

NetworkSocket * NetworkSocket_New(const char * ipAddress, NetworkSocketType socketType, uint16_t port)
{
    (void)ipAddress;
    (void)socketType;
    (void)port;
    return NULL;
}

NetworkSocketError NetworkSocket_GetError(NetworkSocket * networkSocket)
{
    (void)networkSocket;
    return NetworkSocketError_NoError;
}

int NetworkSocket_GetFileDescriptor(NetworkSocket * networkSocket)
{
    (void)networkSocket;
    return -1;
}

void NetworkSocket_SetCertificate(NetworkSocket * networkSocket, const uint8_t * cert, int certLength, AwaCertificateFormat format)
{
    (void)networkSocket;
    (void)cert;
    (void)certLength;
    (void)format;
}

void NetworkSocket_SetPSK(NetworkSocket * networkSocket, const char * identity, const uint8_t * key, int keyLength)
{
    (void)networkSocket;
    (void)identity;
    (void)key;
    (void)keyLength;
}

bool NetworkSocket_StartListening(NetworkSocket * networkSocket)
{
    (void)networkSocket;
    return false;
}

bool NetworkSocket_Read(NetworkSocket * networkSocket, uint8_t * buffer, int bufferLength, NetworkAddress ** sourceAddress, int *readLength)
{
    (void)networkSocket;
    (void)buffer;
    (void)bufferLength;
    (void)sourceAddress;
    (void)readLength;
    return false;
}

bool NetworkSocket_Send(NetworkSocket * networkSocket, NetworkAddress * destAddress, uint8_t * buffer, int bufferLength)
{
    (void)networkSocket;
    (void)destAddress;
    (void)buffer;
    (void)bufferLength;
    return false;
}

void NetworkSocket_Free(NetworkSocket ** networkSocket)
{
    (void)networkSocket;
}