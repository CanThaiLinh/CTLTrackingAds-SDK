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
+(void)setStatusForSentArray : (NSArray*)arr;
+ (void)setStatusForSentDate : (CTLCoreBaseData*)obj;
@end
