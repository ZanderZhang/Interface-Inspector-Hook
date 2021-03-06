//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSError, NSString, SMInterfaceComponent, SMInterfaceServer;

@protocol SMInterfaceServerDelegate <NSObject>
- (void)interfaceServer:(SMInterfaceServer *)arg1 didChangeValueForKey:(NSString *)arg2 change:(NSDictionary *)arg3 component:(SMInterfaceComponent *)arg4;
- (void)interfaceServer:(SMInterfaceServer *)arg1 didReceiveSelectedComponent:(SMInterfaceComponent *)arg2;
- (void)interfaceServerDidRefreshInterface:(SMInterfaceServer *)arg1;
- (void)interfaceServerDidGetInfo:(SMInterfaceServer *)arg1;
- (void)interfaceServerDidDisconnect:(SMInterfaceServer *)arg1;
- (void)interfaceServer:(SMInterfaceServer *)arg1 didEncounterError:(NSError *)arg2;
@end

