//
//  HSBaseApp.h
//  HSCore
//
//  Created by Anthony Roldan on 5/17/13.
//  Copyright (c) 2013 HubSpot. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@protocol HSBaseApp <NSObject>

+ (UINavigationController *)baseNavigationController;
+ (NSString *)appIdentifierString; // string used to persist apps
+ (NSArray *)routesToRegister;

@end
