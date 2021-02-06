//
//  MQTTClient.h
//  MQTTClient
//
//  Created by Christoph Krey on 13.01.14.
//  Copyright © 2013-2017 Christoph Krey. All rights reserved.
//

/**
 Include this file to use MQTTClient classes in your application
 
 @author Christoph Krey c@ckrey.de
 @see http://mqtt.org
 */

#import <Foundation/Foundation.h>

#import <Min/MQTTSession.h>
#import <Min/MQTTDecoder.h>
#import <Min/MQTTSessionLegacy.h>
#import <Min/MQTTProperties.h>
#import <Min/MQTTMessage.h>
#import <Min/MQTTTransport.h>
#import <Min/MQTTCFSocketTransport.h>
#import <Min/MQTTCoreDataPersistence.h>
#import <Min/MQTTSSLSecurityPolicyTransport.h>
#import <Min/MQTTLog.h>

#if __has_include(<Min/MQTTSessionManager.h>)
#import <Min/MQTTSessionManager.h>
#endif

#if __has_include(<Websocket/MQTTWebsocketTransport.h>)
#import <Websocket/MQTTWebsocketTransport.h>
#endif

//! Project version number for MQTTClient.
FOUNDATION_EXPORT double MQTTClientVersionNumber;

//! Project version string for MQTTClient&lt;.
FOUNDATION_EXPORT const unsigned char MQTTClientVersionString[];

