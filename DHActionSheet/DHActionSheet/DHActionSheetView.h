//
//  DHActionSheetView.h
//  DHActionSheet
//
//  Created by Calvin on 2017/8/24.
//  Copyright © 2017年 aethercoder. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DHActionSheetView;


@protocol DHActionSheetViewDelegate <NSObject>

@optional

/**
 选中第几个
 
 */
- (void)actionSheet:(DHActionSheetView *)actionSheet clickedButtonAtIndex:(NSInteger)buttonIndex;

/**
 即将消失
 
 */
- (void)actionSheet:(DHActionSheetView *)actionSheet willDismissWithButtonIndex:(NSInteger)buttonIndex;

/**
 已经消失
 
 */
- (void)actionSheet:(DHActionSheetView *)actionSheet didDismissWithButtonIndex:(NSInteger)buttonIndex;


@end

typedef void(^DHActionSheetViewBlock)(NSInteger index);

@interface DHActionSheetView : UIView

/**
 操作按钮个数
 */
@property (nonatomic, assign, readonly) NSInteger numberOfButtons;

/**
 取消按钮
 */
@property (nonatomic, assign, readonly) NSInteger cancelButtonIndex;

/**
 第几个按钮
 */
@property (nonatomic, assign, readonly) NSInteger destructiveButtonIndex;

/**
 声明代理
 */
@property (nonatomic, weak) id<DHActionSheetViewDelegate>actionSheetViewDelegate;

/**
 操作block
 */
@property (nonatomic, copy) DHActionSheetViewBlock acitonSheetBlock;


#pragma mark - methods

/**
 初始化 代理方法调用
 
 @param title title
 @param delegate delegate
 @param cancelButtonTitle cancelButtonTitle
 @param destructiveButtonTitle destructiveButtonTitle
 @param otherButtonTitles otherButtonTitles
 @return ..
 */
- (instancetype)initWithTitle:(NSString *)title
                     delegate:(id<DHActionSheetViewDelegate>)delegate
            cancelButtonTitle:(NSString *)cancelButtonTitle
       destructiveButtonTitle:(NSString *)destructiveButtonTitle
            otherButtonTitles:(NSString *)otherButtonTitles, ...;

/**
 初始化   block方式调用
 
 @param title 提示语
 @param cancelButtonTitle 取消按钮
 @param destructiveButtonTitle 确定按钮
 @param otherButtons 其他操作 可以为nil
 @param actionSheetBlock 操作事件block
 @return ..
 */
- (instancetype)initWithTitle:(NSString *)title
            cancelButtonTitle:(NSString *)cancelButtonTitle
       destructiveButtonTitle:(NSString *)destructiveButtonTitle
            otherButtonTitles:(NSArray *)otherButtons
             actionSheetBlock:(DHActionSheetViewBlock)actionSheetBlock;

/**
 显示
 */
- (void)dh_show;

/**
 点击操作按钮
 
 @param buttonIndex ..
 @return ..
 */
- (NSString *)dh_buttonTitleAtIndex:(NSInteger)buttonIndex;

@end
