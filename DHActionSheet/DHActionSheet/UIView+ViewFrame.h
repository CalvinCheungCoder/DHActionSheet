//
//  UIView+ViewFrame.h
//  DHActionSheet
//
//  Created by Calvin on 2017/8/24.
//  Copyright © 2017年 aethercoder. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (ViewFrame)

@property (nonatomic, assign) CGFloat x;
@property (nonatomic, assign) CGFloat y;

@property (nonatomic, assign) CGPoint origin;
@property (nonatomic, assign) CGSize size;

@property (nonatomic) CGFloat centerX;
@property (nonatomic) CGFloat centerY;

@property (nonatomic) CGFloat top;
@property (nonatomic) CGFloat bottom;
@property (nonatomic) CGFloat right;
@property (nonatomic) CGFloat left;

@property (nonatomic) CGFloat width;
@property (nonatomic) CGFloat height;

@end
