//
//  JSQMessageTotalLikesButtonDataSource.h
//  JSQMessages
//
//  Created by 莊英祺 on 2017/8/2.
//  Copyright © 2017年 Hexed Bits. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol JSQMessageButtonDataSource <NSObject>

@required

- (nullable UIImage *)image;

- (nullable NSString *)text;

- (nullable UIColor *)color;

@end

NS_ASSUME_NONNULL_END
