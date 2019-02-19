//
//  CTLCoreParser.h
//  CTLTrackingAds
//
//  Created by thailinh on 9/11/18.
//  Copyright © 2018 thailinh. All rights reserved.
//

#import <Foundation/Foundation.h>
@protocol  CTLCoreParserDelegate <NSObject>
-(id)parserFromModule : (NSArray*)listMsg;
@end
@interface CTLCoreParser : NSObject
-(id)parseData : (NSArray*)listMsg;
@property(weak) id<CTLCoreParserDelegate>delegate;
@end
