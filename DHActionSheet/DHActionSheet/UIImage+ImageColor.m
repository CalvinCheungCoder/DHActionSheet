//
//  UIImage+ImageColor.m
//  DHActionSheet
//
//  Created by Calvin on 2017/8/24.
//  Copyright © 2017年 aethercoder. All rights reserved.
//

#import "UIImage+ImageColor.h"

@implementation UIImage (ImageColor)

//
+ (UIImage *)dh_imageWithColor:(UIColor *)color{
    CGRect rect = CGRectMake(0.0f, 0.0f, 1.0f, 1.0f);
    UIGraphicsBeginImageContext(rect.size);
    CGContextRef context = UIGraphicsGetCurrentContext();
    CGContextSetFillColorWithColor(context, [color CGColor]);
    CGContextFillRect(context, rect);
    UIImage *theImage = UIGraphicsGetImageFromCurrentImageContext();
    UIGraphicsEndImageContext();
    
    return theImage;
}

@end
