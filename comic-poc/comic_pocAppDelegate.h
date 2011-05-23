//
//  comic_pocAppDelegate.h
//  comic-poc
//
//  Created by nimbus on 5/23/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class comic_pocViewController;

@interface comic_pocAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet comic_pocViewController *viewController;

@end
