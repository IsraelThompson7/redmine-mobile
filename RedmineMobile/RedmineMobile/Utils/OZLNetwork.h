//
//  OZLNetwork.h
//  RedmineMobile
//
//  Created by Lee Zhijie on 7/14/13.
//  Copyright (c) 2013 Lee Zhijie. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface OZLNetwork : NSObject

+(void)getProjectListWithBlock:(void (^)(NSDictionary *result, NSError *error))block;

@end
