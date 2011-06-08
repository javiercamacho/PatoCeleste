//
//  RodriTranslatorAppDelegate.h
//  RodriTranslator
//
//  Created by Javier on 6/8/11.
//  Copyright 2011 Globant. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RodriTranslatorViewController;

@interface RodriTranslatorAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet RodriTranslatorViewController *viewController;

@end
