//
//  Tracking+CoreDataProperties.h
//  
//
//  Created by Le Minh Son on 2/19/19.
//
//  This file was automatically generated and should not be edited.
//

#import "Tracking+CoreDataClass.h"


NS_ASSUME_NONNULL_BEGIN

@interface Tracking (CoreDataProperties)

+ (NSFetchRequest<Tracking *> *)fetchRequest;

@property (nullable, nonatomic, retain) NSData *content;
@property (nullable, nonatomic, copy) NSString *optionString;
@property (nonatomic) int32_t status;
@property (nonatomic) int64_t timeStamp;
@property (nullable, nonatomic, copy) NSString *uniqueID;
@property (nullable, nonatomic, copy) NSString *url;

@end

NS_ASSUME_NONNULL_END
