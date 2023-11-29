//
//  SHResources.h
//  MdcLib
//
//  Created by Sam Green on 5/2/16.
//  Copyright © 2016 MdcLib. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface CTLExtractResources : NSObject

+ (UIImage *)imageNamed:(NSString *)name;
+ (NSBundle *)frameworkBundle;
+(NSURL*) managedDataModel:(NSString*) fileName;

@end
