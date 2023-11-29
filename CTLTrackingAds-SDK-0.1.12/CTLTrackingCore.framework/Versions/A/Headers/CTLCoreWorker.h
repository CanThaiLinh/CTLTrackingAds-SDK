//
//  CTLCoreWorker.h
//  CTLTrackingAds
//
//  Created by thailinh on 9/11/18.
//  Copyright © 2018 thailinh. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CTLTrackingConfig.h"
#import "CTLCoreParser.h"
@protocol CTLCoreWorkerDelegate <NSObject>
-(void)callBackSendToServer : (BOOL)isSuccess;
@end
@interface CTLCoreWorker : NSObject{
    BOOL isSendingSever;
}
-(id)initWithParser : (CTLCoreParser*)_Parser config : (CTLTrackingConfig*)_Config;
@property (weak) id<CTLCoreWorkerDelegate>delegate;
-(void)run : (NSArray*)listMsg completion:(void (^) ( NSArray * arrDidSend)) completion failure : (void(^)(NSString * errorString))failure cancelRequest : (void(^)()) cancelRequest;
-(BOOL)isReadyForSend;
@end
