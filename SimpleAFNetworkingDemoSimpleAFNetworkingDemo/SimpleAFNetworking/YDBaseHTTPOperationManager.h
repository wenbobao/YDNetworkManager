//
//  YDBaseHTTPOperationManager.h
//  wbchat
//
//  Created by bob on 15/9/7.
//  Copyright (c) 2015年 bob. All rights reserved.
//

#import "AFHTTPRequestOperationManager.h"
#import "YDNetWorkConst.h"

@interface YDBaseHTTPOperationManager : AFHTTPRequestOperationManager

+ (instancetype)sharedManager;

- (void)requestJsonDataWithPath:(NSString *)aPath
                     withParams:(NSDictionary*)params
                 withMethodType:(NetworkMethod)method
                       andBlock:(void (^)(id data, NSError *error))block;

- (void)cancelAllRequests;

@end
