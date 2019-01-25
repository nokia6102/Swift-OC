//
//  popView.h
//  Objective-CCode
//
//  Created by ZYK on 2018/4/25.
//  Copyright © 2018年 ZYK. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface popView : UIView

@property (nonatomic, copy) void(^presentControllerBlock)(void);

- (void)showView:(UIViewController *)VC;

@end
