//
//  THPinCircleButton.h
//  THPinViewController
//
//  Created by Thomas Heß on 14.4.14.
//  Copyright (c) 2014 Thomas Heß. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface THPinCircleButton : UIButton

@property (nonatomic, readonly, assign) NSUInteger number;
@property (nonatomic, readonly, copy) NSString *letters;

- (instancetype)initWithFrame:(CGRect)frame number:(NSUInteger)number letters:(NSString *)letters;
+ (CGFloat)diameter;

@end
