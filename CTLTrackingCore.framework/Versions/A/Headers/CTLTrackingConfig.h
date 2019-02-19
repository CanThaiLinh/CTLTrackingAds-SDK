//
//  CTLTrackingConfig.h
//  CTLTracking
//
//  Created by thailinh on 8/14/18.
//  Copyright © 2018 thailinh. All rights reserved.
//

#import <Foundation/Foundation.h>
#define kDefaultTrackingTime 300
#define kDefaultTrackingNumberLimit 50;
@interface CTLTrackingConfig : NSObject
@property (strong,nonatomic)NSString * url;
@property (strong,nonatomic)NSString *uniqueID;
// service will send data when numberLimitToSend messages or timescheduletosend seconds
-(NSInteger)getNumberLimit;
-(NSInteger)getTrackingTime;
-(void)setNumberLimit : (NSInteger)number;
-(void)setTimeSchedule : (NSInteger)timeSecond;
-(BOOL)getIsShowDebug;
-(void)setIsShowDebug : (BOOL)isValue;
@end
