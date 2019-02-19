//
//  CTLTrackingStore.h
//  CTLTracking
//
//  Created by thailinh on 8/14/18.
//  Copyright © 2018 thailinh. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
@interface CTLTrackingStore : NSObject
@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
+(instancetype)sharedInstance;
- (void)saveContext;
@end
