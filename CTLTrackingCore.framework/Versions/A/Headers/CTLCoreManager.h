//
//  CTLCoreManager.h
//  CTLTrackingAds
//
//  Created by thailinh on 9/11/18.
//  Copyright © 2018 thailinh. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CTLCoreParser.h"
#import "CTLCoreBaseData.h"
#import "CTLTrackingConfig.h"
@interface CTLCoreManager : NSObject
+(instancetype)sharedInstance;
//-(void)changeURL;
//-(void)setCurrentConfig:(CTLTrackingConfig *)config;
-(void)setCurrentParser:(CTLCoreParser *)p;
-(void)putMessage : (CTLCoreBaseData*)msg forConfig : (CTLTrackingConfig*)config;
-(void)unRegisterService : (CTLTrackingConfig*)config;
-(void)registerService : (CTLTrackingConfig*)config;
-(void)changeServiceConfig : (CTLTrackingConfig*)config;
-(void)flushData : (CTLTrackingConfig*)config;
@end
