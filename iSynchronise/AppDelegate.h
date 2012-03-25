//
//  AppDelegate.h
//  iSynchronise
//
//  Created by Stephen Morris on 25/03/2012.
//  Copyright Greenfly Studios 2012. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RootViewController;

@interface AppDelegate : NSObject <UIApplicationDelegate> {
	UIWindow			*window;
	RootViewController	*viewController;
}

@property (nonatomic, retain) UIWindow *window;

@end
