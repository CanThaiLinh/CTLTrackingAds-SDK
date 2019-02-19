//
//  CTLCoreController.h
//  CTLTrackingAds
//
//  Created by thailinh on 9/11/18.
//  Copyright © 2018 thailinh. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CTLTrackingConfig.h"
#import "CTLCoreParser.h"
#import "CTLCoreWorker.h"
#import "CTLCoreBaseData.h"
#import "CTLTrackingManager.h"
@interface CTLCoreController : NSObject <CTLCoreWorkerDelegate>{
    dispatch_source_t _timer;
    NSTimer * myTimer;
    NSInteger counter;
    BOOL isActive;
    BOOL isReady;
}
@property (strong, nonatomic)NSMutableArray * listEvents;
-(id)initWithParser : (CTLCoreParser*)_Parser config : (CTLTrackingConfig*)_Config;
-(void)addMessage : (CTLCoreBaseData*)eventMsg;
-(void)changeServiceConfig : (CTLTrackingConfig*)config;
-(void)active;
-(void)deActive;
-(void)flushData;
@end
