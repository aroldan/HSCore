//
//  HSRoutingDelegate.h
//  HSCore
//
//  Created by Anthony Roldan on 7/13/14.
//  Copyright (c) 2014 HubSpot. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol HSRoutingDelegate <NSObject>

- (void)shouldPushViewController:(UIViewController *)controller;

@end