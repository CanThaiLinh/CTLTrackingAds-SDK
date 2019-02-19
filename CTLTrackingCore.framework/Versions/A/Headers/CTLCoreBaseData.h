//
//  CTLCoreBaseData.h
//  CTLTrackingAds
//
//  Created by thailinh on 9/11/18.
//  Copyright © 2018 thailinh. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CTLCoreBaseData : NSObject
@property (strong,nonatomic) NSString * destinationUrl;
@property (strong,nonatomic) NSString * socketPort;
@property (strong,nonatomic) NSString * optionString;
@property (strong,nonatomic) NSData * contentTracking;
@property (strong,nonatomic) NSNumber * timeStamp;
@property (strong,nonatomic) NSNumber * status;
@property (strong,nonatomic) NSString * uniqueID;
@property (strong,nonatomic) NSNumber * isForceSend;
@end
