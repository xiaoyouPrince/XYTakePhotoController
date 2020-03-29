//
//  XYTakePhotoController.h
//  XYTakePhotoController
//
//  Created by 渠晓友 on 2020/3/29.
//  Copyright © 2020 渠晓友. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface XYTakePhotoController : UIViewController

@property (nonatomic, copy) NSString *tipTitle;
/** 是否拍摄正面(默认正面) */
@property (nonatomic, assign)         BOOL isFront;
/** 是否为拍摄两张(默认1张) */
@property (nonatomic, assign)         BOOL isModeFrontRear;


@property (nonatomic, copy) void (^takePhoteSuccessBlock)(UIImage *photo);

@property (nonatomic, copy) void (^TwoBlock)(NSArray <UIImage *> *photo);

@end

NS_ASSUME_NONNULL_END
