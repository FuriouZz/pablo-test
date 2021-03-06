//
//  TimeLineButton.h
//  TimeLine
//
//  Created by Kolin Weidmann on 30/10/13.
//  Copyright (c) 2013 WEIDMANN Kolin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TimeLineButton : UIButton

@property (nonatomic, retain) CAShapeLayer *btn;
@property (nonatomic) BOOL active;
@property (nonatomic) BOOL transitionning;

- (id)initWithFrame:(CGRect)frame andStateActive:(BOOL)state;
- (void)activateButtonAndKeepState:(BOOL)keepState;
- (void)desactivateButton;

@end
