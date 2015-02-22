//
//  FRYDefines.h
//  FRY
//
//  Created by Brian King on 10/9/14.
//  Copyright (c) 2014 Raizlabs. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef BOOL(^FRYCheckBlock)();

OBJC_EXTERN NSTimeInterval const kFRYEventDispatchInterval;


#define FRY_APP [UIApplication sharedApplication]
#define FRY_KEY_WINDOW [[UIApplication sharedApplication] keyWindow]

typedef NS_ENUM(NSInteger, FRYDirection) {
    FRYDirectionUp = 1,
    FRYDirectionDown,
    FRYDirectionRight,
    FRYDirectionLeft
};

