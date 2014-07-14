//
//  HSRoute.h
//  HSCore
//
//  Created by Anthony Roldan on 7/13/14.
//  Copyright (c) 2014 HubSpot. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HSRoutingDelegate.h"

@interface HSRoute : NSObject

+ (HSRoute *)routeWithUrl:(NSString *)url andAction:(HSRoutingActionBlock)action;

@property (strong, nonatomic) NSString *url;
@property (strong, nonatomic) HSRoutingActionBlock action;

@end