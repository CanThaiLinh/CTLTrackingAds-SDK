//
//  CTLTrackingManager.h
//  CTLTracking
//
//  Created by thailinh on 8/14/18.
//  Copyright © 2018 thailinh. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CTLTrackingStore.h"
#import "CTLCoreBaseData.h"
@interface CTLTrackingManager : NSObject{
   
}
+(BOOL)insertToDatabaseMessage : (CTLCoreBaseData*)obj;
+ (NSArray*)getDataForEntityLimit :(NSInteger)limit;
+ (NSArray*)getDataForEntityAttributeUniqueID : (NSString*)url limit :(NSInteger)limit;
+ (void)deleteAllTrackingSentOfUniqueID : (NSString*)uniqueID;
+ (void)deleteAllTrackingSent;
+ (NSDictionary*)scanDataLimit :(NSInteger)limit status :(NSInteger)status;
+(void)setStatusForArray : (NSArray*)arr status: (NSInteger) status;
+ (void)setStatusForSentDate : (CTLCoreBaseData*)obj status: (NSInteger)status;
+ (void)setStatusForSentDateListEvent:(NSArray *)arr status: (NSInteger)status;
+ (void)getPendingArr:(NSInteger) status;
+ (void)deleteAllTrackingSentBlock :(void (^) (bool isComplete)) completion;
@end
