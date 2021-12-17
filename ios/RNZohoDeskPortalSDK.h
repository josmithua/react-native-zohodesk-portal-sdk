//
//  RNZohoDeskPortalSDK.h
//  RNZohodeskPortalSdk
//
//  Created by bala-zt124 on 28/07/20.
//  Copyright © 2020 Facebook. All rights reserved.
//

#import <React/RCTEventEmitter.h>
#import <React/RCTBridgeModule.h>

typedef NS_ENUM(NSInteger, RNZDThemeType) {
/// Light theme
  RNZDThemeLight = 0,
/// Dark Theme
  RNZDThemeDark = 1,
};

@interface RNZohoDeskPortalSDK : NSObject <RCTBridgeModule>

+ (void)setDeviceIDForZDPortal: (NSString *) deviceID;
+ (void)processRemoteNotification:(NSDictionary *) userInfo;
+ (void)setTheme:(RNZDThemeType) type;

@end
