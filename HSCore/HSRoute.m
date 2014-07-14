//
//  HSRoute.m
//  HSCore
//
//  Created by Anthony Roldan on 7/13/14.
//  Copyright (c) 2014 HubSpot. All rights reserved.
//

#import "HSRoute.h"

@implementation HSRoute

+ (HSRoute *)routeWithUrl:(NSString *)url andAction:(HSRoutingActionBlock)action {
    HSRoute *route = [[HSRoute alloc] init];
    route.url = url;
    route.action = action;
    
    return route;
}

@end
